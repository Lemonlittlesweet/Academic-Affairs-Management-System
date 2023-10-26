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
#include"time.h"
using namespace std;

//选课
int List::choose(char stu_id[20],char sub_id[20])
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
			for (int j = 0; j < s_n; j++)
			{
				if (!strcmp(sub_id, subject[j].id))
				{
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
										//cout << "你已选过该课程！请勿再次选课！";
										return -1;
									}
								}
							}
						}
					}
						temp_++;
						strcpy(s_course[num].stu_id, stu_id);
						strcpy(s_course[num].sub_id, sub_id);
						s_course[num].score = -1;
						//cout << s_course[num].score << endl;
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
			if (strcmp(sub_id, s_course[i].sub_id)!=0 )
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
		/*cout << "学号：" << s_course[i].stu_id << "  ";
		cout << "选课编号：" << s_course[i].sub_id << "  ";
		cout << "成绩：" << s_course[i].score << endl;*/
	}

}


//学生成绩查询 暂时做不了
void List::query_course_socre()

{
	if (num == 0)
	{
		//cout << "没有选课信息！" << endl;
		return;
	}

	char id[20];
	//cout << "请输入查询的学号：" << endl;
	cin >> id;

	for (int i = 0; i < num; i++)
	{
		if (!strcmp(id, s_course[i].stu_id))
		{
			/*cout << "学号：" << s_course[i].stu_id << "  ";
			cout << "选课编号：" << s_course[i].sub_id << "  ";
			cout << "成绩：" << s_course[i].score << endl;*/
		}

	}

}



//教师授课评分排序
int List::sort_teacher_grade()
{
	if (t_n <= 0)
	{
		//cout << "没有教师信息！" << endl;
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

	//cout << "教师授课评分排序如下：" << endl;
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
			if (subject[j].score > subject[j + 1].score) {
				Subject s = subject[j];
				subject[j] = subject[j + 1];
				subject[j + 1] = s;
			}
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
//查询作业
int List::stu_show_homework(char id[20])
{
	int x = 0;
	for (int i = 0; i < num; i++)//先遍历选课信息，匹配当前学号选了什么课程
	{
		//cout << s_course[i].stu_id << endl;
		if (!strcmp(id, s_course[i].stu_id))//表示我的选课表里有这个学生的id信息
		{
			x = 1;
			//cout << x << endl;
			for (int j = 0; j < con_n; j++)//在确定好了所在的那一行的情况下，老师布置的作业表中有无该课程
			{
				if (!strcmp(s_course[i].sub_id, content[j].subject_id))//表示有这门课布置了作业
				{
					return j;
					for (int k = 0; k < t_n; k++)//查询content中的老师编号对应的老师名称
					{
						if (!strcmp(content[j].teacher_id, teacher[k].id))
						{
							//return j;
							/*cout << "课程号：" << content[j].subject_id << endl;
							cout << "授课老师：" << teacher[k].name << endl;
							cout << "作业内容：" << content[j].content << endl;*/
						}
					}
				}
			}
		}

	}
	if (x == 0) {
		//cout << "您目前暂无选课信息" << endl;
		return -1;
	}
}


//学生提交作业
int List::submit(char stuid[20],char subid[20],char neirong[20])
{
	strcpy(subwork[sw_n].stu_id, stuid);
	subwork[sw_n].grade = -1;
	strcpy(subwork[sw_n].sub_id,subid);
	strcpy(subwork[sw_n].content, neirong);
	/*cout << "请输入你要提交的作业的课程号：";
	cin >> subwork[sw_n].sub_id;
	cout << "请输入你的答案：";
	cin >> subwork[sw_n].content;*/
	sw_n++;
	return 1;
}

//弃用 给老师打分
int List::scoring(int k,float grade)
{
	teacher[k].grade = grade;
	return 1;
	/*	int flag = 0;
	for (int i = 0; i < num; i++)//在表里找到学生选的课程
	{
		if (!strcmp(all_id, s_course[i].stu_id))
		{
			flag = 1;
			for (int j = 0; j < tc_n; j++)//在老师授课表里找到授课的老师
			{
				if (!strcmp(s_course[i].sub_id, t_course[j].sub_id))
				{
					for (int k = 0; k < t_n; k++)
					{
						if (!strcmp(t_course[j].teacher_id, teacher[k].id))//在老师数组中找到对应的老师
						{
							if(teacher[k].flag==0 && s_course[i].flag==0)
							{
								cout << "你给" << teacher[k].name << "的打分是：";
								cin >> teacher[k].grade;
								teacher[k].flag = 1;
								s_course[i].flag = 1;
							}

						}
					}
				}
			}
		}
	}
	for(int i=0;i< t_n;i++)
		teacher[i].flag = 0;
	for(int i = 0; i < num; i++)
		s_course[i].flag = 0;
	if (flag == 0)
		cout << "你并没有选课，无法给老师打分！请在选课后重试！" << endl;
	else
		cout << "你已经对所有老师的授课质量进行了评分！" << endl;*/
}
//签到
int List::sign_in_s(char all_id[20],char sub_id[20], char tea_id[20])
{
	/*cout << "请输入你要签到的课程号：";
	char sub_id[20];
	cin >> sub_id;
	cout << "请输入你要签到的教师号:";
	char tea_id[20];
	cin >> tea_id;*/
	for (int i = 0; i < num; i++)
	{
		if (!strcmp(s_course[i].stu_id, all_id) && !strcmp(s_course[i].sub_id, sub_id))
		{
			for (int j = 0; j < si_n; j++)
			{
				if (!strcmp(s_course[i].sub_id, sign_in[j].sub_id) && !strcmp(tea_id, sign_in[j].tea_id))
				{
					time_t now = time(0);
					tm* ltm = localtime(&now);
					int current_hour = ltm->tm_hour;
					int current_minute = ltm->tm_min;

					if (isInTimeRange(current_hour, current_minute, sign_in[j].time_start_hour, sign_in[j].time_start_min, sign_in[j].time_end_hour, sign_in[j].time_end_min))
					{
						strcpy_s(sign_in_stu[sis_n].stu_id, all_id);
						strcpy_s(sign_in_stu[sis_n].sub_id, sign_in[j].sub_id);
						sign_in_stu[sis_n].state = true;
						//cout << "当前时间在指定时间范围内" << endl;
						sis_n++;
						return 1;
					}
					else
					{
						//cout << "当前时间不在指定时间范围内" << endl;
						return 0;
					}
					//return;
				}
			}
		}
	}
	//cout << "未检测到有签到的课程号" << endl;
	return -1;
}