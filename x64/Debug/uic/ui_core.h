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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
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
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_17;
    QLineEdit *subid;
    QLabel *label_18;
    QLineEdit *subscore;
    QTextBrowser *xuanke;
    QPushButton *cho_class;
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
    QTextBrowser *chake;
    QWidget *tab_10;
    QPushButton *pushButton_6;
    QTextBrowser *shoukepingfen;
    QWidget *tab_8;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QLabel *label_19;
    QLineEdit *subid_2;
    QPushButton *exit_class;
    QTextBrowser *tuike;
    QPushButton *search_sel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *coreClass)
    {
        if (coreClass->objectName().isEmpty())
            coreClass->setObjectName(QString::fromUtf8("coreClass"));
        coreClass->resize(725, 486);
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
        formLayoutWidget = new QWidget(tab_7);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 60, 231, 80));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_17);

        subid = new QLineEdit(formLayoutWidget);
        subid->setObjectName(QString::fromUtf8("subid"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, subid);

        label_18 = new QLabel(formLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_18);

        subscore = new QLineEdit(formLayoutWidget);
        subscore->setObjectName(QString::fromUtf8("subscore"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, subscore);

        xuanke = new QTextBrowser(tab_7);
        xuanke->setObjectName(QString::fromUtf8("xuanke"));
        xuanke->setGeometry(QRect(330, 30, 351, 281));
        cho_class = new QPushButton(tab_7);
        cho_class->setObjectName(QString::fromUtf8("cho_class"));
        cho_class->setGeometry(QRect(120, 180, 75, 23));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(470, 320, 75, 23));
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
        chake = new QTextBrowser(tab_9);
        chake->setObjectName(QString::fromUtf8("chake"));
        chake->setGeometry(QRect(370, 60, 256, 192));
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        pushButton_6 = new QPushButton(tab_10);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 260, 111, 23));
        shoukepingfen = new QTextBrowser(tab_10);
        shoukepingfen->setObjectName(QString::fromUtf8("shoukepingfen"));
        shoukepingfen->setGeometry(QRect(300, 40, 256, 192));
        tabWidget->addTab(tab_10, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        formLayoutWidget_2 = new QWidget(tab_8);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(50, 40, 221, 80));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(formLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_19);

        subid_2 = new QLineEdit(formLayoutWidget_2);
        subid_2->setObjectName(QString::fromUtf8("subid_2"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, subid_2);

        exit_class = new QPushButton(tab_8);
        exit_class->setObjectName(QString::fromUtf8("exit_class"));
        exit_class->setGeometry(QRect(110, 200, 75, 23));
        tuike = new QTextBrowser(tab_8);
        tuike->setObjectName(QString::fromUtf8("tuike"));
        tuike->setGeometry(QRect(380, 40, 256, 192));
        search_sel = new QPushButton(tab_8);
        search_sel->setObjectName(QString::fromUtf8("search_sel"));
        search_sel->setGeometry(QRect(470, 270, 75, 23));
        tabWidget->addTab(tab_8, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        coreClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(coreClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 23));
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

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(coreClass);
    } // setupUi

    void retranslateUi(QMainWindow *coreClass)
    {
        coreClass->setWindowTitle(QCoreApplication::translate("coreClass", "core", nullptr));
        name->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        exit->setText(QCoreApplication::translate("coreClass", "\351\200\200\345\207\272", nullptr));
        label_17->setText(QCoreApplication::translate("coreClass", "\351\200\211\344\277\256\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        label_18->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\346\210\220\347\273\251", nullptr));
        cho_class->setText(QCoreApplication::translate("coreClass", "\351\200\211\350\257\276", nullptr));
        pushButton_5->setText(QCoreApplication::translate("coreClass", "\345\255\246\345\210\206\346\216\222\345\272\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("coreClass", "\351\200\211\350\257\276", nullptr));
        label_20->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        label_21->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        chaxun_bianhao->setText(QCoreApplication::translate("coreClass", "\346\237\245\350\257\242", nullptr));
        chaxun_mingchen->setText(QCoreApplication::translate("coreClass", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("coreClass", "\346\237\245\350\257\242\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        pushButton_6->setText(QCoreApplication::translate("coreClass", "\350\200\201\345\270\210\346\216\210\350\257\276\350\257\204\345\210\206\346\216\222\345\272\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("coreClass", "\346\237\245\350\257\242\350\200\201\345\270\210\344\277\241\346\201\257", nullptr));
        label_19->setText(QCoreApplication::translate("coreClass", "\351\200\200\350\257\276\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        exit_class->setText(QCoreApplication::translate("coreClass", "\351\200\200\350\257\276", nullptr));
        search_sel->setText(QCoreApplication::translate("coreClass", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("coreClass", "\351\200\200\350\257\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coreClass: public Ui_coreClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORE_H
