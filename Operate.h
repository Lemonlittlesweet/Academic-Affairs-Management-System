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
	void add_subject();//增加课程信息
	void select_subject();//查找课程信息
	void delete_subject();//删除课程信息
	void update_subject();//修改课程信息
	void show_subject();//浏览课程信息
	void save_subject();//保存课程信息
	void read_subject();//读取课程信息



	void add_student();//增加学生信息
	void select_student();//查找学生信息
	void delete_student();//删除学生信息
	void update_student();//修改学生信息
	void show_student();//浏览学生信息
	void save_student();//保存学生信息
	void read_student();//读取学生信息

	//教师注册
	int regist_teacher(char[20], char[20], char[20], float);
	//登录
	int login_teacher(char[20],char[20]);
	int login_student(char[20], char[20]);

	//教师教授课程安排
	void teacher_c();

	//学生绩点排序
	void sort_student_grade();
	//学生不良记录严重程度排序
	void sort_student_infuluce();
	//教师授课评分排序
	void sort_teacher_grade();
	//课程学分排序
	void sort_course_grade();

	//学生成绩查询
	void query_course_socre();



	void choose();//选课
	void refund();//退课
	void show();//查看选课信息
	void save();//保存选课信息
	void read();//读取选课信息

	void save_teacher();//保存老师信息
	void read_teacher();//读取老师信息



};

#endif