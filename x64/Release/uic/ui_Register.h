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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterClass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *user;
    QLabel *label_3;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *password;
    QLabel *label_5;
    QLineEdit *repw;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *RegisterClass)
    {
        if (RegisterClass->objectName().isEmpty())
            RegisterClass->setObjectName(QString::fromUtf8("RegisterClass"));
        RegisterClass->resize(710, 418);
        horizontalLayout_2 = new QHBoxLayout(RegisterClass);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        frame = new QFrame(RegisterClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(336, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 2, 2);

        verticalSpacer = new QSpacerItem(18, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(18, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 9, 1, 1, 2);

        verticalSpacer_6 = new QSpacerItem(20, 300, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        user = new QLineEdit(frame);
        user->setObjectName(QString::fromUtf8("user"));

        formLayout->setWidget(0, QFormLayout::FieldRole, user);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        name = new QLineEdit(frame);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, password);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        repw = new QLineEdit(frame);
        repw->setObjectName(QString::fromUtf8("repw"));
        repw->setEnabled(true);
        repw->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, repw);


        horizontalLayout->addLayout(formLayout);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(100, 25));
        pushButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton, 7, 1, 1, 2, Qt::AlignHCenter);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 1, 1, 2);

        verticalSpacer_5 = new QSpacerItem(20, 400, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 8, 1, 1, 1);


        horizontalLayout_2->addWidget(frame);

        horizontalSpacer_4 = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        retranslateUi(RegisterClass);
        QObject::connect(pushButton, SIGNAL(clicked()), RegisterClass, SLOT(PushFinishButton()));

        QMetaObject::connectSlotsByName(RegisterClass);
    } // setupUi

    void retranslateUi(QWidget *RegisterClass)
    {
        RegisterClass->setWindowTitle(QCoreApplication::translate("RegisterClass", "Register", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterClass", "\350\264\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterClass", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterClass", "\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterClass", "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterClass", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("RegisterClass", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterClass: public Ui_RegisterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
