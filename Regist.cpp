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

//教师注册
int List::regist_teacher(char id [20], char name [20], char pwd [20])
{
	//cout << "请输入教师编号：" << endl;
	strcpy(teacher[t_n].id , id);
	for (int i = 0; i < t_n; i++)
	{
		if (!strcmp(teacher[t_n].id, teacher[i].id))
		{
			//cout << "存在该编号注册失败！" << endl;
			return -1;
		}
	}
	//cout << "请输入教师姓名：" << endl;
	strcpy(teacher[t_n].name, name);
	//cout << "请输入教师密码：" << endl;
	strcpy(teacher[t_n].pwd, pwd);
	//cout << "请输入教师授课评分：" << endl;
	teacher[t_n].grade = -1;
	t_n++;
	//cout << "注册成功！" << endl;
	return t_n - 1;
}