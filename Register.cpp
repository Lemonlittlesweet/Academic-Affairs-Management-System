#include "Register.h"
#include <QMessageBox>

Register::Register(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Register::~Register()
{}

void Register::PushFinishButton() {
	//判断是否能注册
	//存储数据
	QMessageBox::information(this, tr("注册成功"), tr("您已成功注册！"), QMessageBox::Ok);
	this->close();
}