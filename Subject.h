#ifndef _SUBJECT_H
#define _SUBJECT_H

//课程基本信息
class base_subject
{
public:
	char id[20];//课程编号
	char name[20];//课程名称
	char type[20];//课程性质
};

//存放课程信息
class Subject :public base_subject
{
public:
	int hour;//总学时
	int score;//学分
	char time[20];//课程时间
	int num;//选修人数
};

#endif
