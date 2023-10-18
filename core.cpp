#include "core.h"
#include "Global.h"
#include <QTableWidget>


bool sortUpDown = true;//设定排序
void core::sortTableByCol(int col)
{
	
	if (sortUpDown)		//sortUpDown为自定义的一个bool变量，表示升序还是降序
	{
		ui.tableWidget->sortItems(col, Qt::AscendingOrder);
		sortUpDown = false;
	}
	else
	{
		ui.tableWidget->sortItems(col, Qt::DescendingOrder);
		sortUpDown = true;
	}
}
core::core(QString ID, QWidget *parent, QWidget *top)
	:ID(ID),QMainWindow(parent),top(top)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/testdemo/image/shulogo.png"));//设定图标

	QTableWidgetItem *headerItem;
	QStringList headerText;
	headerText <<"课程号"<< "课程" << "老师" << "上课地点" << "上课时间" ;//设定表头
	ui.tableWidget->setColumnCount(headerText.count());
	for (int i = 0; i < ui.tableWidget->columnCount(); i++) {
		headerItem = new QTableWidgetItem(headerText.at(i));
		QFont font = headerItem->font();
		font.setBold(false);     //设置字体加粗
		font.setPointSize(12);  //设置字体字号
		headerItem->setTextColor(Qt::black); //设置颜色
		headerItem->setFont(font);
		ui.tableWidget->setHorizontalHeaderItem(i, headerItem);
	}//设定表格格式
	//一个读取文件的函数，返回一个头指针
	int j = 0;//test用，应使用上述头指针
	while (j < 11) {//test生成内容使用，未完成

		j++;
	}


	ui.tableWidget->horizontalHeader()->setSortIndicatorShown(true);		//显示排序图标（默认为上下箭头）
	connect(ui.tableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(sortTableByCol(int)));

	QString IDs = "ID:" + ID + "    身份:学生";
	ui.name->setText(IDs);
}

core::~core()
{}

void core::exit() {
	this->close();
	top->show();
	::list.save_subject();
	::list.save_student();
	::list.save();
	::list.save_teacher();//不确定是否存在风险的写法
}