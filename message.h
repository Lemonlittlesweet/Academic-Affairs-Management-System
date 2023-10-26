#pragma once

#include <QMainWindow>
#include "ui_message.h"

class message : public QMainWindow
{
	Q_OBJECT

public:
	message(QString ID, QWidget *parent = nullptr);
	~message();

private:
	Ui::messageClass ui;
	QString ID;
};
