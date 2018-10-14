#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include<cstdio>
#include<climits>
using namespace std;

#define z 0x12345678
#define  MAX(x, y)  ( ((x) > (y)) ? (x) : (y) )
#define  MIN(x, y)  ( ((x) < (y)) ? (x) : (y) )
#define HHI(xxx)  ((qint8) ((qint32)(xxx) >> 24))
#define LHI(xxx)  ((qint8) ((qint32)(xxx) >> 16))
#define HLO(xxx)  ((qint8) ((qint32)(xxx) >> 8))
#define LLO(xxx)  ((qint8) ((qint32)(xxx) & 255))
int main(int argc,char *argv[])
{   int new_z;
    QList <qint8> values;
    values.append(HHI(z));
    values.append(LHI(z));
    values.append(HLO(z));
    values.append(LLO(z));
    qDebug()<<values;
    qDebug("高高8位和低高8位最大值：0x%x",MAX(HHI(z),LHI(z)),MAX(HHI(z),LHI(z)));
    qDebug("高低8位和低低8位最小值：0x%x",MIN(HLO(z),LLO(z)),MIN(HLO(z),LLO(z)));
}