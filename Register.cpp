#include "Register.h"
#include <QMessageBox>
#include <QRegExpValidator>

Register::Register(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/testdemo/image/shulogo.png"));//设定图标
	ui.password->setValidator(new QRegExpValidator(QRegExp("[A-Za-z0-9!@#$%^&*()_+{}|:\"<>?]+$")));
	ui.repw->setValidator(new QRegExpValidator(QRegExp("[A-Za-z0-9!@#$%^&*()_+{}|:\"<>?]+$")));
	ui.user->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));//限定输入字符
	ui.phone->setValidator(new QRegExpValidator(QRegExp("^1\\d{10}$")));
	ui.mail->setValidator(new QRegularExpressionValidator(QRegularExpression("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$")));
	//没做：验证手机为11位，邮箱格式正确
}

Register::~Register()
{}

void Register::PushFinishButton() {
	//判断是否能注册，函数输入id，返回bool值
	//if(函数){
		if (ui.password->text() == ui.repw->text()) {
			QMessageBox::information(this, tr("注册成功"), tr("您已成功注册！"), QMessageBox::Ok);
			//存储数据，将收集到的值写入函数中，成功返回true，失败返回false并提示
			//if(写入函数) {
				this->close();
			//}
			/*
			else{
				QMessageBox::warning(this, tr("注册失败"), tr("写入失败！请联系管理员！"), QMessageBox::Ok);
				}
			*/
		}
		else {
			QMessageBox::warning(this, tr("注册失败"), tr("密码与重复密码不同！"), QMessageBox::Ok);
			ui.password->clear();
			ui.repw->clear();
		}
	/*}
		else{
			QMessageBox::warning(this, tr("注册失败"), tr("账号已存在！"), QMessageBox::Ok);
			//输入内容全部清除
		}
	*/
}