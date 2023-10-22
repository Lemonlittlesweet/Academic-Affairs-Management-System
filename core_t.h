#pragma once

#include <QMainWindow>
#include "ui_core_t.h"
//#include <QtCharts>
//QT_CHARTS_USE_NAMESPACE

class core_t : public QMainWindow
{
	Q_OBJECT

public:
	core_t(QString ID,QWidget *parent = nullptr, QWidget * top = nullptr);
	~core_t();

private:
	Ui::coretClass ui;
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
};
