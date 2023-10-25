/********************************************************************************
** Form generated from reading UI file 'testdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDEMO_H
#define UI_TESTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testdemoClass
{
public:
    QAction *actionversion_0_0_1;
    QAction *actionError_please_contant_admin;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_4;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *pw;
    QSpacerItem *verticalSpacer;
    QPushButton *registe;
    QPushButton *loginin;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testdemoClass)
    {
        if (testdemoClass->objectName().isEmpty())
            testdemoClass->setObjectName(QString::fromUtf8("testdemoClass"));
        testdemoClass->resize(805, 488);
        actionversion_0_0_1 = new QAction(testdemoClass);
        actionversion_0_0_1->setObjectName(QString::fromUtf8("actionversion_0_0_1"));
        actionError_please_contant_admin = new QAction(testdemoClass);
        actionError_please_contant_admin->setObjectName(QString::fromUtf8("actionError_please_contant_admin"));
        centralWidget = new QWidget(testdemoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_7 = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(194, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 5, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 4, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        username = new QLineEdit(frame);
        username->setObjectName(QString::fromUtf8("username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, username);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        pw = new QLineEdit(frame);
        pw->setObjectName(QString::fromUtf8("pw"));
        pw->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, pw);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer);

        registe = new QPushButton(frame);
        registe->setObjectName(QString::fromUtf8("registe"));

        formLayout->setWidget(4, QFormLayout::FieldRole, registe);

        loginin = new QPushButton(frame);
        loginin->setObjectName(QString::fromUtf8("loginin"));

        formLayout->setWidget(3, QFormLayout::FieldRole, loginin);


        gridLayout->addLayout(formLayout, 4, 1, 1, 3);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(30);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 3, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMaximumSize(QSize(255, 322));
        label_4->setSizeIncrement(QSize(255, 322));
        label_4->setBaseSize(QSize(255, 322));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setTextFormat(Qt::AutoText);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/testdemo/image/shulogo.png")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4->setWordWrap(false);
        label_4->setMargin(0);
        label_4->setIndent(-1);

        gridLayout->addWidget(label_4, 1, 1, 2, 2);

        verticalSpacer_2 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 2, 1, 1);


        gridLayout_2->addWidget(frame, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(193, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 2, 1, 1, 1);

        testdemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(testdemoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 805, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        testdemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testdemoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testdemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(testdemoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testdemoClass->setStatusBar(statusBar);
        QWidget::setTabOrder(username, pw);
        QWidget::setTabOrder(pw, loginin);
        QWidget::setTabOrder(loginin, registe);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionversion_0_0_1);
        menu->addAction(actionError_please_contant_admin);

        retranslateUi(testdemoClass);
        QObject::connect(loginin, SIGNAL(clicked()), testdemoClass, SLOT(PushLoginClicked()));
        QObject::connect(registe, SIGNAL(clicked()), testdemoClass, SLOT(PushRegisterClicked()));

        QMetaObject::connectSlotsByName(testdemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *testdemoClass)
    {
        testdemoClass->setWindowTitle(QCoreApplication::translate("testdemoClass", "testdemo", nullptr));
        actionversion_0_0_1->setText(QCoreApplication::translate("testdemoClass", "version:0.1.1", nullptr));
        actionError_please_contant_admin->setText(QCoreApplication::translate("testdemoClass", "Error please contant admin", nullptr));
        label->setText(QCoreApplication::translate("testdemoClass", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("testdemoClass", "\345\257\206\347\240\201", nullptr));
        registe->setText(QCoreApplication::translate("testdemoClass", "\346\263\250\345\206\214", nullptr));
        loginin->setText(QCoreApplication::translate("testdemoClass", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("testdemoClass", "\346\225\231\345\255\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_4->setText(QString());
        menu->setTitle(QCoreApplication::translate("testdemoClass", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testdemoClass: public Ui_testdemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDEMO_H
