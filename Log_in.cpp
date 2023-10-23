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

//登录
int List::login_teacher(char id[20],char pwd[20])
{
	/*char id[20];
	char pwd[20];
	cout << "请输入教师编号：" << endl;
	cin >> id;
	cout << "请输入教师密码：" << endl;
	cin >> pwd;*/

	for (int i = 0; i < t_n; i++)
	{
		if (!strcmp(id, teacher[i].id)
			&& !strcmp(pwd, teacher[i].pwd))
		{
			//cout << "登陆成功！" << endl;
			return i;
		}
	}

	//cout << "登陆失败！" << endl;
	return -1;
}
int List::login_student(char id[20], char pwd[20])
{
	/*char id[20];
	char pwd[20];
	cout << "请输入学生编号：" << endl;
	cin >> id;
	cout << "请输入学生密码：" << endl;
	cin >> pwd;*/

	for (int i = 0; i < n; i++)
	{
		if (!strcmp(id, student[i].id)
			&& !strcmp(pwd, student[i].pwd))
		{
			//cout << "登陆成功！" << endl;
			return i;
		}
	}

	//cout << "登陆失败！" << endl;
	return -1;
}


