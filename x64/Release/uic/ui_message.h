/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_messageClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextBrowser *mes;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *messageClass)
    {
        if (messageClass->objectName().isEmpty())
            messageClass->setObjectName(QString::fromUtf8("messageClass"));
        messageClass->resize(500, 300);
        messageClass->setMinimumSize(QSize(500, 300));
        centralWidget = new QWidget(messageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mes = new QTextBrowser(centralWidget);
        mes->setObjectName(QString::fromUtf8("mes"));

        gridLayout->addWidget(mes, 0, 0, 1, 1);

        messageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(messageClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 22));
        messageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(messageClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        messageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(messageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        messageClass->setStatusBar(statusBar);

        retranslateUi(messageClass);

        QMetaObject::connectSlotsByName(messageClass);
    } // setupUi

    void retranslateUi(QMainWindow *messageClass)
    {
        messageClass->setWindowTitle(QCoreApplication::translate("messageClass", "message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class messageClass: public Ui_messageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
