#include "Register.h"
#include "Global.h"
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
	ui.grade->setValidator(new QRegExpValidator(QRegExp("^([0-9]|[1-9][0-9]|100)$")));
	ui.mail->setValidator(new QRegularExpressionValidator(QRegularExpression("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$")));
	//没做：邮箱格式正确
}

Register::~Register()
{}

void Register::PushFinishButton() {
		if ((ui.password->text() == ui.repw->text()) && ::list.regist_teacher(ui.user->text().toLatin1().data(), ui.name->text().toLatin1().data(), ui.password->text().toLatin1().data(), ui.grade->text().toFloat())) {
			QMessageBox::information(this, tr("注册成功"), tr("您已成功注册！"), QMessageBox::Ok);
			this->close();
		}
		else if(::list.regist_teacher(ui.user->text().toLatin1().data(), ui.name->text().toLatin1().data(), ui.password->text().toLatin1().data(), ui.grade->text().toFloat())==-1){
			QMessageBox::warning(this, tr("注册失败"), tr("账号已存在！"), QMessageBox::Ok);
			//输入内容全部清除
			ui.grade->clear();
			ui.name->clear();
			ui.password->clear();
			ui.repw->clear();
		}
		else {
			QMessageBox::warning(this, tr("注册失败"), tr("密码与重复密码不同！"), QMessageBox::Ok);
			ui.password->clear();
			ui.repw->clear();
		}

}