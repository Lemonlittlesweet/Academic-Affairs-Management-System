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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_2;
    QWidget *tab_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QLabel *label_8;
    QLabel *label_9;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_3;
    QWidget *tab_6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *comboBox_3;
    QLabel *label_7;
    QComboBox *comboBox_4;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_4;
    QWidget *uuu;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QComboBox *comboBox_5;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_16;
    QTextBrowser *textBrowser_2;
    QWidget *tab_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QWidget *tab_4;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
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
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem11);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        if (tableWidget_2->rowCount() < 3)
            tableWidget_2->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 2, __qtablewidgetitem21);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout_3->addWidget(tableWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        horizontalLayoutWidget = new QWidget(tab_5);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 631, 22));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        comboBox_2 = new QComboBox(horizontalLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        label_9 = new QLabel(horizontalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        textBrowser = new QTextBrowser(tab_5);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 60, 671, 261));
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 330, 75, 23));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        horizontalLayoutWidget_2 = new QWidget(tab_6);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 10, 631, 22));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        comboBox_3 = new QComboBox(horizontalLayoutWidget_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_2->addWidget(comboBox_3);

        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        comboBox_4 = new QComboBox(horizontalLayoutWidget_2);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_2->addWidget(comboBox_4);

        label_10 = new QLabel(horizontalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        label_11 = new QLabel(horizontalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 300, 75, 23));
        tabWidget->addTab(tab_6, QString());
        uuu = new QWidget();
        uuu->setObjectName(QString::fromUtf8("uuu"));
        horizontalLayoutWidget_3 = new QWidget(uuu);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 10, 631, 22));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);

        comboBox_5 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        horizontalLayout_3->addWidget(comboBox_5);

        label_14 = new QLabel(horizontalLayoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_3->addWidget(label_14);

        label_13 = new QLabel(horizontalLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        label_15 = new QLabel(horizontalLayoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_3->addWidget(label_15);

        label_16 = new QLabel(horizontalLayoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_3->addWidget(label_16);

        textBrowser_2 = new QTextBrowser(uuu);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 50, 641, 261));
        tabWidget->addTab(uuu, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayoutWidget_4 = new QWidget(tab_3);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(40, 20, 160, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableWidget_3 = new QTableWidget(tab_4);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(430, 10, 256, 192));
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 200, 75, 23));
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 200, 75, 23));
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 195, 74));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        tabWidget->addTab(tab_4, QString());

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

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(coreClass);
    } // setupUi

    void retranslateUi(QMainWindow *coreClass)
    {
        coreClass->setWindowTitle(QCoreApplication::translate("coreClass", "core", nullptr));
        name->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        exit->setText(QCoreApplication::translate("coreClass", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("coreClass", "\350\200\201\345\270\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("coreClass", "\344\270\212\350\257\276\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("coreClass", "\344\270\212\350\257\276\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("coreClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("coreClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("coreClass", "3", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("coreClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("coreClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("coreClass", "\346\214\211\345\221\250\344\270\200\345\210\260\345\221\250\344\272\224\346\216\222\345\272\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(2, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("coreClass", "3", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("coreClass", "\350\257\276\347\250\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("coreClass", "\350\200\201\345\270\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("coreClass", "\346\210\220\347\273\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("coreClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("coreClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("coreClass", "3", nullptr));

        const bool __sortingEnabled1 = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->item(0, 2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("coreClass", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->item(1, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("coreClass", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->item(2, 2);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("coreClass", "3", nullptr));
        tableWidget_2->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("coreClass", "\346\210\220\347\273\251", nullptr));
        label_4->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213", nullptr));
        label_5->setText(QCoreApplication::translate("coreClass", "\346\227\266\351\227\264", nullptr));
        label_8->setText(QCoreApplication::translate("coreClass", "\346\210\220\347\273\251", nullptr));
        label_9->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("coreClass", "\346\217\220\344\272\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("coreClass", "\344\275\234\344\270\232", nullptr));
        label_6->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213", nullptr));
        label_7->setText(QCoreApplication::translate("coreClass", "\346\227\266\351\227\264", nullptr));
        label_10->setText(QCoreApplication::translate("coreClass", "\347\255\276\345\210\260\347\212\266\346\200\201", nullptr));
        label_11->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("coreClass", "\347\255\276\345\210\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("coreClass", "\350\200\203\345\213\244", nullptr));
        label_12->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("coreClass", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(uuu), QCoreApplication::translate("coreClass", "\351\200\232\347\237\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("coreClass", "\347\247\201\344\277\241", nullptr));
        pushButton->setText(QCoreApplication::translate("coreClass", "\346\237\245\346\211\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("coreClass", "\346\270\205\347\251\272", nullptr));
        label->setText(QCoreApplication::translate("coreClass", "\345\255\246/\345\267\245\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("coreClass", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("coreClass", "\350\257\276\347\250\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("coreClass", "\346\237\245\346\211\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coreClass: public Ui_coreClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORE_H
