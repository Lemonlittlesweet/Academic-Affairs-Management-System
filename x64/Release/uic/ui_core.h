/********************************************************************************
** Form generated from reading UI file 'core.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORE_H
#define UI_CORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coreClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *name;
    QPushButton *exit;
    QTabWidget *tabWidget;
    QWidget *tab_7;
    QGridLayout *gridLayout_12;
    QFormLayout *formLayout_8;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLineEdit *subid;
    QLabel *label_17;
    QPushButton *cho_class;
    QGridLayout *gridLayout_8;
    QTextBrowser *xuanke;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_10;
    QSpacerItem *horizontalSpacer_10;
    QWidget *tab_8;
    QGridLayout *gridLayout_11;
    QFormLayout *formLayout_7;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *label_19;
    QLineEdit *subid_2;
    QPushButton *exit_class;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *tuike;
    QPushButton *search_sel;
    QWidget *tab_9;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_4;
    QLabel *label_20;
    QLineEdit *bianhao;
    QSpacerItem *verticalSpacer_3;
    QPushButton *chaxun_bianhao;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_5;
    QLabel *label_21;
    QLineEdit *mingchen;
    QSpacerItem *verticalSpacer_2;
    QPushButton *chaxun_mingchen;
    QSpacerItem *verticalSpacer_8;
    QTextBrowser *chake;
    QWidget *tab_10;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_9;
    QTextBrowser *shoukepingfen;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_11;
    QSpacerItem *horizontalSpacer_12;
    QWidget *tab;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_8;
    QTextBrowser *homesearch;
    QPushButton *pushButton;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *homework_course;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QTextEdit *handhomework;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *sco_info;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *tea_sc;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_4;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_6;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *q_subid;
    QLineEdit *q_teaid;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_9;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *coreClass)
    {
        if (coreClass->objectName().isEmpty())
            coreClass->setObjectName(QString::fromUtf8("coreClass"));
        coreClass->resize(1000, 600);
        coreClass->setMinimumSize(QSize(1000, 600));
        centralWidget = new QWidget(coreClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        name = new QLabel(centralWidget);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_10->addWidget(name);

        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy);
        exit->setMaximumSize(QSize(100, 200));

        horizontalLayout_10->addWidget(exit);


        gridLayout->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_12 = new QGridLayout(tab_7);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        formLayout_8 = new QFormLayout();
        formLayout_8->setSpacing(6);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        subid = new QLineEdit(tab_7);
        subid->setObjectName(QString::fromUtf8("subid"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, subid);

        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_17);


        verticalLayout_2->addLayout(formLayout_2);

        cho_class = new QPushButton(tab_7);
        cho_class->setObjectName(QString::fromUtf8("cho_class"));
        cho_class->setMinimumSize(QSize(100, 0));
        cho_class->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(cho_class, 0, Qt::AlignHCenter);


        formLayout_8->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        xuanke = new QTextBrowser(tab_7);
        xuanke->setObjectName(QString::fromUtf8("xuanke"));

        gridLayout_8->addWidget(xuanke, 0, 0, 1, 3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pushButton_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_10 = new QPushButton(tab_7);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pushButton_10);


        gridLayout_8->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_10, 1, 2, 1, 1);


        formLayout_8->setLayout(0, QFormLayout::FieldRole, gridLayout_8);


        gridLayout_12->addLayout(formLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_11 = new QGridLayout(tab_8);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setSpacing(6);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_19 = new QLabel(tab_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_19);

        subid_2 = new QLineEdit(tab_8);
        subid_2->setObjectName(QString::fromUtf8("subid_2"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, subid_2);


        verticalLayout_3->addLayout(formLayout_3);

        exit_class = new QPushButton(tab_8);
        exit_class->setObjectName(QString::fromUtf8("exit_class"));
        exit_class->setMinimumSize(QSize(100, 0));
        exit_class->setMaximumSize(QSize(100, 16777215));

        verticalLayout_3->addWidget(exit_class, 0, Qt::AlignHCenter);


        formLayout_7->setLayout(0, QFormLayout::LabelRole, verticalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tuike = new QTextBrowser(tab_8);
        tuike->setObjectName(QString::fromUtf8("tuike"));

        verticalLayout_7->addWidget(tuike);

        search_sel = new QPushButton(tab_8);
        search_sel->setObjectName(QString::fromUtf8("search_sel"));
        search_sel->setMinimumSize(QSize(100, 0));
        search_sel->setMaximumSize(QSize(200, 16777215));

        verticalLayout_7->addWidget(search_sel, 0, Qt::AlignHCenter);


        formLayout_7->setLayout(0, QFormLayout::FieldRole, verticalLayout_7);


        gridLayout_11->addLayout(formLayout_7, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayout_14 = new QGridLayout(tab_9);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_10, 4, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_9, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, -1, -1);
        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_20 = new QLabel(tab_9);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_20);

        bianhao = new QLineEdit(tab_9);
        bianhao->setObjectName(QString::fromUtf8("bianhao"));
        bianhao->setMaximumSize(QSize(200, 16777215));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, bianhao);


        verticalLayout_6->addLayout(formLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        chaxun_bianhao = new QPushButton(tab_9);
        chaxun_bianhao->setObjectName(QString::fromUtf8("chaxun_bianhao"));
        chaxun_bianhao->setMinimumSize(QSize(100, 0));
        chaxun_bianhao->setMaximumSize(QSize(101, 16777215));

        verticalLayout_6->addWidget(chaxun_bianhao, 0, Qt::AlignHCenter);


        gridLayout_13->addLayout(verticalLayout_6, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_21 = new QLabel(tab_9);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(0, 20));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_21);

        mingchen = new QLineEdit(tab_9);
        mingchen->setObjectName(QString::fromUtf8("mingchen"));
        mingchen->setMaximumSize(QSize(200, 16777215));
        mingchen->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, mingchen);


        verticalLayout_5->addLayout(formLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        chaxun_mingchen = new QPushButton(tab_9);
        chaxun_mingchen->setObjectName(QString::fromUtf8("chaxun_mingchen"));
        chaxun_mingchen->setMinimumSize(QSize(100, 0));
        chaxun_mingchen->setMaximumSize(QSize(101, 16777215));

        verticalLayout_5->addWidget(chaxun_mingchen, 0, Qt::AlignHCenter);


        gridLayout_13->addLayout(verticalLayout_5, 3, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_8, 2, 0, 1, 1);

        chake = new QTextBrowser(tab_9);
        chake->setObjectName(QString::fromUtf8("chake"));
        chake->setMinimumSize(QSize(750, 400));

        gridLayout_13->addWidget(chake, 0, 1, 5, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        gridLayout_10 = new QGridLayout(tab_10);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        shoukepingfen = new QTextBrowser(tab_10);
        shoukepingfen->setObjectName(QString::fromUtf8("shoukepingfen"));

        verticalLayout_9->addWidget(shoukepingfen);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        pushButton_6 = new QPushButton(tab_10);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(170, 0));

        horizontalLayout_4->addWidget(pushButton_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_11 = new QPushButton(tab_10);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(170, 0));

        horizontalLayout_4->addWidget(pushButton_11);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);


        verticalLayout_9->addLayout(horizontalLayout_4);


        gridLayout_10->addLayout(verticalLayout_9, 0, 0, 1, 1);

        tabWidget->addTab(tab_10, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_9 = new QGridLayout(tab);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        homesearch = new QTextBrowser(tab);
        homesearch->setObjectName(QString::fromUtf8("homesearch"));

        verticalLayout_8->addWidget(homesearch);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 0));
        pushButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_8->addWidget(pushButton, 0, Qt::AlignHCenter);


        gridLayout_9->addLayout(verticalLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        homework_course = new QLineEdit(tab_2);
        homework_course->setObjectName(QString::fromUtf8("homework_course"));
        homework_course->setMinimumSize(QSize(100, 0));
        homework_course->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_5->addWidget(homework_course);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(pushButton_2);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        handhomework = new QTextEdit(tab_2);
        handhomework->setObjectName(QString::fromUtf8("handhomework"));

        formLayout->setWidget(1, QFormLayout::FieldRole, handhomework);


        gridLayout_3->addLayout(formLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sco_info = new QLabel(tab_3);
        sco_info->setObjectName(QString::fromUtf8("sco_info"));
        sco_info->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(sco_info);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tea_sc = new QLineEdit(tab_3);
        tea_sc->setObjectName(QString::fromUtf8("tea_sc"));

        horizontalLayout_2->addWidget(tea_sc);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout->addWidget(pushButton_7);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 2, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_7 = new QGridLayout(tab_4);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_4);

        q_subid = new QLineEdit(tab_4);
        q_subid->setObjectName(QString::fromUtf8("q_subid"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, q_subid);

        q_teaid = new QLineEdit(tab_4);
        q_teaid->setObjectName(QString::fromUtf8("q_teaid"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, q_teaid);


        verticalLayout_4->addLayout(formLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(100, 0));
        pushButton_9->setMaximumSize(QSize(200, 16777215));

        verticalLayout_4->addWidget(pushButton_9, 0, Qt::AlignHCenter);


        gridLayout_6->addLayout(verticalLayout_4, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 2, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        coreClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(coreClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 23));
        coreClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(coreClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        coreClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(coreClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        coreClass->setStatusBar(statusBar);

        retranslateUi(coreClass);
        QObject::connect(exit, SIGNAL(clicked()), coreClass, SLOT(exit()));
        QObject::connect(chaxun_mingchen, SIGNAL(clicked()), coreClass, SLOT(mingchen()));
        QObject::connect(cho_class, SIGNAL(clicked()), coreClass, SLOT(choclassPress()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), coreClass, SLOT(xuefenpaixu()));
        QObject::connect(exit_class, SIGNAL(clicked()), coreClass, SLOT(exitclassPress()));
        QObject::connect(chaxun_bianhao, SIGNAL(clicked()), coreClass, SLOT(bianhao()));
        QObject::connect(search_sel, SIGNAL(clicked()), coreClass, SLOT(searchSel()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), coreClass, SLOT(laoshishoukepingfenpaixu()));
        QObject::connect(pushButton, SIGNAL(clicked()), coreClass, SLOT(searchhome()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), coreClass, SLOT(handhomework()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), coreClass, SLOT(stu_former()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), coreClass, SLOT(stu_hand()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), coreClass, SLOT(stu_latter()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), coreClass, SLOT(startbegin()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), coreClass, SLOT(qiandao()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), coreClass, SLOT(xuefenpaixuj()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), coreClass, SLOT(laoshij()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(coreClass);
    } // setupUi

    void retranslateUi(QMainWindow *coreClass)
    {
        coreClass->setWindowTitle(QCoreApplication::translate("coreClass", "core", nullptr));
        name->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        exit->setText(QCoreApplication::translate("coreClass", "\351\200\200\345\207\272", nullptr));
        label_17->setText(QCoreApplication::translate("coreClass", "\351\200\211\344\277\256\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        cho_class->setText(QCoreApplication::translate("coreClass", "\351\200\211\350\257\276", nullptr));
        pushButton_5->setText(QCoreApplication::translate("coreClass", "\345\255\246\345\210\206\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        pushButton_10->setText(QCoreApplication::translate("coreClass", "\345\255\246\345\210\206\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("coreClass", "\351\200\211\350\257\276", nullptr));
        label_19->setText(QCoreApplication::translate("coreClass", "\351\200\200\350\257\276\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        exit_class->setText(QCoreApplication::translate("coreClass", "\351\200\200\350\257\276", nullptr));
        search_sel->setText(QCoreApplication::translate("coreClass", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("coreClass", "\351\200\200\350\257\276", nullptr));
        label_20->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        chaxun_bianhao->setText(QCoreApplication::translate("coreClass", "\346\237\245\350\257\242", nullptr));
        label_21->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        chaxun_mingchen->setText(QCoreApplication::translate("coreClass", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("coreClass", "\346\237\245\350\257\242\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        pushButton_6->setText(QCoreApplication::translate("coreClass", "\350\200\201\345\270\210\346\216\210\350\257\276\350\257\204\345\210\206\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        pushButton_11->setText(QCoreApplication::translate("coreClass", "\350\200\201\345\270\210\346\216\210\350\257\276\350\257\204\345\210\206\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("coreClass", "\346\237\245\350\257\242\350\200\201\345\270\210\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("coreClass", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("coreClass", "\346\237\245\350\257\242\344\275\234\344\270\232", nullptr));
        label->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\345\217\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("coreClass", "\344\272\244\344\275\234\344\270\232", nullptr));
        label_2->setText(QCoreApplication::translate("coreClass", "\347\255\224\346\241\210", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("coreClass", "\344\272\244\344\275\234\344\270\232", nullptr));
        sco_info->setText(QCoreApplication::translate("coreClass", "\346\202\250\347\273\231 \346\211\223\345\210\206\357\274\232", nullptr));
        pushButton_8->setText(QCoreApplication::translate("coreClass", "\345\274\200\345\247\213\346\211\223\345\210\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("coreClass", "\344\270\212\344\270\200\344\275\215", nullptr));
        pushButton_3->setText(QCoreApplication::translate("coreClass", "\346\217\220\344\272\244", nullptr));
        pushButton_7->setText(QCoreApplication::translate("coreClass", "\344\270\213\344\270\200\344\275\215", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("coreClass", "\346\225\231\345\270\210\350\257\204\345\210\206", nullptr));
        label_3->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("coreClass", "\346\225\231\345\270\210\345\217\267", nullptr));
        pushButton_9->setText(QCoreApplication::translate("coreClass", "\347\255\276\345\210\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("coreClass", "\347\255\276\345\210\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coreClass: public Ui_coreClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORE_H
