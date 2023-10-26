#ifndef _TEACHER_H
#define _TEACHER_H
using namespace std;
//教师信息
class Teacher
{
public:
	char id[20];//教师编号
	char name[20];//姓名
	char pwd[20];//密码
	float grade;//授课评分
	int flag;

	void show()
	{
		/*cout << "教师编号：" << id << "  "
			<< "姓名：" << name << "  "
			<< "密码：" << pwd << "  "
			<< "授课评分：" << grade << endl;*/
	}
	Teacher()
	{
		flag = 0;
	}
};

//存放教师教课信息
class TeacherCourse
{
public:
	char teacher_id[20];//教师号
	char sub_id[20];//课程编号
};
class TeacherHomework
{
public:
	char teacher_id[20];//教师号
	char subject_id[20];//课程号
	char content[30];//作业的内容

};
//老师发送消息
class TeacherMessage
{
public:
	char teacher_id[20];
	char content[100];
	char sub_id[20];
	string time;
};	
//老师设置签到
class sign_in
{
public:
	int time_start_hour;
	int time_start_min;
	int time_end_hour;
	int time_end_min;
	char tea_id[20];
	char sub_id[20];
};
#endif
