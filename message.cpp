#include "message.h"
#include "Global.h"

message::message(QString ID, QWidget *parent)
	:ID(ID) ,QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/testdemo/image/shulogo.png"));//设定图标
	this->setWindowTitle("通知");
	//查看老师发送的所有人信息
	{
		int flag = 0;
		for (int i = 0; i < ::list.num; i++)//遍历学生的选课信息
		{
			if (!strcmp(ID.toUtf8().data(), ::list.s_course[i].stu_id))//如果查到了学生的选课信息
			{
				for (int j = 0; j < ::list.m_n; j++)//遍历老师发消息的表
				{
					if (!(strcmp(::list.s_course[i].sub_id, ::list.message[j].sub_id)))
					{
						ui.mes->insertPlainText("课程号：");
						ui.mes->insertPlainText(::list.message[j].sub_id);
						ui.mes->insertPlainText("\n");
						ui.mes->insertPlainText("消息内容：");
						ui.mes->insertPlainText(::list.message[j].content);
						ui.mes->insertPlainText("\n");
						ui.mes->insertPlainText("发布时间：");
						ui.mes->insertPlainText(QString::fromStdString(::list.message[j].time));
						ui.mes->insertPlainText("\n");
						/*cout << "课程号为：  " << ::list.message[j].sub_id << "   发送的消息为：  " << ::list.message[j].content << endl;
						cout << "发布时间： " << ::list.message[j].time << endl;*/
						flag = 1;
					}
				}
			}
		}
		if (flag == 0)
			//cout << "你选择的课程并没有老师发送消息" << endl;
			ui.mes->insertPlainText("你选择的课程并没有老师发送消息");
	}
}

message::~message()
{}
