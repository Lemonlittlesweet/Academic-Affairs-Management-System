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


	void show()
	{
		cout << "教师编号：" << id << "  "
			<< "姓名：" << name << "  "
			<< "密码：" << pwd << "  "
			<< "授课评分：" << grade << endl;
	}
};

//存放教师教课信息
class TeacherCourse
{
public:
	char teacher_id[20];//教师号
	char sub_id[20];//课程编号
};
#endif
