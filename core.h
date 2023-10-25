#pragma once

#include <QMainWindow>
#include "ui_core.h"
//#include <QtCharts>
//QT_CHARTS_USE_NAMESPACE

class core : public QMainWindow
{
	Q_OBJECT

public:
	core(QString ID, QWidget *parent = nullptr, QWidget * top = nullptr);
	~core();

private:
	Ui::coreClass ui;
	QWidget* top;
	QString ID;

private slots:
	//void sortTableByCol(int col);
	void exit();
	void choclassPress();
	void exitclassPress();
	void searchSel();
	void bianhao();
	void mingchen();
	void xuefenpaixu();
	void laoshishoukepingfenpaixu();
	void searchhome();
	void handhomework();
	void stu_former();
	void stu_hand();
	void stu_latter();
	void startbegin();
	void qiandao();
};
