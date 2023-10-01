/********************************************************************************
** Form generated from reading UI file 'Register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterClass
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QWidget *RegisterClass)
    {
        if (RegisterClass->objectName().isEmpty())
            RegisterClass->setObjectName(QString::fromUtf8("RegisterClass"));
        RegisterClass->resize(567, 362);
        label = new QLabel(RegisterClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 10, 51, 41));
        formLayoutWidget = new QWidget(RegisterClass);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(160, 80, 231, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        pushButton = new QPushButton(RegisterClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 310, 75, 23));

        retranslateUi(RegisterClass);
        QObject::connect(pushButton, SIGNAL(clicked()), RegisterClass, SLOT(PushFinishButton()));

        QMetaObject::connectSlotsByName(RegisterClass);
    } // setupUi

    void retranslateUi(QWidget *RegisterClass)
    {
        RegisterClass->setWindowTitle(QCoreApplication::translate("RegisterClass", "Register", nullptr));
        label->setText(QCoreApplication::translate("RegisterClass", "\346\263\250\345\206\214", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterClass", "\350\264\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterClass", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterClass", "\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterClass", "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterClass: public Ui_RegisterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
