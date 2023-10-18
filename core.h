#pragma once

#include <QMainWindow>
#include "ui_core.h"
#include <QtCharts>
QT_CHARTS_USE_NAMESPACE

class core : public QMainWindow
{
	Q_OBJECT

public:
	core(QString, QWidget *parent = nullptr, QWidget * top = nullptr);
	~core();

private:
	Ui::coreClass ui;
	QWidget* top;
	QString ID;

private slots:
	void sortTableByCol(int col);
	void exit();
};
