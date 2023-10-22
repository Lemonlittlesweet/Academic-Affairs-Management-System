#define _CRT_SECURE_NO_WARNINGS 1
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

//选课
int List::choose(char stu_id[20],char sub_id[20],float score)
{
	/*
	cout << "请输入选课的学号：";
	char stu_id[20];
	*/
	int temp = 0;
	//cin >> stu_id;
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(stu_id, student[i].id))
		{
			temp++;
			/*
			cout << "请输入选修课程编号：";
			char sub_id[20];
			cin >> sub_id;
			*/
			int temp_ = 0;
			for (int j = 0; j < num; j++)
			{
				if (!strcmp(sub_id, subject[j].id))
				{

					;

					for (int k = 0; k < num; k++)
					{
						if (!strcmp(stu_id, s_course[k].stu_id))
						{
							for (int z = 0; z < s_n; z++)
							{
								if (!strcmp(s_course[k].sub_id, subject[z].id))
								{
									if (!strcmp(subject[z].time, subject[j].time))
									{
										//cout << "选课时间冲突，选课失败！" << endl;
										return -1;//return warning
									}
								}
							}

						}
					}

					temp_++;
					strcpy(s_course[num].stu_id, stu_id);
					strcpy(s_course[num].sub_id, sub_id);

					/*
					cout << "请输入课程成绩：" << endl;
					cin >> s_course[num].score;
					*/
					s_course[num].score = score;
					num++;

					subject[j].num++;
					//cout << "选课成功！" << endl;
					return 1;
				}
			}
			if (temp_ == 0)
			{
				//cout << "课程编号不存在，选课失败！" << endl;
				return -2;
			}
		}
	}
	return -3;
	/*if (temp == 0)
	{
		cout << "学号不存在，选课失败！" << endl;
	}*/
}
//退课
int List::refund(char stu_id[20], char sub_id[20])
{
	/*
	cout << "请输入退课的学号：";
	char stu_id[20];
	cin >> stu_id;
	*/
	int temp = 0;
	for (int i = 0; i < num; i++)
	{
		if (!strcmp(stu_id, s_course[i].stu_id))
		{
			temp++;
			/*
			cout << "请输入退课的课程编号：";
			char sub_id[20];
			cin >> sub_id;
			*/
			int temp_ = 0;
			if (strcmp(sub_id, s_course[i].sub_id) != 0)
			{
				//cout << "没有选修该课，退课失败！" << endl;
				return -1;
			}

			for (int j = i; j < num - 1; j++)
			{
				s_course[j] = s_course[j + 1];
			}
			num--;

			for (int j = 0; j < s_n; j++)
			{
				if (!strcmp(sub_id, subject[j].id))
				{
					temp_++;

					subject[j].num--;
					//cout << "退课成功！" << endl;
					return 1;
				}
			}
			if (temp_ == 0)
			{
				//cout << "课程编号不存在，退课失败！" << endl;
				return -2;
			}
		}
	}
	return -3;
	/*
	if (temp == 0)
	{
		cout << "学号不存在，退课失败！" << endl;
	}
	*/
}
//查看选课信息 暂时做不了
int List::show(char stu_id[20])
{
	if (num == 0)
	{
		//cout << "没有选课信息！" << endl;
		return -1;
	}

	for (int i = 0; i < num; i++)
	{//和传进来id作比较，if
		cout << "学号：" << s_course[i].stu_id << "  ";
		cout << "选课编号：" << s_course[i].sub_id << "  ";
		cout << "成绩：" << s_course[i].score << endl;
	}

}


//学生成绩查询 暂时做不了
void List::query_course_socre()

{
	if (num == 0)
	{
		cout << "没有选课信息！" << endl;
		return;
	}

	char id[20];
	cout << "请输入查询的学号：" << endl;
	cin >> id;

	for (int i = 0; i < num; i++)
	{
		if (!strcmp(id, s_course[i].stu_id))
		{
			cout << "学号：" << s_course[i].stu_id << "  ";
			cout << "选课编号：" << s_course[i].sub_id << "  ";
			cout << "成绩：" << s_course[i].score << endl;
		}

	}

}



//教师授课评分排序
int List::sort_teacher_grade()
{
	if (t_n <= 0)
	{
		cout << "没有教师信息！" << endl;
		return -1;
	}
	for (int i = 0; i < t_n; i++)
	{
		for (int j = 0; j < t_n - 1 - i; j++)
		{
			if (teacher[j].grade > teacher[j + 1].grade)
			{
				Teacher s = teacher[j];
				teacher[j] = teacher[j + 1];
				teacher[j + 1] = s;
			}
		}
	}

	cout << "教师授课评分排序如下：" << endl;
	for (int i = 0; i < t_n; i++)
	{
		teacher[i].show();

	}
	return 1;
}
//课程学分排序
int List::sort_course_grade()
{
	if (s_n <= 0)
	{
		//cout << "没有课程信息，请先录入！" << endl;
		return -1;
	}
	for (int i = 0; i < s_n; i++)
	{
		for (int j = 0; j < s_n - 1 - i; j++)
		{
			Subject s = subject[j];
			subject[j] = subject[j + 1];
			subject[j + 1] = s;
		}
	}
	return 1;
	/*cout << "课程学分排序如下：" << endl;
	for (int i = 0; i < s_n; i++)
	{
		cout << "课程编号：" << subject[i].id;
		cout << "  课程名称：" << subject[i].name;
		cout << "  课程性质：" << subject[i].type;
		cout << "  课程总学时：" << subject[i].hour;
		cout << "  课程学分：" << subject[i].score;
		cout << "  课程时间：" << subject[i].time;
		cout << "  课程选修人数：" << subject[i].num << endl;
	}*/
}
