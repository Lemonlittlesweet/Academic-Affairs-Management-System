#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_testdemo.h"

class testdemo : public QMainWindow
{
    Q_OBJECT

public:
    testdemo(QWidget *parent = nullptr);
    ~testdemo();


private:
    Ui::testdemoClass ui;

private slots:
	void PushLoginClicked();
	void PushRegisterClicked();
};
