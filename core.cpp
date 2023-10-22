#include "core.h"
#include "Global.h"
#include <QTableWidget>
#include <QMessagebox>


/*bool sortUpDown = true;//设定排序
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
}*/
core::core(QString ID,QWidget *parent, QWidget *top)
	:ID(ID), QMainWindow(parent), top(top)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/testdemo/image/shulogo.png"));//设定图标
	ui.subscore->setValidator(new QRegExpValidator(QRegExp("^([0-9]|[1-9][0-9]|100)$")));
	ui.subid->setValidator(new QRegExpValidator(QRegExp("^\d+$")));
	ui.subid_2->setValidator(new QRegExpValidator(QRegExp("^\d+$")));


	for (int i = 0; i < ::list.t_n; i++)
	{
		ui.shoukepingfen->insertPlainText("教师编号：");
		ui.shoukepingfen->insertPlainText(::list.teacher[i].id);
		ui.shoukepingfen->insertPlainText(" 姓名：");
		ui.shoukepingfen->insertPlainText(::list.teacher[i].name);
		ui.shoukepingfen->insertPlainText("授课评分：");
		ui.shoukepingfen->insertPlainText(QString::number(::list.teacher[i].grade));
		ui.shoukepingfen->insertPlainText("\n");
	}
	/*QTableWidgetItem *headerItem;
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
	*/
	QString IDs = "ID:" + ID + "    身份:学生";
	ui.name->setText(IDs);
	for (int i = 0; i < ::list.num; i++)
	{//和传进来id作比较，if
		if (!strcmp(ID.toLatin1().data(), ::list.s_course[i].stu_id))
		{
			ui.tuike->insertPlainText("选课编号：");
			ui.tuike->insertPlainText(::list.s_course[i].sub_id);
			ui.tuike->insertPlainText( " 成绩：");
			ui.tuike->insertPlainText(QString::number(::list.s_course[i].score));
			ui.tuike->insertPlainText("\n");
		}
		/*cout << "学号：" << ::list.s_course[i].stu_id << "  ";
		cout << "选课编号：" << ::list.s_course[i].sub_id << "  ";
		cout << "成绩：" << ::list.s_course[i].score << endl;*/
	}
	for (int i = 0; i < ::list.s_n; i++)
	{
		ui.xuanke->insertPlainText("课程编号：");
		ui.xuanke->insertPlainText(::list.subject[i].id);
		ui.xuanke->insertPlainText(" 课程名称：");
		ui.xuanke->insertPlainText(::list.subject[i].name);
		ui.xuanke->insertPlainText("课程性质：");
		ui.xuanke->insertPlainText(::list.subject[i].type);
		ui.xuanke->insertPlainText(" 课程总学时：");
		ui.xuanke->insertPlainText(QString::number(::list.subject[i].hour));
		ui.xuanke->insertPlainText("课程学分：");
		ui.xuanke->insertPlainText(QString::number(::list.subject[i].score));
		ui.xuanke->insertPlainText(" 课程时间：");
		ui.xuanke->insertPlainText(::list.subject[i].time);
		ui.xuanke->insertPlainText("课程选修人数：");
		ui.xuanke->insertPlainText(QString::number(::list.subject[i].num));
		ui.xuanke->insertPlainText("\n");
		/*cout << "课程编号：" << subject[i].id;
		cout << "  课程名称：" << subject[i].name;
		cout << "  课程性质：" << subject[i].type;
		cout << "  课程总学时：" << subject[i].hour;
		cout << "  课程学分：" << subject[i].score;
		cout << "  课程时间：" << subject[i].time;
		cout << "  课程选修人数：" << subject[i].num << endl;*/
	}

}

core::~core() {

}
void core::exit() {
	this->close();
	top->show();
	::list.save_subject();
	::list.save_student();
	::list.save();
	::list.save_teacher();//不确定是否存在风险的写法
}

void core::choclassPress() {
	switch (::list.choose(ID.toLatin1().data(),ui.subid->text().toLatin1().data(), ui.subscore->text().toFloat()))
	{
		case 1:
			QMessageBox::information(this, tr("选课成功"), tr("您已成功选课！"), QMessageBox::Ok);
			break;
		case -1:
			QMessageBox::warning(this, tr("选课失败"), tr("选课时间冲突，选课失败！"), QMessageBox::Ok);
			break;
		case -2:
			QMessageBox::warning(this, tr("选课失败"), tr("课程编号不存在，选课失败！"), QMessageBox::Ok);
			break;
		default:
			QMessageBox::warning(this, tr("选课失败"), tr("未知错误，选课失败！请联系管理员！"), QMessageBox::Ok);
	}
}

void core::exitclassPress() {
	switch (::list.refund(ID.toLatin1().data(), ui.subid_2->text().toLatin1().data()))
	{
	case 1:
		QMessageBox::information(this, tr("退课成功"), tr("您已成功退课！"), QMessageBox::Ok);
		break;
	case -1:
		QMessageBox::warning(this, tr("退课失败"), tr("没有选修该课，退课失败！"), QMessageBox::Ok);
		break;
	case -2:
		QMessageBox::warning(this, tr("退课失败"), tr("课程编号不存在，退课失败！"), QMessageBox::Ok);
		break;
	default:
		QMessageBox::warning(this, tr("退课失败"), tr("未知错误，退课失败！请联系管理员！"), QMessageBox::Ok);
	}
}

void core::searchSel() {

}
void core::bianhao()
{
	int i = ::list.select_subject(1, ui.bianhao->text().toLatin1().data(), ui.bianhao->text().toLatin1().data());
	if (i >= 0) {
		ui.chake->insertPlainText("课程编号：");
		ui.chake->insertPlainText(::list.subject[i].id);
		ui.chake->insertPlainText(" 课程名称：");
		ui.chake->insertPlainText(::list.subject[i].name);
		ui.chake->insertPlainText("课程性质：");
		ui.chake->insertPlainText(::list.subject[i].type);
		ui.chake->insertPlainText(" 课程总学时：");
		ui.chake->insertPlainText(QString::number(::list.subject[i].hour));
		ui.chake->insertPlainText("课程学分：");
		ui.chake->insertPlainText(QString::number(::list.subject[i].hour));
		ui.chake->insertPlainText("课程学分：");
		ui.chake->insertPlainText(QString::number(::list.subject[i].score));
		ui.chake->insertPlainText(" 课程时间：");
		ui.chake->insertPlainText(::list.subject[i].time);
		ui.chake->insertPlainText("课程选修人数：");
		ui.chake->insertPlainText(QString::number(::list.subject[i].num));
		ui.chake->insertPlainText("\n");
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有课程信息，请先录入!"), QMessageBox::Ok);
	}
	else if(i== -2){
		QMessageBox::warning(this, tr("查询失败"), tr("课程信息不存在！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("查询失败"), tr("未知错误，查询失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core::mingchen()
{
	int i = ::list.select_subject(2, ui.mingchen->text().toLatin1().data(),ui.mingchen->text().toLatin1().data());
	if (i >= 0) {
		ui.chake->insertPlainText("课程编号：");
		ui.chake->insertPlainText(::list.subject[i].id);
		ui.chake->insertPlainText(" 课程名称：");
		ui.chake->insertPlainText(::list.subject[i].name);
		ui.chake->insertPlainText("课程性质：");
		ui.chake->insertPlainText(::list.subject[i].type);
		ui.chake->insertPlainText(" 课程总学时：");
		ui.chake->insertPlainText(QString::number(::list.subject[i].hour));
		ui.chake->insertPlainText("课程学分：");
		ui.chake->insertPlainText(QString::number(::list.subject[i].hour));
		ui.chake->insertPlainText("课程学分：");
		ui.chake->insertPlainText(QString::number(::list.subject[i].score));
		ui.chake->insertPlainText(" 课程时间：");
		ui.chake->insertPlainText(::list.subject[i].time);
		ui.chake->insertPlainText("课程选修人数：");
		ui.chake->insertPlainText(QString::number(::list.subject[i].num));
		ui.chake->insertPlainText("\n");
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有课程信息，请先录入!"), QMessageBox::Ok);
	}
	else if (i == -2) {
		QMessageBox::warning(this, tr("查询失败"), tr("课程信息不存在！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("查询失败"), tr("未知错误，查询失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core::xuefenpaixu() {
	if (::list.sort_course_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有课程信息，请先录入！"), QMessageBox::Ok);
	}
	else for (int i = 0; i < ::list.s_n; i++)
	{
		ui.xuanke->insertPlainText("课程编号：");
		ui.xuanke->insertPlainText(::list.subject[i].id);
		ui.xuanke->insertPlainText(" 课程名称：");
		ui.xuanke->insertPlainText(::list.subject[i].name);
		ui.xuanke->insertPlainText("课程性质：");
		ui.xuanke->insertPlainText(::list.subject[i].type);
		ui.xuanke->insertPlainText(" 课程总学时：");
		ui.xuanke->insertPlainText(QString::number(::list.subject[i].hour));
		ui.xuanke->insertPlainText("课程学分：");
		ui.xuanke->insertPlainText(QString::number(::list.subject[i].score));
		ui.xuanke->insertPlainText(" 课程时间：");
		ui.xuanke->insertPlainText(::list.subject[i].time);
		ui.xuanke->insertPlainText("课程选修人数：");
		ui.xuanke->insertPlainText(QString::number(::list.subject[i].num));
		ui.xuanke->insertPlainText("\n");
	}
}
void core::laoshishoukepingfenpaixu() {
	if (::list.sort_teacher_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有教师信息！"), QMessageBox::Ok);
	}
	else for (int i = 0; i < ::list.t_n; i++)
	{
		ui.shoukepingfen->insertPlainText("教师编号：");
		ui.shoukepingfen->insertPlainText(::list.teacher[i].id);
		ui.shoukepingfen->insertPlainText(" 姓名：");
		ui.shoukepingfen->insertPlainText(::list.teacher[i].name);
		ui.shoukepingfen->insertPlainText("授课评分：");
		ui.shoukepingfen->insertPlainText(QString::number(::list.teacher[i].grade));
		ui.shoukepingfen->insertPlainText("\n");
	}
}
