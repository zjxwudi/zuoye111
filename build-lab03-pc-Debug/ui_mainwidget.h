/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCharts/QChartView>

#include <QtCharts/chartsnamespace.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QtCharts::QChartView *chartview;
    QLabel *label;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(400, 300);
        chartview = new QtCharts::QChartView(MainWidget);
        chartview->setObjectName(QStringLiteral("chartview"));
        chartview->setGeometry(QRect(20, 30, 200, 200));
        label = new QLabel(MainWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 40, 41, 9));
        comboBox = new QComboBox(MainWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(270, 50, 62, 22));
        groupBox = new QGroupBox(MainWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(260, 80, 120, 80));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 20, 55, 15));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 40, 55, 15));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 60, 55, 15));

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", Q_NULLPTR));
        label->setText(QApplication::translate("MainWidget", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWidget", "GroupBox", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWidget", "CheckBox", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWidget", "CheckBox", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWidget", "CheckBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
