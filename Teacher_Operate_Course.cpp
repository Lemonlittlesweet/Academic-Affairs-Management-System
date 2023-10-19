#include<iostream>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<ctime>
#include <fstream>
#include "Subject.h"
#include "Student.h"
#include "Teacher.h"
#include "Operate.h"
using namespace std;


//增加课程信息
void List::add_subject()
{
one:cout << "请输入课程编号：";
	cin >> subject[s_n].id;
	for (int i = 0; i < s_n; i++)
	{
		if (!strcmp(subject[s_n].id, subject[i].id))
		{
			cout << "存在该课程编号，请重新输入！" << endl;
			goto one;//改成return，ui界面接warning
		}
	}
	cout << "请输入课程名称：";
	cin >> subject[s_n].name;
	cout << "请输入课程性质：";
	cin >> subject[s_n].type;
	cout << "请输入课程总学时：";
	cin >> subject[s_n].hour;
	cout << "请输入课程学分：";
	cin >> subject[s_n].score;
	cout << "请输入课程时间：";
	cin >> subject[s_n].time;
	subject[s_n].num = 0;
	s_n++;
	cout << "添加课程信息成功！" << endl;
};
//查询课程信息
void List::select_subject()
{
	if (s_n <= 0)
	{
		cout << "没有课程信息，请先录入！" << endl;
		return;//return -1 warning 无课程
	}
	cout << "1.按课程编号查询  2.按课程名称查询：" << endl;//分上下两块两个按钮，右边显示
	int chioce;
	cin >> chioce;
	if (chioce == 1)
	{
		cout << "请输入查询的课程编号：";
		char id[20];
		int temp = 0;
		cin >> id;
		for (int i = 0; i < s_n; i++)
		{
			if (!strcmp(id, subject[i].id))
			{//直接return i，ui界面读取信息写入
				temp++;
				cout << "课程编号：" << subject[i].id;
				cout << "  课程名称：" << subject[i].name;
				cout << "  课程性质：" << subject[i].type;
				cout << "  课程总学时：" << subject[i].hour;
				cout << "  课程学分：" << subject[i].score;
				cout << "  课程时间：" << subject[i].time;
				cout << "  课程选修人数：" << subject[i].num << endl;
				break;
			}
		}
		if (temp == 0)
		{
			cout << "查找的课程信息不存在！" << endl;//return -2接warning
		}
	}
	else if (chioce == 2)
	{
		cout << "请输入查询的课程名称：";
		char name[20];
		int temp = 0;
		cin >> name;
		for (int i = 0; i < s_n; i++)
		{
			if (!strcmp(name, subject[i].name))
			{//同上
				temp++;
				cout << "课程编号：" << subject[i].id;
				cout << "  课程名称：" << subject[i].name;
				cout << "  课程性质：" << subject[i].type;
				cout << "  课程总学时：" << subject[i].hour;
				cout << "  课程学分：" << subject[i].score;
				cout << "  课程时间：" << subject[i].time;
				cout << "  课程选修人数：" << subject[i].num << endl;
				break;
			}
		}
		if (temp == 0)
		{
			cout << "查找的课程信息不存在！" << endl;//同上
		}
	}
	/*else
	{
		cout << "输入有误！" << endl;
	}*/
}
//删除课程信息
void List::delete_subject()
{
	if (s_n <= 0)
	{
		cout << "没有课程信息，请先录入！" << endl;
		return;//return -1接warning
	}
	cout << "请输入删除的课程编号：";
	char id[20];
	int temp = 0;
	cin >> id;
	for (int i = 0; i < s_n; i++)
	{
		if (!strcmp(id, subject[i].id))
		{
			temp++;
			cout << "删除信息如下：" << endl;
			cout << "课程编号：" << subject[i].id;
			cout << "  课程名称：" << subject[i].name;
			cout << "  课程性质：" << subject[i].type;
			cout << "  课程总学时：" << subject[i].hour;
			cout << "  课程学分：" << subject[i].score;
			cout << "  课程时间：" << subject[i].time;
			cout << "  课程选修人数：" << subject[i].num << endl;
			for (int j = i; j < s_n - 1; j++)
			{
				subject[j] = subject[j + 1];
			}
			s_n--;
			cout << "删除课程信息成功！" << endl;
			//return i，ui界面接，加成功infor
			break;
		}
	}
	if (temp == 0)
	{
		cout << "删除的课程信息不存在！" << endl;//return -2接warning
	}

}
//修改课程信息 与查询放在一个界面
void List::update_subject()
{
	if (s_n <= 0)
	{
		cout << "没有课程信息，请先录入！" << endl;
		return;//return -1
	}
	cout << "请输入修改的课程编号：";
	char id[20];
	int temp = 0;
	cin >> id;
	for (int i = 0; i < s_n; i++)
	{
		if (!strcmp(id, subject[i].id))
		{
			temp++;
			/*cout << "修改信息如下：" << endl;
			cout << "课程编号：" << subject[i].id;
			cout << "  课程名称：" << subject[i].name;
			cout << "  课程性质：" << subject[i].type;
			cout << "  课程总学时：" << subject[i].hour;
			cout << "  课程学分：" << subject[i].score;
			cout << "  课程时间：" << subject[i].time;
			cout << "  课程选修人数：" << subject[i].num << endl;
			cout << "========================================" << endl;*/
			cout << "请输入新的课程名称：";
			cin >> subject[i].name;
			cout << "请输入新的课程性质：";
			cin >> subject[i].type;
			cout << "请输入新的课程总学时：";
			cin >> subject[i].hour;
			cout << "请输入新的课程学分：";
			cin >> subject[i].score;
			cout << "请输入新的课程时间：";
			cin >> subject[i].time;
			subject[i].num = 0;
			cout << "修改成功！" << endl;
			break;
		}
	}
	if (temp == 0)
	{
		cout << "编辑的课程信息不存在！" << endl;//return warning
	}

}
//安排教师授课
void List::teacher_c()
{
	cout << "请输入教师编号：";
	char tea_id[20];
	int temp = 0;
	cin >> tea_id;
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(tea_id, teacher[i].id))
		{
			temp++;
			cout << "请输入教师课程编号：";
			char sub_id[20];
			int temp_ = 0;
			cin >> sub_id;
			for (int j = 0; j < s_n; j++)
			{
				if (!strcmp(sub_id, subject[j].id))
				{



					temp_++;
					strcpy(t_course[tc_n].teacher_id, tea_id);
					strcpy(t_course[tc_n].sub_id, tea_id);


					tc_n++;
					cout << "教师教课安排成功！" << endl;
					return;
				}
			}
			if (temp_ == 0)
			{
				cout << "课程编号不存在，安排失败！" << endl;
				return;
			}
		}
	}
	if (temp == 0)
	{
		cout << "教师不存在，安排失败！" << endl;
	}
}
//弃用 浏览课程信息 自行遍历 查询所有
void List::show_subject()
{
	if (s_n <= 0)
	{
		cout << "没有课程信息，请先录入！" << endl;
		return;
	}
	for (int i = 0; i < s_n; i++)
	{
		cout << "课程编号：" << subject[i].id;
		cout << "  课程名称：" << subject[i].name;
		cout << "  课程性质：" << subject[i].type;
		cout << "  课程总学时：" << subject[i].hour;
		cout << "  课程学分：" << subject[i].score;
		cout << "  课程时间：" << subject[i].time;
		cout << "  课程选修人数：" << subject[i].num << endl;
	}
}
