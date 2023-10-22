#include "Student.h"
#include "Subject.h"
#include "Teacher.h"
#ifndef _OPERATE_H
#define _OPERATE_H
#define MAX 1000
class List
{
public:
	Subject subject[MAX];
	int s_n;//数量
	Student student[MAX];
	int n;//数量
	SelectCourse s_course[MAX];
	int num;

	Teacher teacher[MAX];
	int t_n;
	TeacherCourse t_course[MAX];
	int tc_n;


public:
	List()
	{
		s_n = 0;
		n = 0;
		num = 0;

		t_n = 0;
		tc_n = 0;
	}
	int add_subject(char id[20], char name[20], char type[20], int hour, int score, char time[20]);//增加课程信息
	int select_subject(int,char[20],char[20]);//查找课程信息
	int delete_subject(char id[20]);//删除课程信息
	int update_subject(char id[20], char name[20], char type[20], int hour, int score, char time[20]);//修改课程信息
	void show_subject();//浏览课程信息
	void save_subject();//保存课程信息
	void read_subject();//读取课程信息



	int add_student(char id[20], char name[20], char birthday[20], char department[20], char phone[20], char pwd[20], float,float);//增加学生信息
	int select_student(int chioce, char id[20], char name[20]);//查找学生信息
	int delete_student(char id[20]);//删除学生信息
	int update_student(char id[20], char name[20], char birthday[20], char department[20], char phone[20]);//修改学生信息
	int show_student();//浏览学生信息
	void save_student();//保存学生信息
	void read_student();//读取学生信息

	//教师注册
	int regist_teacher(char[], char[], char[], float);
	//登录
	int login_teacher(char[],char[]);
	int login_student(char[], char[]);

	//教师教授课程安排
	int teacher_c(char tea_id[20], char sub_id[20]);

	//学生绩点排序
	int sort_student_grade();
	//学生不良记录严重程度排序
	int sort_student_infuluce();
	//教师授课评分排序
	int sort_teacher_grade();
	//课程学分排序
	int sort_course_grade();

	//学生成绩查询
	void query_course_socre();



	int choose(char[20], char[20],float);//选课
	int refund(char[20], char[20]);//退课
	int show(char[20]);//查看选课信息
	void save();//保存选课信息
	void read();//读取选课信息

	void save_teacher();//保存老师信息
	void read_teacher();//读取老师信息



};

#endif