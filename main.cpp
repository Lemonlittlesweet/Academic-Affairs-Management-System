#include "testdemo.h"
#include <QtWidgets/QApplication>
#include "Global.h"

int main(int argc, char *argv[])
{
	::list.read_subject();
	::list.read_student();
	::list.read();
	::list.read_teacher();//读取文件
    QApplication a(argc, argv);
    testdemo w;
    w.show();
    return a.exec();
	
}
