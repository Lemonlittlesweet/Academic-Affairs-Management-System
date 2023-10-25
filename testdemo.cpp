#include "testdemo.h"
#include "Register.h"
#include "core.h"
#include "core_t.h"
#include "message.h"
#include "Global.h"
#include <QMessageBox>

testdemo::testdemo(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	this->setWindowIcon(QIcon(":/testdemo/image/shulogo.png"));//设定图标
	this->setWindowTitle("登录");//设置窗口标题为<登录>
	//ui.pw->setEchoMode(QLineEdit::Password);//将密码输入框设为密码模式，不显示输入字符，已在ui界面设置
	ui.username->setFocus();
	ui.loginin->setDefault(true);
	ui.loginin->setShortcut(Qt::Key_Enter);

}

testdemo::~testdemo()
{
	::list.save_subject();
	::list.save_student();
	::list.save();
	::list.save_teacher();
	::list.save_content();
	::list.save_subwork();
	::list.save_message();
	::list.save_teacher_course();
	//不确定是否存在风险的写法
}

void testdemo::PushLoginClicked() {
	if (::list.login_student(ui.username->text().toUtf8().data(), ui.pw->text().toUtf8().data())!=-1) {//登录判断 原 ui.username->text() == "admin" && ui.pw->text() == "123456"
		this->hide();//切换新页面
		core *c = new core(ui.username->text(), nullptr,this);
		c->show();
		ui.pw->clear();
		message *m=new message(ui.username->text(), nullptr);
		m->show();
	}
	else if (::list.login_teacher(ui.username->text().toUtf8().data(), ui.pw->text().toUtf8().data()) != -1) {//教师登录，之后切不同界面
		this->hide();//切换新页面
		core_t *c = new core_t(ui.username->text(), nullptr, this);
		c->show();
		ui.pw->clear();
	}
	else {
		QMessageBox::warning(this, tr("登录失败"), tr("用户名或密码输入错误！"), QMessageBox::Ok);
		ui.pw->clear();
		ui.username->setFocus();
	}


}

void testdemo::PushRegisterClicked() {
	Register *r = new Register;
	r->show();
}