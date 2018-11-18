#ifndef DATAWORKER_H
#define DATAWORKER_H

#include <QObject>
#include <QDateTime>

class QNetworkAccessManager;
class QNetworkReply;

/**
 * @brief dataWorker类
 *
 * dataWorker类负责数据的获取以及解析，
 * 当数据解析完成后，发送dataParseFinished信号，
 *
 */
class dataWorker : public QObject
{
    Q_OBJECT
public:
    explicit dataWorker(QObject *parent = 0);
    explicit dataWorker(QString date, QObject *parent = 0);
    void setRequestDate(QString newDate);
    void setRequestCity(QString newCity);
    void setSwitchNum(int num);
    int switch_Num;
    void chooseCity(QString newCity);


    void setTemperature();
    void setAQI();

    QString requestDate();
    QString requestCity();
    void doRequest();


protected:
    QString requestUrl();
    void httpGet(QString url);
    void initNetwork();
    void parseHTML(const QString sourceText);
    void parseData(const QString sourceText);
    void exportDataToFile(const QString dataText);

protected slots:
    void httpsFinished(QNetworkReply *reply);

private:
    QNetworkAccessManager *manager;         //!< 网络访问管理类对象
    QString _requestDate;                   //!< 请求年月
    QString _requestCity;
    QString _requestCitypinyin;

    QList<QDateTime> dataDate;              //!< 日期
    QList<qreal> dataHigh;                  //!< 最高温度
    QList<qreal> dataLow;                   //!< 最低温度

    QList<qreal> dataPM25;
    QList<qreal> dataAQI;

    const QString splitter;                 //!< 数据分隔符
    const QString dataPath;                 //!< 数据保存路径

signals:
    /**
     * @brief 数据解析完成信号
     * @param date 所获取数据年月列表
     * @param high 所获取数据最高温度列表
     * @param low 所获取数据最低温度列表
     *
     * 该信号在数据解析完成，将解析的数据以3个列表（QList）的形式作为信号参数发射，<br/>
     * 提醒界面开始更新图表数据。
     */
    void dataParseFinished(QList<QDateTime> date,QList<qreal> high, QList<qreal> low);
    void httpRequestError(QString error);
    void dataParseError(QString error);
public slots:
};


#endif // DATAWORKER_H
