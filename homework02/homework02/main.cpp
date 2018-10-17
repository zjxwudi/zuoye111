#include <QCoreApplication>
#include <QDebug>
#include <QVector>
#include <QTextStream>
#include <QFile>

//定义命名空间SK，将文本文件划分为不同的列
namespace SK {
enum SortKind{
    col01    =   0x00000001<<0,         //!< 第1列
    col02    =   0x00000001<<1,         //!< 第2列
    col03    =   0x00000001<<2,         //!< 第3列
    col04    =   0x00000001<<3,         //!< 第4列
    col05    =   0x00000001<<4,         //!< 第5列
    col06    =   0x00000001<<5,         //!< 第6列
    col07    =   0x00000001<<6,         //!< 第7列
    col08    =   0x00000001<<7,         //!< 第8列
    col09    =   0x00000001<<8,         //!< 第9列
    col10    =   0x00000001<<9,         //!< 第10列
    col11    =   0x00000001<<10,        //!< 第11列
    col12    =   0x00000001<<11,        //!< 第12列
    col13    =   0x00000001<<12,        //!< 第13列
    col14    =   0x00000001<<13,        //!< 第14列
    col15    =   0x00000001<<14,        //!< 第15列
    col16    =   0x00000001<<15,        //!< 第16列
    col17    =   0x00000001<<16,        //!< 第17列
    col18    =   0x00000001<<17,        //!< 第18列
    col19    =   0x00000001<<18,        //!< 第19列
    col20    =   0x00000001<<19,        //!< 第20列
    col21    =   0x00000001<<20,        //!< 第21列
    col22    =   0x00000001<<21,        //!< 第22列
    col23    =   0x00000001<<22,        //!< 第23列
    col24    =   0x00000001<<23,        //!< 第24列
    col25    =   0x00000001<<24,        //!< 第25列
    col26    =   0x00000001<<25,        //!< 第26列
    col27    =   0x00000001<<26,        //!< 第27列
    col28    =   0x00000001<<27,        //!< 第28列
    col29    =   0x00000001<<28,        //!< 第29列
    col30    =   0x00000001<<29,        //!< 第30列
    col31    =   0x00000001<<30,        //!< 第31列
    col32    =   0x00000001<<31,        //!< 第32列
};
}

//信息存储结构体
typedef struct
{
    QStringList form;
} studData;




QDebug operator << (QDebug d, const studData &data)
{
    for(int i=0;i<data.form.size();i++)
    d<<data.form.at(i)<<"\t" ;
    return d;
}



class myCmp
{
public:
    myCmp(int selectedColumn) { this->currentColumn = selectedColumn; }
    bool operator() (const studData& d1,const studData& d2);
private:
    int currentColumn;
};


bool myCmp::operator()(const studData &d1, const studData &d2)
{
    if(d1.form.at (currentColumn+1)>d2.form.at(currentColumn+1))
        return true ;
    else
        return false;
}



class ScoreSorter
{
public:
    ScoreSorter(QString dataFile);
    void read();
    void doSort();
    friend QDebug operator << (QDebug d, const studData &data);
private:
    QString path;
    QList<studData > data;
    studData Listtitle;
    void write(quint8 lie);
};


ScoreSorter::ScoreSorter(QString dataFile)
{
    this->path=dataFile;
}

void ScoreSorter::read()//读取
{
    QFile file(this->path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"无法打开文件!"<<endl;
    }

    QString titile(file.readLine());
    this->Listtitle.form = titile.split(" ", QString::SkipEmptyParts);
    if((this->Listtitle.form).last() == "\n") this->Listtitle.form.removeLast();
    studData eachdata;

    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str(line);

        eachdata.form = str.split(" ", QString::SkipEmptyParts);
        if((eachdata.form).last() == "\n") eachdata.form.removeLast();
        if(eachdata.form.size()==0) continue;
        this->data.append(eachdata);
    }
    file.close();
}

void ScoreSorter::doSort()  //写到文件
{
    for(int i=1;i<this->Listtitle.form.size();i++)
    {
        myCmp stducmp(i-1);
        std::sort(this->data.begin() , this->data.end() , stducmp );

        qDebug()<<"排序后输出，当前排序第 "<<i+1 <<" 列：";
        qDebug() << '\t'<< (this->Listtitle);

        for(int i=0;i<this->data.size();i++)  qDebug() << this->data.at(i);
        qDebug()<<"---------------------------------------------------------------\n";
        this->write(i+1);
    }
}


void ScoreSorter::write(quint8 lie)//写入
{
   QFile file("sorted_"+this->path);

    file.open(QIODevice::ReadWrite | QIODevice::Append);
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    stream<<QString("排序后输出，当前排序第 ")<<lie <<QString(" 列：")<<"\r\n";
    stream<<"\t";  //输出表头


    for(int j=0;j<this->Listtitle.form.size();j++)
        stream<<this->Listtitle.form.at(j)<<"\t";
        stream<<"\r\n";
    for(int i=0;i<this->data.size();i++)            //输出内容
    {
        for(int j=0;j<this->Listtitle.form.size();j++)
        stream<<this->data.at(i).form.at(j)<<"\t";
        stream<<"\r\n";
    }


    stream<<"------------------------------------------------------------------"<<"\r\n\r\n";
    file.close();
}




void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    // 自定义qDebug
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //qInstallMessageHandler(myMessageOutput);

    QString datafile = "data.txt";
     // 如果排序后文件已存在，则删除之
    QFile f("sorted_"+datafile);
    if (f.exists())  f.remove();
    ScoreSorter s(datafile);
    s.read();
    s.doSort();
    return a.exec();
}





