#include "testdemo.h"
#include <QtWidgets/QApplication>
#include "Global.h"

int main(int argc, char *argv[])
{
	::list.read_subject();
	::list.read_student();
	::list.read();
	::list.read_teacher();//读取文件
	::list.read_content();
	::list.read_message();
	::list.read_subwork();
	::list.read_teacher_course();
    QApplication a(argc, argv);
    testdemo w;
    w.show();
    return a.exec();
	
}
