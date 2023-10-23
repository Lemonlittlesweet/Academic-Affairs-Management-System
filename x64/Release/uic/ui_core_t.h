/********************************************************************************
** Form generated from reading UI file 'core_t.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORE_T_H
#define UI_CORE_T_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coretClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *name;
    QPushButton *exit;
    QTabWidget *tabWidget;
    QWidget *tab_7;
    QTextBrowser *xuanke;
    QPushButton *pushButton_5;
    QWidget *tab_9;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_4;
    QLabel *label_20;
    QLineEdit *bianhao;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_5;
    QLabel *label_21;
    QLineEdit *mingchen;
    QPushButton *chaxun_bianhao;
    QPushButton *chaxun_mingchen;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *kechengbianhao;
    QLabel *label_2;
    QLineEdit *kechengmingchen;
    QLabel *label_3;
    QLineEdit *kechengxingzhi;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *kechengzongxueshi;
    QLineEdit *kechengxuefen;
    QLineEdit *kechengshijian;
    QLabel *xuanxiurenshu;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_6;
    QLabel *label_8;
    QLineEdit *zjbh;
    QLabel *label_9;
    QLineEdit *zjmc;
    QLabel *label_10;
    QLineEdit *zjxz;
    QLabel *label_12;
    QLineEdit *zjzxs;
    QLabel *label_11;
    QLineEdit *zjxf;
    QLabel *label_14;
    QLineEdit *zjsj;
    QPushButton *pushButton_3;
    QWidget *tab_10;
    QPushButton *pushButton_6;
    QTextBrowser *shoukepingfen;
    QWidget *formLayoutWidget_9;
    QFormLayout *formLayout_9;
    QLabel *label_28;
    QLineEdit *jiaoshibianhao;
    QLabel *label_29;
    QLineEdit *kechengbianhao_2;
    QPushButton *pushButton_9;
    QWidget *tab_8;
    QTextBrowser *tuike;
    QPushButton *search_sel;
    QWidget *tab_2;
    QWidget *formLayoutWidget_7;
    QFormLayout *formLayout_7;
    QLabel *label_16;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *xh;
    QLabel *jd;
    QLabel *bljlyzcd;
    QLineEdit *xmxg;
    QLineEdit *csnyxg;
    QLineEdit *xbxg;
    QLineEdit *lxdhxg;
    QWidget *formLayoutWidget_8;
    QFormLayout *formLayout_8;
    QLabel *label_13;
    QLabel *label_15;
    QLineEdit *xhcx;
    QLineEdit *xmcx;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QWidget *tab_3;
    QWidget *formLayoutWidget_10;
    QFormLayout *formLayout_10;
    QLabel *label_30;
    QLineEdit *gaixh;
    QLabel *label_32;
    QLineEdit *gaixm;
    QLabel *label_33;
    QLineEdit *gaicsny;
    QLabel *label_44;
    QLineEdit *gaixb;
    QLabel *label_35;
    QLineEdit *gailxdh;
    QLabel *label_36;
    QLineEdit *gaimm;
    QLabel *label_31;
    QLabel *label_34;
    QLineEdit *gaijd;
    QLineEdit *gaibljlyzcd;
    QPushButton *pushButton_10;
    QWidget *tab_4;
    QTextBrowser *stu_info;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *coretClass)
    {
        if (coretClass->objectName().isEmpty())
            coretClass->setObjectName(QString::fromUtf8("coretClass"));
        coretClass->resize(725, 486);
        centralWidget = new QWidget(coretClass);
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
        xuanke = new QTextBrowser(tab_7);
        xuanke->setObjectName(QString::fromUtf8("xuanke"));
        xuanke->setGeometry(QRect(80, 30, 601, 281));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 320, 75, 23));
        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        formLayoutWidget_3 = new QWidget(tab_9);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(50, 30, 160, 80));
        formLayout_4 = new QFormLayout(formLayoutWidget_3);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(formLayoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_20);

        bianhao = new QLineEdit(formLayoutWidget_3);
        bianhao->setObjectName(QString::fromUtf8("bianhao"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, bianhao);

        formLayoutWidget_4 = new QWidget(tab_9);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(50, 170, 160, 80));
        formLayout_5 = new QFormLayout(formLayoutWidget_4);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(formLayoutWidget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_21);

        mingchen = new QLineEdit(formLayoutWidget_4);
        mingchen->setObjectName(QString::fromUtf8("mingchen"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, mingchen);

        chaxun_bianhao = new QPushButton(tab_9);
        chaxun_bianhao->setObjectName(QString::fromUtf8("chaxun_bianhao"));
        chaxun_bianhao->setGeometry(QRect(90, 120, 75, 23));
        chaxun_mingchen = new QPushButton(tab_9);
        chaxun_mingchen->setObjectName(QString::fromUtf8("chaxun_mingchen"));
        chaxun_mingchen->setGeometry(QRect(90, 270, 75, 23));
        formLayoutWidget_5 = new QWidget(tab_9);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(360, 80, 281, 181));
        formLayout = new QFormLayout(formLayoutWidget_5);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget_5);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        kechengbianhao = new QLabel(formLayoutWidget_5);
        kechengbianhao->setObjectName(QString::fromUtf8("kechengbianhao"));

        formLayout->setWidget(0, QFormLayout::FieldRole, kechengbianhao);

        label_2 = new QLabel(formLayoutWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        kechengmingchen = new QLineEdit(formLayoutWidget_5);
        kechengmingchen->setObjectName(QString::fromUtf8("kechengmingchen"));

        formLayout->setWidget(1, QFormLayout::FieldRole, kechengmingchen);

        label_3 = new QLabel(formLayoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        kechengxingzhi = new QLineEdit(formLayoutWidget_5);
        kechengxingzhi->setObjectName(QString::fromUtf8("kechengxingzhi"));

        formLayout->setWidget(2, QFormLayout::FieldRole, kechengxingzhi);

        label_4 = new QLabel(formLayoutWidget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        kechengzongxueshi = new QLineEdit(formLayoutWidget_5);
        kechengzongxueshi->setObjectName(QString::fromUtf8("kechengzongxueshi"));

        formLayout->setWidget(3, QFormLayout::FieldRole, kechengzongxueshi);

        kechengxuefen = new QLineEdit(formLayoutWidget_5);
        kechengxuefen->setObjectName(QString::fromUtf8("kechengxuefen"));

        formLayout->setWidget(4, QFormLayout::FieldRole, kechengxuefen);

        kechengshijian = new QLineEdit(formLayoutWidget_5);
        kechengshijian->setObjectName(QString::fromUtf8("kechengshijian"));

        formLayout->setWidget(5, QFormLayout::FieldRole, kechengshijian);

        xuanxiurenshu = new QLabel(formLayoutWidget_5);
        xuanxiurenshu->setObjectName(QString::fromUtf8("xuanxiurenshu"));

        formLayout->setWidget(6, QFormLayout::FieldRole, xuanxiurenshu);

        pushButton = new QPushButton(tab_9);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 30, 75, 23));
        pushButton_2 = new QPushButton(tab_9);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 280, 75, 23));
        tabWidget->addTab(tab_9, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayoutWidget_6 = new QWidget(tab);
        formLayoutWidget_6->setObjectName(QString::fromUtf8("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(250, 90, 251, 161));
        formLayout_6 = new QFormLayout(formLayoutWidget_6);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_8);

        zjbh = new QLineEdit(formLayoutWidget_6);
        zjbh->setObjectName(QString::fromUtf8("zjbh"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, zjbh);

        label_9 = new QLabel(formLayoutWidget_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_9);

        zjmc = new QLineEdit(formLayoutWidget_6);
        zjmc->setObjectName(QString::fromUtf8("zjmc"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, zjmc);

        label_10 = new QLabel(formLayoutWidget_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_10);

        zjxz = new QLineEdit(formLayoutWidget_6);
        zjxz->setObjectName(QString::fromUtf8("zjxz"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, zjxz);

        label_12 = new QLabel(formLayoutWidget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_12);

        zjzxs = new QLineEdit(formLayoutWidget_6);
        zjzxs->setObjectName(QString::fromUtf8("zjzxs"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, zjzxs);

        label_11 = new QLabel(formLayoutWidget_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, label_11);

        zjxf = new QLineEdit(formLayoutWidget_6);
        zjxf->setObjectName(QString::fromUtf8("zjxf"));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, zjxf);

        label_14 = new QLabel(formLayoutWidget_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_6->setWidget(5, QFormLayout::LabelRole, label_14);

        zjsj = new QLineEdit(formLayoutWidget_6);
        zjsj->setObjectName(QString::fromUtf8("zjsj"));

        formLayout_6->setWidget(5, QFormLayout::FieldRole, zjsj);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 50, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        pushButton_6 = new QPushButton(tab_10);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 260, 111, 23));
        shoukepingfen = new QTextBrowser(tab_10);
        shoukepingfen->setObjectName(QString::fromUtf8("shoukepingfen"));
        shoukepingfen->setGeometry(QRect(300, 40, 256, 192));
        formLayoutWidget_9 = new QWidget(tab_10);
        formLayoutWidget_9->setObjectName(QString::fromUtf8("formLayoutWidget_9"));
        formLayoutWidget_9->setGeometry(QRect(50, 50, 160, 80));
        formLayout_9 = new QFormLayout(formLayoutWidget_9);
        formLayout_9->setSpacing(6);
        formLayout_9->setContentsMargins(11, 11, 11, 11);
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        formLayout_9->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(formLayoutWidget_9);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_28);

        jiaoshibianhao = new QLineEdit(formLayoutWidget_9);
        jiaoshibianhao->setObjectName(QString::fromUtf8("jiaoshibianhao"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, jiaoshibianhao);

        label_29 = new QLabel(formLayoutWidget_9);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout_9->setWidget(1, QFormLayout::LabelRole, label_29);

        kechengbianhao_2 = new QLineEdit(formLayoutWidget_9);
        kechengbianhao_2->setObjectName(QString::fromUtf8("kechengbianhao_2"));

        formLayout_9->setWidget(1, QFormLayout::FieldRole, kechengbianhao_2);

        pushButton_9 = new QPushButton(tab_10);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(60, 160, 75, 23));
        tabWidget->addTab(tab_10, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tuike = new QTextBrowser(tab_8);
        tuike->setObjectName(QString::fromUtf8("tuike"));
        tuike->setGeometry(QRect(380, 40, 256, 192));
        search_sel = new QPushButton(tab_8);
        search_sel->setObjectName(QString::fromUtf8("search_sel"));
        search_sel->setGeometry(QRect(470, 270, 75, 23));
        tabWidget->addTab(tab_8, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayoutWidget_7 = new QWidget(tab_2);
        formLayoutWidget_7->setObjectName(QString::fromUtf8("formLayoutWidget_7"));
        formLayoutWidget_7->setGeometry(QRect(370, 60, 271, 154));
        formLayout_7 = new QFormLayout(formLayoutWidget_7);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(formLayoutWidget_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_16);

        label_22 = new QLabel(formLayoutWidget_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(formLayoutWidget_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_23);

        label_24 = new QLabel(formLayoutWidget_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_7->setWidget(3, QFormLayout::LabelRole, label_24);

        label_25 = new QLabel(formLayoutWidget_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_7->setWidget(4, QFormLayout::LabelRole, label_25);

        label_26 = new QLabel(formLayoutWidget_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout_7->setWidget(5, QFormLayout::LabelRole, label_26);

        label_27 = new QLabel(formLayoutWidget_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        formLayout_7->setWidget(6, QFormLayout::LabelRole, label_27);

        xh = new QLabel(formLayoutWidget_7);
        xh->setObjectName(QString::fromUtf8("xh"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, xh);

        jd = new QLabel(formLayoutWidget_7);
        jd->setObjectName(QString::fromUtf8("jd"));

        formLayout_7->setWidget(5, QFormLayout::FieldRole, jd);

        bljlyzcd = new QLabel(formLayoutWidget_7);
        bljlyzcd->setObjectName(QString::fromUtf8("bljlyzcd"));

        formLayout_7->setWidget(6, QFormLayout::FieldRole, bljlyzcd);

        xmxg = new QLineEdit(formLayoutWidget_7);
        xmxg->setObjectName(QString::fromUtf8("xmxg"));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, xmxg);

        csnyxg = new QLineEdit(formLayoutWidget_7);
        csnyxg->setObjectName(QString::fromUtf8("csnyxg"));

        formLayout_7->setWidget(2, QFormLayout::FieldRole, csnyxg);

        xbxg = new QLineEdit(formLayoutWidget_7);
        xbxg->setObjectName(QString::fromUtf8("xbxg"));

        formLayout_7->setWidget(3, QFormLayout::FieldRole, xbxg);

        lxdhxg = new QLineEdit(formLayoutWidget_7);
        lxdhxg->setObjectName(QString::fromUtf8("lxdhxg"));

        formLayout_7->setWidget(4, QFormLayout::FieldRole, lxdhxg);

        formLayoutWidget_8 = new QWidget(tab_2);
        formLayoutWidget_8->setObjectName(QString::fromUtf8("formLayoutWidget_8"));
        formLayoutWidget_8->setGeometry(QRect(60, 120, 160, 80));
        formLayout_8 = new QFormLayout(formLayoutWidget_8);
        formLayout_8->setSpacing(6);
        formLayout_8->setContentsMargins(11, 11, 11, 11);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(formLayoutWidget_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_13);

        label_15 = new QLabel(formLayoutWidget_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_15);

        xhcx = new QLineEdit(formLayoutWidget_8);
        xhcx->setObjectName(QString::fromUtf8("xhcx"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, xhcx);

        xmcx = new QLineEdit(formLayoutWidget_8);
        xmcx->setObjectName(QString::fromUtf8("xmcx"));

        formLayout_8->setWidget(1, QFormLayout::FieldRole, xmcx);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 220, 75, 23));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(60, 220, 75, 23));
        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(530, 240, 75, 23));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(410, 240, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        formLayoutWidget_10 = new QWidget(tab_3);
        formLayoutWidget_10->setObjectName(QString::fromUtf8("formLayoutWidget_10"));
        formLayoutWidget_10->setGeometry(QRect(210, 70, 341, 204));
        formLayout_10 = new QFormLayout(formLayoutWidget_10);
        formLayout_10->setSpacing(6);
        formLayout_10->setContentsMargins(11, 11, 11, 11);
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        formLayout_10->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(formLayoutWidget_10);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_30);

        gaixh = new QLineEdit(formLayoutWidget_10);
        gaixh->setObjectName(QString::fromUtf8("gaixh"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, gaixh);

        label_32 = new QLabel(formLayoutWidget_10);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_32);

        gaixm = new QLineEdit(formLayoutWidget_10);
        gaixm->setObjectName(QString::fromUtf8("gaixm"));

        formLayout_10->setWidget(1, QFormLayout::FieldRole, gaixm);

        label_33 = new QLabel(formLayoutWidget_10);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        formLayout_10->setWidget(2, QFormLayout::LabelRole, label_33);

        gaicsny = new QLineEdit(formLayoutWidget_10);
        gaicsny->setObjectName(QString::fromUtf8("gaicsny"));

        formLayout_10->setWidget(2, QFormLayout::FieldRole, gaicsny);

        label_44 = new QLabel(formLayoutWidget_10);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        formLayout_10->setWidget(3, QFormLayout::LabelRole, label_44);

        gaixb = new QLineEdit(formLayoutWidget_10);
        gaixb->setObjectName(QString::fromUtf8("gaixb"));

        formLayout_10->setWidget(3, QFormLayout::FieldRole, gaixb);

        label_35 = new QLabel(formLayoutWidget_10);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        formLayout_10->setWidget(4, QFormLayout::LabelRole, label_35);

        gailxdh = new QLineEdit(formLayoutWidget_10);
        gailxdh->setObjectName(QString::fromUtf8("gailxdh"));

        formLayout_10->setWidget(4, QFormLayout::FieldRole, gailxdh);

        label_36 = new QLabel(formLayoutWidget_10);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        formLayout_10->setWidget(5, QFormLayout::LabelRole, label_36);

        gaimm = new QLineEdit(formLayoutWidget_10);
        gaimm->setObjectName(QString::fromUtf8("gaimm"));

        formLayout_10->setWidget(5, QFormLayout::FieldRole, gaimm);

        label_31 = new QLabel(formLayoutWidget_10);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        formLayout_10->setWidget(6, QFormLayout::LabelRole, label_31);

        label_34 = new QLabel(formLayoutWidget_10);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        formLayout_10->setWidget(7, QFormLayout::LabelRole, label_34);

        gaijd = new QLineEdit(formLayoutWidget_10);
        gaijd->setObjectName(QString::fromUtf8("gaijd"));

        formLayout_10->setWidget(6, QFormLayout::FieldRole, gaijd);

        gaibljlyzcd = new QLineEdit(formLayoutWidget_10);
        gaibljlyzcd->setObjectName(QString::fromUtf8("gaibljlyzcd"));

        formLayout_10->setWidget(7, QFormLayout::FieldRole, gaibljlyzcd);

        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(240, 300, 75, 23));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        stu_info = new QTextBrowser(tab_4);
        stu_info->setObjectName(QString::fromUtf8("stu_info"));
        stu_info->setGeometry(QRect(65, 20, 521, 192));
        pushButton_12 = new QPushButton(tab_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(190, 270, 75, 23));
        pushButton_13 = new QPushButton(tab_4);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(334, 270, 151, 23));
        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        coretClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(coretClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 23));
        coretClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(coretClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        coretClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(coretClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        coretClass->setStatusBar(statusBar);

        retranslateUi(coretClass);
        QObject::connect(exit, SIGNAL(clicked()), coretClass, SLOT(exit()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), coretClass, SLOT(xuehaochaxun()));
        QObject::connect(search_sel, SIGNAL(clicked()), coretClass, SLOT(searchSel()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), coretClass, SLOT(add()));
        QObject::connect(pushButton, SIGNAL(clicked()), coretClass, SLOT(xiugai()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), coretClass, SLOT(addxuesheng()));
        QObject::connect(chaxun_mingchen, SIGNAL(clicked()), coretClass, SLOT(mingchen()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), coretClass, SLOT(xingmingchaxun()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), coretClass, SLOT(shanchu()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), coretClass, SLOT(xueshengxiugai()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), coretClass, SLOT(cxap()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), coretClass, SLOT(laoshishoukepingfenpaixu()));
        QObject::connect(chaxun_bianhao, SIGNAL(clicked()), coretClass, SLOT(bianhao()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), coretClass, SLOT(xuefenpaixu()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), coretClass, SLOT(jidianpaixu()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), coretClass, SLOT(buliangjilupaixu()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), coretClass, SLOT(deletexuesheng()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(coretClass);
    } // setupUi

    void retranslateUi(QMainWindow *coretClass)
    {
        coretClass->setWindowTitle(QCoreApplication::translate("coretClass", "core", nullptr));
        name->setText(QCoreApplication::translate("coretClass", "TextLabel", nullptr));
        exit->setText(QCoreApplication::translate("coretClass", "\351\200\200\345\207\272", nullptr));
        pushButton_5->setText(QCoreApplication::translate("coretClass", "\345\255\246\345\210\206\346\216\222\345\272\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("coretClass", "\346\265\217\350\247\210\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        label_20->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        label_21->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        chaxun_bianhao->setText(QCoreApplication::translate("coretClass", "\346\237\245\350\257\242", nullptr));
        chaxun_mingchen->setText(QCoreApplication::translate("coretClass", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        kechengbianhao->setText(QCoreApplication::translate("coretClass", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\346\200\247\350\264\250", nullptr));
        label_4->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\346\200\273\345\255\246\346\227\266", nullptr));
        label_5->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\345\255\246\345\210\206", nullptr));
        label_6->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("coretClass", "\351\200\211\344\277\256\344\272\272\346\225\260", nullptr));
        xuanxiurenshu->setText(QCoreApplication::translate("coretClass", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("coretClass", "\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("coretClass", "\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("coretClass", "\346\237\245\350\257\242\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        label_8->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        label_9->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        label_10->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\346\200\247\350\264\250", nullptr));
        label_12->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\346\200\273\345\255\246\346\227\266", nullptr));
        label_11->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\345\255\246\345\210\206", nullptr));
        label_14->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\346\227\266\351\227\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("coretClass", "\345\242\236\345\212\240", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("coretClass", "\345\242\236\345\212\240\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        pushButton_6->setText(QCoreApplication::translate("coretClass", "\350\200\201\345\270\210\346\216\210\350\257\276\350\257\204\345\210\206\346\216\222\345\272\217", nullptr));
        label_28->setText(QCoreApplication::translate("coretClass", "\346\225\231\345\270\210\347\274\226\345\217\267", nullptr));
        label_29->setText(QCoreApplication::translate("coretClass", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        pushButton_9->setText(QCoreApplication::translate("coretClass", "\346\237\245\350\257\242\345\271\266\345\256\211\346\216\222", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("coretClass", "\346\237\245\350\257\242\350\200\201\345\270\210\344\277\241\346\201\257", nullptr));
        search_sel->setText(QCoreApplication::translate("coretClass", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("coretClass", "\346\237\245\350\257\242\345\255\246\347\224\237\351\200\211\350\257\276", nullptr));
        label_16->setText(QCoreApplication::translate("coretClass", "\345\255\246\345\217\267", nullptr));
        label_22->setText(QCoreApplication::translate("coretClass", "\345\207\272\347\224\237\345\271\264\346\234\210", nullptr));
        label_23->setText(QCoreApplication::translate("coretClass", "\345\247\223\345\220\215", nullptr));
        label_24->setText(QCoreApplication::translate("coretClass", "\347\263\273\345\210\253", nullptr));
        label_25->setText(QCoreApplication::translate("coretClass", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_26->setText(QCoreApplication::translate("coretClass", "\347\273\251\347\202\271", nullptr));
        label_27->setText(QCoreApplication::translate("coretClass", "\344\270\215\350\211\257\350\256\260\345\275\225\344\270\245\351\207\215\347\250\213\345\272\246", nullptr));
        xh->setText(QCoreApplication::translate("coretClass", "TextLabel", nullptr));
        jd->setText(QCoreApplication::translate("coretClass", "TextLabel", nullptr));
        bljlyzcd->setText(QCoreApplication::translate("coretClass", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("coretClass", "\345\255\246\345\217\267", nullptr));
        label_15->setText(QCoreApplication::translate("coretClass", "\345\247\223\345\220\215", nullptr));
        pushButton_4->setText(QCoreApplication::translate("coretClass", "\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        pushButton_7->setText(QCoreApplication::translate("coretClass", "\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        pushButton_8->setText(QCoreApplication::translate("coretClass", "\344\277\256\346\224\271", nullptr));
        pushButton_11->setText(QCoreApplication::translate("coretClass", "\345\210\240\351\231\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("coretClass", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_30->setText(QCoreApplication::translate("coretClass", "\345\255\246\345\217\267", nullptr));
        label_32->setText(QCoreApplication::translate("coretClass", "\345\247\223\345\220\215", nullptr));
        label_33->setText(QCoreApplication::translate("coretClass", "\345\207\272\347\224\237\345\271\264\346\234\210", nullptr));
        label_44->setText(QCoreApplication::translate("coretClass", "\347\263\273\345\210\253", nullptr));
        label_35->setText(QCoreApplication::translate("coretClass", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_36->setText(QCoreApplication::translate("coretClass", "\345\257\206\347\240\201", nullptr));
        label_31->setText(QCoreApplication::translate("coretClass", "\347\273\251\347\202\271", nullptr));
        label_34->setText(QCoreApplication::translate("coretClass", "\344\270\215\350\211\257\350\256\260\345\275\225\344\270\245\351\207\215\347\250\213\345\272\246", nullptr));
        pushButton_10->setText(QCoreApplication::translate("coretClass", "\345\242\236\345\212\240", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("coretClass", "\345\242\236\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton_12->setText(QCoreApplication::translate("coretClass", "\347\273\251\347\202\271\346\216\222\345\272\217", nullptr));
        pushButton_13->setText(QCoreApplication::translate("coretClass", "\344\270\215\350\211\257\350\256\260\345\275\225\344\270\245\351\207\215\347\250\213\345\272\246\346\216\222\345\272\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("coretClass", "\345\255\246\347\224\237\344\277\241\346\201\257\346\265\217\350\247\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coretClass: public Ui_coretClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORE_T_H
