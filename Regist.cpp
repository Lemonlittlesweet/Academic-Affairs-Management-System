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
int List::regist_teacher(char id [20], char name [20], char pwd [20], float grade)
{
	//cout << "请输入教师编号：" << endl;
	id = teacher[t_n].id;
	for (int i = 0; i < t_n; i++)
	{
		if (!strcmp(teacher[t_n].id, teacher[i].id))
		{
			//cout << "存在该编号注册失败！" << endl;
			return -1;
		}
	}
	//cout << "请输入教师姓名：" << endl;
	name = teacher[t_n].name;
	//cout << "请输入教师密码：" << endl;
	pwd = teacher[t_n].pwd;
	//cout << "请输入教师授课评分：" << endl;
	grade = teacher[t_n].grade;
	t_n++;
	//cout << "注册成功！" << endl;
	return t_n - 1;
}