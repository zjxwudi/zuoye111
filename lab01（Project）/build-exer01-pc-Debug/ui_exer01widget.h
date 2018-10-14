/********************************************************************************
** Form generated from reading UI file 'exer01widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXER01WIDGET_H
#define UI_EXER01WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exer01Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *exer01Widget)
    {
        if (exer01Widget->objectName().isEmpty())
            exer01Widget->setObjectName(QStringLiteral("exer01Widget"));
        exer01Widget->resize(400, 300);
        verticalLayout = new QVBoxLayout(exer01Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(exer01Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(exer01Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(exer01Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(exer01Widget);

        QMetaObject::connectSlotsByName(exer01Widget);
    } // setupUi

    void retranslateUi(QWidget *exer01Widget)
    {
        exer01Widget->setWindowTitle(QApplication::translate("exer01Widget", "exer01Widget", Q_NULLPTR));
        label->setText(QApplication::translate("exer01Widget", "\351\232\217\346\234\272\346\225\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("exer01Widget", "\347\224\237\346\210\220\345\271\266\346\267\273\345\212\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class exer01Widget: public Ui_exer01Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXER01WIDGET_H
