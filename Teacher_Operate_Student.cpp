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
#include "time.h"
using namespace std;




//增加学生信息
int List::add_student(char id[20],char name[20],char birthday[20],char department[20],char phone[20],char pwd[20],float grade,float influence,char award[20],char competition[20],char communication[20])
{
/*one:cout << "请输入学号：";
	cin >> student[n].id;*/
	strcpy(student[n].id, id);
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(student[n].id, student[i].id))
		{
			return -1;// cout << "存在该学号，请重新输入！" << endl;
			//goto one;//return warning
		}
	}
	/*cout << "请输入姓名：";
	cin >> student[n].name;
	cout << "请输入出生年月：";
	cin >> student[n].birthday;
	cout << "请输入系别：";
	cin >> student[n].department;
	cout << "请输入联系电话：";
	cin >> student[n].phone;
	cout << "请输入密码：";
	cin >> student[n].pwd;
	cout << "请输入学生绩点：";
	cin >> student[n].grade;
	cout << "请输入不良记录严重程度(1.一般 2.严重 3.非常严重)：";
	cin >> student[n].influence;*/
	strcpy(student[n].name, name);
	strcpy(student[n].birthday, birthday);
	strcpy(student[n].department, department);
	strcpy(student[n].phone, phone);
	strcpy(student[n].pwd, pwd);
	student[n].grade = grade;
	student[n].influence = influence;
	strcpy(student[n].awards, award);
	strcpy(student[n].competition, competition);
	strcpy(student[n].communication, communication);

	if (student[n].influence < 1 || student[n].influence>3)
	{
		return -2;// cout << "输入有误，添加失败！" << endl;
		//return;//return warning
	}

	n++;
	return 1;// cout << "添加学生信息成功！" << endl;//return 1
}
//查询学生信息
int List::select_student(int chioce,char id[20],char name[20])
{
	if (n <= 0)
	{
		//cout << "没有学生信息，请先录入！" << endl;
		return -1;//return warning
	}
	/*cout << "1.按学号查询  2.按姓名查询：" << endl;//分上下两个做
	cin >> chioce;*/
	if (chioce == 1)
	{
		int temp = 0;
		/*cout << "请输入查询的学号号：";
		char id[20];
		cin >> id;*/
		for (int i = 0; i < n; i++)
		{
			if (!strcmp(id, student[i].id))
			{
				temp++;
				/*cout << "学号：" << student[i].id;
				cout << "  姓名：" << student[i].name;
				cout << "  出生年月：" << student[i].birthday;
				cout << "  系别：" << student[i].department;
				cout << "  联系电话：" << student[i].phone;
				cout << "  绩点：" << student[i].grade;
				cout << "  不良记录严重程度(1.一般 2.严重 3.非常严重)：" << student[i].influence << endl;*/
				return i;
				break;//return i
			}
		}
		if (temp == 0)
		{
			return -2;//cout << "查找的学生信息不存在！" << endl;//return warning
		}
	}
	else if (chioce == 2)
	{
		int temp = 0;
		/*cout << "请输入查询的姓名：";
		char name[20];
		cin >> name;*/
		for (int i = 0; i < n; i++)
		{
			if (!strcmp(name, student[i].name))
			{
				temp++;
				/*cout << "学号：" << student[i].id;
				cout << "  姓名：" << student[i].name;
				cout << "  出生年月：" << student[i].birthday;
				cout << "  系别：" << student[i].department;
				cout << "  联系电话：" << student[i].phone;
				cout << "  绩点：" << student[i].grade;
				cout << "  不良记录严重程度(1.一般 2.严重 3.非常严重)：" << student[i].influence << endl;*/
				return i;
				break;//return i
			}
		}
		if (temp == 0)
		{
			return -2;// cout << "查找的学生信息不存在！" << endl;//return warning
		}
	}
	/*else
	{
		cout << "输入有误！" << endl;
	}*/
}
//删除学生信息
int List::delete_student(char id[20])
{
	if (n <= 0)
	{
		//cout << "没有学生信息，请先录入！" << endl;
		return -1;//return warning
	}
	int temp = 0;
	/*cout << "请输入删除的学号：";
	char id[20];
	cin >> id;*/
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(id, student[i].id))
		{
			temp++;
			/*cout << "删除信息如下：" << endl;
			cout << "学号：" << student[i].id;
			cout << "  姓名：" << student[i].name;
			cout << "  出生年月：" << student[i].birthday;
			cout << "  系别：" << student[i].department;
			cout << "  联系电话：" << student[i].phone << endl;*/
			for (int j = i; j < n - 1; j++)
			{
				student[j] = student[j + 1];
			}
			n--;
			//cout << "删除学生信息成功！" << endl;
			return i;
			break;//return i
		}
	}
	if (temp == 0)
	{
		return -2;// cout << "删除的学生信息不存在！" << endl;//return warning
	}

}
//修改学生信息
int List::update_student(char id[20],char name[20], char birthday[20], char department[20],char phone[20],char awards[20],char competation[20],char communication[20])
{
	if (n <= 0)
	{
		//cout << "没有学生信息，请先录入！" << endl;
		return -1;//return warning
	}
	int temp = 0;
	/*cout << "请输入修改的学号：";
	char id[20];
	cin >> id;*/
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(id, student[i].id))
		{
			temp++;
			/*cout << "修改信息如下：" << endl;
			cout << "学号：" << student[i].id;
			cout << "  姓名：" << student[i].name;
			cout << "  出生年月：" << student[i].birthday;
			cout << "  系别：" << student[i].department;
			cout << "  联系电话：" << student[i].phone << endl;
			cout << "========================================" << endl;
			cout << "请输入新的姓名：";
			cin >> student[i].name;
			cout << "请输入出生年月：";
			cin >> student[i].birthday;
			cout << "请输入系别：";
			cin >> student[i].department;
			cout << "请输入新的联系电话：";
			cin >> student[i].phone;
			cout << "修改成功！" << endl;*/
			strcpy(student[i].name, name);
			strcpy(student[i].birthday, birthday);
			strcpy(student[i].department, department);
			strcpy(student[i].phone, phone);
			subject[i].num = 0;
			strcpy(student[i].awards, awards);
			strcpy(student[i].competition, competation);
			strcpy(student[i].communication, communication);
			return 1;
			break;//同课程
		}
	}
	if (temp == 0)
	{
		return -2;
		//cout << "编辑的学生信息不存在！" << endl;
	}

}
//弃用 浏览学生信息 自行利用查询遍历
int List::show_student()
{
	if (n <= 0)
	{
		//cout << "没有学生信息，请先录入！" << endl;
		return -1;
	}
	for (int i = 0; i < n; i++)
	{
		/*cout << "学号：" << student[i].id;
		cout << "  姓名：" << student[i].name;
		cout << "  出生年月：" << student[i].birthday;
		cout << "  系别：" << student[i].department;
		cout << "  联系电话：" << student[i].phone;
		cout << "  绩点：" << student[i].grade;
		cout << "  不良记录严重程度(1.一般 2.严重 3.非常严重)：" << student[i].influence << endl;*/
	}
}
//排序绑定按钮
//学生绩点排序
int List::sort_student_grade()
{
	if (n <= 0)
	{
		//cout << "没有学生信息，请先录入！" << endl;
		return -1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (student[j].grade > student[j + 1].grade)
			{
				Student s = student[j];
				student[j] = student[j + 1];
				student[j + 1] = s;
			}
		}
	}
	return 1;
	/*cout << "学生绩点排序如下：" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "学号：" << student[i].id;
		cout << "  姓名：" << student[i].name;
		cout << "  出生年月：" << student[i].birthday;
		cout << "  系别：" << student[i].department;
		cout << "  联系电话：" << student[i].phone;
		cout << "  绩点：" << student[i].grade;
		cout << "  不良记录严重程度(1.一般 2.严重 3.非常严重)：" << student[i].influence << endl;
	}*/
}
//学生不良记录严重成都排序
int List::sort_student_infuluce()

{
	if (n <= 0)
	{
		//cout << "没有学生信息，请先录入！" << endl;
		return -1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (student[j].influence > student[j + 1].influence)
			{
				Student s = student[j];
				student[j] = student[j + 1];
				student[j + 1] = s;
			}
		}
	}
	return 1;
	/*cout << "学生不良记录严重程度排序如下：" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "学号：" << student[i].id;
		cout << "  姓名：" << student[i].name;
		cout << "  出生年月：" << student[i].birthday;
		cout << "  系别：" << student[i].department;
		cout << "  联系电话：" << student[i].phone;
		cout << "  绩点：" << student[i].grade;
		cout << "  不良记录严重程度(1.一般 2.严重 3.非常严重)：" << student[i].influence << endl;
	}*/
}
//老师批改作业
int List::correct_homework(int i,float score)
{
	subwork[i].grade = score;
	return 1;
	/*char sub_id[20];
	cout << "请输入要修改作业的课程号：";
	cin >> sub_id;
	int flag = 0;
	for (int i = 0; i < sw_n; i++)
	{
		if (!strcmp(sub_id, subwork[i].sub_id))
		{
			cout << "学生学号：" << subwork[i].stu_id << endl;
			cout << "提交内容：" << subwork[i].content << endl;
			cout << "请输入你的评分：";
			cin >> subwork[i].grade;
			flag = 1;

		}
	}
	if (flag == 0)
		cout << "无学生提交作业" << endl;
	else
		cout << "你已批改完所有的作业！";*/
}


//老师发送消息
int List::send_message(char id[20],char sub_id[20],char mes[100])
{
	for (int i = 0; i < t_n; i++)
	{
		if (!strcmp(sub_id, t_course[i].sub_id) && !strcmp(id, t_course[i].teacher_id))
		{
			strcpy(message[m_n].teacher_id, id);
			strcpy(message[m_n].sub_id, sub_id);
			strcpy(message[m_n].content, mes);
			message[m_n].time = getTime();
			/*cout << "请输入你要发布的消息：" << endl;
			cin >> message[m_n].content;
			cout << "消息发布成功！" << endl;
			cout << "发布时间：" << getTime() << endl;;*/
			m_n++;
			return 1;
		}
	}
	return -1;
}

//输入学生成绩
int List::tea_input_score(char course_id[20],char  stu_id[20],float score)
{
	/*char course_id[20];
	char;
	cout << "请输入你想要输入成绩的课程号：" << endl;
	cin >> course_id;
	cout << "请输入你要输入成绩的学生账号：" << endl;
	cin >> stu_id;*/
	for (int i = 0; i < num; i++)
	{
		if (!strcmp(course_id, s_course[i].sub_id) && !strcmp(stu_id, s_course[i].stu_id))
		{
			s_course[i].score = score;
			/*cout << "已查找到学生，请输入学生成绩：" << endl;
			cin >> s_course[i].score;
			cout << "成绩录入成功" << endl;*/
			return 1;
			break;
		}
		else
		{
			return -1;//cout << "未查到对应学生选有此课程！" << endl;

		}
	}
}
//设置签到函数
int List::set_sign_in(char id[20], char sub_id[20], int start_hour, int start_min, int end_hour, int end_min)
{
	/*cout << "请输入你要设置签到的课程号：";
	char sub_id[20];
	cin >> sub_id;*/
	for (int i = 0; i < tc_n; i++)
	{
		if (!strcmp(sub_id, t_course[i].sub_id) && !strcmp(id, t_course[i].teacher_id))
		{
			strcpy(sign_in[si_n].sub_id, sub_id);
			strcpy(sign_in[si_n].tea_id, id);
			/*cout << "请设置你的起始小时：" << endl;
			cin >> sign_in[si_n].time_start_hour;
			cout << "请设置你的起始分钟：" << endl;
			cin >> sign_in[si_n].time_start_min;
			cout << "请设置你的终止小时：" << endl;
			cin >> sign_in[si_n].time_end_hour;
			cout << "请设置你的起始分钟：" << endl;
			cin >> sign_in[si_n].time_end_min;*/
			sign_in[si_n].time_start_hour = start_hour;
			sign_in[si_n].time_start_min = start_min;
			sign_in[si_n].time_end_hour = end_hour;
			sign_in[si_n].time_end_min = end_min;
			si_n++;
			return 1;
		}
	}
	//cout << "未查询到此课程！" << endl;
	return -1;
}
//弃用 查看签到情况
void List::show_sign_in()
{
	cout << "请输入你要查看的课程号：";
	char sub_id[20];
	cin >> sub_id;
	int flag = 0;
	for (int i = 0; i < si_n; i++)
	{
		//if (!strcmp(sign_in[i].tea_id, all_id))
		{
			flag = 1;
			for (int j = 0; j < sis_n; j++)
			{
				if (!strcmp(sign_in_stu[i].sub_id, sub_id))
				{
					if (sign_in_stu[i].state)
					{
						cout << "学号：" << sign_in_stu[i].stu_id << " 签到完成" << endl;
					}
					else
					{
						cout << "学号：" << sign_in_stu[i].stu_id << " 未完成签到" << endl;
					}
				}
			}
		}
	}
	if (flag == 0)
		cout << "你并没有设置签到！" << endl;


}

