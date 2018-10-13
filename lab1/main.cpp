#include <iostream>
#include <QApplication>
#include<QDebug>
#include<QVector>
#include<QList>
using namespace std;
typedef class{
public:
    int ID;
    QString name;
    int pro1;
    int pro2;
}stu;

bool c_name(stu a,stu b)
{
   if(a.name>=b.name)
   {
       return true;
   }
   else
   {
       return false;
   }
}

bool c_pro1(stu a,stu b)
{
    if(a.pro1>=b.pro1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool c_pro2(stu a,stu b)
{
    if(a.pro2>=b.pro2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    stu stu1,stu2,stu3,stu4;

    stu1.ID=1403130209;
    stu1.name="鲁智深";
    stu1.pro1=80;
    stu1.pro2=72;

    stu2.ID=1403140101;
    stu2.name="林冲  ";
    stu2.pro1=82;
    stu2.pro2=76;

    stu3.ID=1403140102;
    stu3.name="宋江  ";
    stu3.pro1=76;
    stu3.pro2=85;

    stu4.ID=1403140103;
    stu4.name="武松  ";
    stu4.pro1=88;
    stu4.pro2=80;
    QList<stu> data;
    data<<stu1<<stu2<<stu3<<stu4;
    std:: sort(data.begin(),data.end(),c_name);
    qDebug("按姓名排序\n");
    for(int i=0;i<4;i++)
    {
        qDebug()<<data.at(i).ID<<"\t"<<data.at(i).name<<"\t"<<data.at(i).pro1<<"\t"<<data.at(i).pro2;
    }
        qDebug("\n");



    std::sort(data.begin(),data.end(),c_pro1);
    qDebug("按课程一分数大小顺序排序\n");
    for(int i=0;i<4;i++)
    {
        qDebug()<<data.at(i).ID<<"\t"<<data.at(i).name<<"\t"<<data.at(i).pro1<<"\t"<<data.at(i).pro2;
    }
        qDebug("\n");




    std:: sort(data.begin(),data.end(),c_pro2);
    qDebug("按课程二分数大小顺序排序\n");
    for(int i=0;i<4;i++)
    {
        qDebug()<<data.at(i).ID<<"\t"<<data.at(i).name<<"\t"<<data.at(i).pro1<<"\t"<<data.at(i).pro2;
    }
    return a.exec();
}
