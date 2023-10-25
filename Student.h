#ifndef _STUDENT_H
#define _STUDENT_H
//学生基本信息
class base_student
{
public:
	char id[20];//学号
	char name[20];//姓名

};

//存放学生信息
class Student :public base_student
{
public:
	char birthday[20];//出生年月
	char department[20];//系别
	char phone[20];//联系电话
	char pwd[20];//密码
	float grade;//绩点
	float influence;//不良记录严重程度(1.一般 2.严重 3.非常严重)
	char awards[20];//奖项
	char competition[20];//比赛
	char communication[20];//学术交流情况

};

//存放选课信息
class SelectCourse
{
public:
	char stu_id[20];//学号
	char sub_id[20];//课程编号
	float score;//成绩
	int flag;
	SelectCourse()
	{
		flag = 0;
	}
};


class submitHomework
{
public:
	char stu_id[20];//学号
	char sub_id[20];//课程编号
	char content[20];//提交作业的内容
	float grade;//评分
};
//学生签到
class sign_in_stu
{
public:
	char stu_id[20];
	char sub_id[20];
	bool state;
	sign_in_stu()
	{
		state = 0;
	}
};
#endif