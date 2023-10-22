#include<iostream>
using namespace std;

//主菜单
void menu()
{
	cout << "*************************************" << endl;
	cout << "*       智慧教学管理软件系统        *" << endl;
	cout << "*         1.教师登录                *" << endl;
	cout << "*         2.学生登录                *" << endl;
	cout << "*         3.教师注册                *" << endl;
	cout << "*         0.退出系统                *" << endl;
	cout << "*************************************" << endl;
}
//学生管理
void student_menu()
{
	cout << "*************************************" << endl;
	cout << "*              学生管理             *" << endl;
	cout << "*         1.增加学生信息            *" << endl;//ok
	cout << "*         2.查询学生信息            *" << endl;//ok
	cout << "*         3.删除学生信息            *" << endl;//ok
	cout << "*         4.修改学生信息            *" << endl;//ok
	cout << "*         5.浏览学生信息            *" << endl;//5 6 7
	cout << "*         6.学生绩点排序            *" << endl;//5 6 7
	cout << "*         7.学生不良记录严重程度排序*" << endl;//5 6 7
	cout << "*            课程管理               *" << endl;
	cout << "*         8.增加课程信息            *" << endl;//ok
	cout << "*         9.查询课程信息            *" << endl;//a ok
	cout << "*         10.删除课程信息            *" << endl;//ok
	cout << "*         11.修改课程信息            *" << endl;//ok
	cout << "*         12.浏览课程信息           *" << endl;//b ok
	cout << "*         13.教师课程安排           *" << endl;//ok
	cout << "*         14.查询学生成绩           *" << endl;//c 
	cout << "*         0.返回上一级              *" << endl;
	cout << "*************************************" << endl;
}

//选课管理
void select_menu()
{
	cout << "*************************************" << endl;
	cout << "*          选课管理                 *" << endl;
	cout << "*         1.选课                    *" << endl;//ok
	cout << "*         2.退课                    *" << endl;//ok
	cout << "*         3.查看选课信息            *" << endl;//ok
	//查看课程信息，和老师重合 a ok
	//浏览课程信息 b ok
	//查询成绩 c 不管
	cout << "*         4.教师授课评分排序        *" << endl;//ok
	cout << "*         5.课程学分排序            *" << endl;//ok
	cout << "*         0.返回 上 一级            *" << endl;
	cout << "*************************************" << endl;
}