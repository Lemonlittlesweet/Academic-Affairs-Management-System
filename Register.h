#pragma once

#include <QWidget>
#include "ui_Register.h"

class Register : public QWidget
{
	Q_OBJECT

public:
	Register(QWidget *parent = nullptr);
	~Register();

private:
	Ui::RegisterClass ui;

private slots:
	void PushFinishButton();
};
