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

//保存课程信息
void List::save_subject()
{
	ofstream outFile("subject.txt");
	//outFile.open("subject.txt");
	int i = 0, j = 0;

	for (i = 0; i < s_n; i++)
	{
		outFile << subject[i].id << " "
			<< subject[i].name << " "
			<< subject[i].type << " "
			<< subject[i].hour << " "
			<< subject[i].score << " "
			<< subject[i].time << " "
			<< subject[i].num << endl;


	}
	//cout << "文件保存成功！" << endl;
	outFile.close();
}
//读取课程信息
void List::read_subject()
{
	ifstream in("subject.txt", ios::in);
	if (!in.is_open())
	{
		//cout << "打开文件失败" << endl;
		return;

	}

	while (!in.eof())
	{
		in >> subject[s_n].id
			>> subject[s_n].name
			>> subject[s_n].type
			>> subject[s_n].hour
			>> subject[s_n].score
			>> subject[s_n].time
			>> subject[s_n].num;


		s_n++;
	}
	s_n--;

	//cout << "文件导入成功！" << endl;
	in.close();
}


//保存教师信息
void List::save_teacher()
{
	ofstream outFile("teacher.txt");
	//outFile.open("teacher.txt");
	int i = 0, j = 0;

	for (i = 0; i < t_n; i++)
	{
		outFile << teacher[i].id << " "
			<< teacher[i].name << " "
			<< teacher[i].pwd << " "
			<< teacher[i].grade << endl;


	}
	//cout << "文件保存成功！" << endl;
	outFile.close();
}
//读取教师信息
void List::read_teacher()
{
	ifstream in("teacher.txt", ios::in);
	if (!in.is_open())
	{
		//cout << "打开文件失败" << endl;
		return;

	}

	while (!in.eof())
	{
		in >> teacher[t_n].id
			>> teacher[t_n].name
			>> teacher[t_n].pwd
			>> teacher[t_n].grade;


		t_n++;
	}
	t_n--;

	//cout << "文件导入成功！" << endl;
	in.close();
}


//保存学生信息
void List::save_student()
{
	ofstream outFile("student.txt");
	//outFile.open("student.txt");
	int i = 0, j = 0;

	for (i = 0; i < n; i++)
	{
		outFile << student[i].id << " "
			<< student[i].name << " "
			<< student[i].birthday << " "
			<< student[i].department << " "
			<< student[i].phone << " "
			<< student[i].pwd << " "
			<< student[i].grade << " "
			<< student[i].influence << endl;


	}
	//cout << "文件保存成功！" << endl;
	outFile.close();
}
//读取学生信息
void List::read_student()
{
	ifstream in("student.txt", ios::in);
	if (!in.is_open())
	{
		//cout << "打开文件失败" << endl;
		return;

	}

	while (!in.eof())
	{
		in >> student[n].id
			>> student[n].name
			>> student[n].birthday
			>> student[n].department
			>> student[n].phone
			>> student[n].pwd
			>> student[n].grade
			>> student[n].influence;


		n++;
	}
	n--;

	//cout << "文件导入成功！" << endl;
	in.close();
}


//保存选课信息
void List::save()
{
	ofstream outFile("select.txt");
	//outFile.open("select.txt");
	int i = 0, j = 0;

	for (i = 0; i < num; i++)
	{
		outFile << s_course[i].stu_id << " "
			<< s_course[i].sub_id << " "
			<< s_course[i].score << endl;


	}
	//cout << "文件保存成功！" << endl;
	outFile.close();
}
//读取选课信息
void List::read()
{
	ifstream in("select.txt", ios::in);
	if (!in.is_open())
	{
		//cout << "打开文件失败" << endl;
		return;

	}

	while (!in.eof())
	{
		in >> s_course[num].stu_id
			>> s_course[num].sub_id
			>> s_course[num].score;


		num++;
	}
	num--;

	//cout << "文件导入成功！" << endl;
	in.close();
}