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
#include "Interface.h"
#include "Global.h"
using namespace std;

List list;



//主函数
/*int bmain()
{

	/*List list;

	list.read_subject();
	list.read_student();
	list.read();
	list.read_teacher();

	while (1)
	{

	first:menu();
		int chioce;
		//cout << "请输入选择：" << endl;
		cin >> chioce;
		switch (chioce)
		{
		case 1:
		{
			//int index = list.login_teacher();临时重写int index 此为教师
			int index;
			if (index != -1)
			{
				while (1)
				{
					student_menu();
					int admin_chioce;
					//cout << "请输入你的选择：";
					cin >> admin_chioce;
					switch (admin_chioce)
					{
					/*case 1:
						list.add_student();
						break;*/
					/*case 2:
						list.select_student();
						break;*/
					/*case 3:
						list.delete_student();
						break;*/
					/*case 4:
						list.update_student();
						break;
					case 5:
						list.show_student();
						break;
					case 6:
						list.sort_student_grade();
						break;
					case 7:
						list.sort_student_infuluce();
						break;
					/*case 8:
						list.add_subject();
						break;*/
					/*case 9:
						list.select_subject();
						break;*/
					/*case 10:
						list.delete_subject();
						break;*/
					/*case 11:
						list.update_subject();
						break;
					case 12:
						list.show_subject();
						break;
					/*case 13:
						list.teacher_c();
						break;
					case 14:
						list.query_course_socre();
						break;
					case 0:
						goto first;
						break;
					default:
						cout << "输入有误！" << endl;
					}
				}
			}

		}
		break;
		case 2:
		{
			//int index = list.login_student();临时重写int index 此为学生
			int index;
			if (index != -1)
			{
				while (1)
				{
					select_menu();
					int student_chioce;
					cout << "请输入你的选择：";
					cin >> student_chioce;
					switch (student_chioce)
					{
					case 1:
						//list.choose();
						break;
					case 2:
						//list.refund();
						break;
					case 3:
						//list.show();
						break;

					case 4:
						list.sort_teacher_grade();
						break;
					case 5:
						list.sort_course_grade();
						break;

					case 0:
						goto first;
						break;
					default:
						cout << "输入有误！" << endl;
					}
				}
			}

		}
		break;
		/*case 3:
			list.regist_teacher();
			break;*/
		/*case 0:
			list.save_subject();
			list.save_student();
			list.save();
			list.save_teacher();
			cout << "谢谢使用！" << endl;

			return 0;
		default:
			cout << "输入有误，请重新输入！" << endl;
			break;
		}
	}
	return 0;
}*/