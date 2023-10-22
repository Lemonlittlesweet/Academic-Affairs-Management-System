#include "core_t.h"
#include "Global.h"
#include <QMessagebox>
#include <QTablewidget>


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
core_t::core_t(QString ID,QWidget *parent, QWidget *top)
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
	QString IDs = "ID:" + ID + "    身份:教师";
	ui.name->setText(IDs);
	for (int i = 0; i < ::list.num; i++)
	{
		if (!strcmp(ID.toUtf8().data(), ::list.s_course[i].stu_id))
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
	for (int i = 0; i < ::list.n; i++)//学生信息输出
	{
		ui.stu_info->insertPlainText("学号：");
		ui.stu_info->insertPlainText(::list.student[i].id);
		ui.stu_info->insertPlainText(" 姓名：");
		ui.stu_info->insertPlainText(::list.student[i].name);
		ui.stu_info->insertPlainText("出生年月：");
		ui.stu_info->insertPlainText(::list.student[i].birthday);
		ui.stu_info->insertPlainText(" 系别：");
		ui.stu_info->insertPlainText(::list.student[i].department);
		ui.stu_info->insertPlainText("联系电话：");
		ui.stu_info->insertPlainText(::list.student[i].phone);
		ui.stu_info->insertPlainText(" 绩点：");
		ui.stu_info->insertPlainText(QString::number(::list.student[i].grade));
		ui.stu_info->insertPlainText("不良记录严重程度(1.一般 2.严重 3.非常严重)：");
		ui.stu_info->insertPlainText(QString::number(::list.student[i].influence));
		ui.stu_info->insertPlainText("\n");
	}
}

core_t::~core_t() {

}
void core_t::exit() {
	this->close();
	top->show();
	::list.save_subject();
	::list.save_student();
	::list.save();
	::list.save_teacher();//不确定是否存在风险的写法
}

void core_t::choclassPress() {
	switch (::list.choose(ID.toUtf8().data(),ui.subid->text().toUtf8().data(), ui.subscore->text().toFloat()))
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

void core_t::exitclassPress() {
	switch (::list.refund(ID.toUtf8().data(), ui.subid_2->text().toUtf8().data()))
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

void core_t::searchSel() {

}
void core_t::bianhao()
{
	int i = ::list.select_subject(1, ui.bianhao->text().toUtf8().data(), ui.bianhao->text().toUtf8().data());
	if (i >= 0) {
		ui.kechengbianhao->setText(::list.subject[i].id);
		ui.kechengmingchen->setText(::list.subject[i].name);
		ui.kechengxingzhi->setText(::list.subject[i].type);
		ui.kechengzongxueshi->setText(QString::number(::list.subject[i].hour));
		ui.kechengxuefen->setText(QString::number(::list.subject[i].score));
		ui.kechengshijian->setText(::list.subject[i].time);
		ui.xuanxiurenshu->setText(QString::number(::list.subject[i].num));
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
void core_t::mingchen()
{
	int i = ::list.select_subject(2, ui.mingchen->text().toUtf8().data(),ui.mingchen->text().toUtf8().data());
	if (i >= 0) {
		ui.kechengbianhao->setText(::list.subject[i].id);
		ui.kechengmingchen->setText(::list.subject[i].name);
		ui.kechengxingzhi->setText(::list.subject[i].type);
		ui.kechengzongxueshi->setText(QString::number(::list.subject[i].hour));
		ui.kechengxuefen->setText(QString::number(::list.subject[i].score));
		ui.kechengshijian->setText(::list.subject[i].time);
		ui.xuanxiurenshu->setText(QString::number(::list.subject[i].num));
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
void core_t::xuefenpaixu() {
	if (::list.sort_course_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有课程信息，请先录入！"), QMessageBox::Ok);
	}
	else {
		ui.xuanke->setText("");
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
		}
	}
}
void core_t::laoshishoukepingfenpaixu() {
	if (::list.sort_teacher_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有教师信息！"), QMessageBox::Ok);
	}
	else {
		ui.shoukepingfen->setText("");
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
	}
}
void core_t::xiugai() {
	int i = ::list.update_subject(ui.kechengbianhao->text().toUtf8().data(),ui.kechengmingchen->text().toUtf8().data(), ui.kechengxingzhi->text().toUtf8().data(), ui.kechengzongxueshi->text().toInt(),ui.kechengxuefen->text().toInt(),ui.kechengshijian->text().toUtf8().data());
	if (i >= 0) {
		QMessageBox::information(this, tr("修改成功"), tr("修改成功！"), QMessageBox::Ok);
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("修改失败"), tr("没有课程信息，请先录入！"), QMessageBox::Ok);
	}
	else if (i == -2) {
		QMessageBox::warning(this, tr("修改失败"), tr("编辑的课程信息不存在！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("修改失败"), tr("未知错误，修改失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core_t::shanchu() {
	int i = ::list.delete_subject(ui.kechengbianhao->text().toUtf8().data());
	if (i >= 0) {
		QMessageBox::information(this, tr("删除成功"), tr("删除课程信息成功！"), QMessageBox::Ok);
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("删除失败"), tr("没有课程信息，请先录入！"), QMessageBox::Ok);
	}
	else if (i == -2) {
		QMessageBox::warning(this, tr("删除失败"), tr("删除的课程信息不存在！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("删除失败"), tr("未知错误，删除失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core_t::add() {
	int i = ::list.update_subject(ui.zjbh->text().toUtf8().data(), ui.zjmc->text().toUtf8().data(), ui.zjxz->text().toUtf8().data(), ui.zjzxs->text().toInt(), ui.zjxf->text().toInt(), ui.zjsj->text().toUtf8().data());
	if (i >= 0) {
		QMessageBox::information(this, tr("增加成功"), tr("添加课程信息成功！"), QMessageBox::Ok);
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("增加失败"), tr("存在该课程编号，请重新输入！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("修改失败"), tr("未知错误，修改失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core_t::xuehaochaxun()
{
	int i = ::list.select_student(1, ui.xhcx->text().toUtf8().data(), ui.xhcx->text().toUtf8().data());
	if (i >= 0) {
		ui.xh->setText(::list.student[i].id);
		ui.xmxg->setText(::list.student[i].name);
		ui.csnyxg->setText(::list.student[i].birthday);
		ui.xbxg->setText(::list.student[i].department);
		ui.lxdhxg->setText(::list.student[i].phone);
		ui.jd->setText(QString::number(::list.student[i].grade));;
		ui.bljlyzcd->setText(QString::number(::list.student[i].influence));
	}

	else if (i == -1) {
		QMessageBox::warning(this, tr("查询失败"), tr("	没有学生信息，请先录入！"), QMessageBox::Ok);
	}
	else if (i == -2) {
		QMessageBox::warning(this, tr("查询失败"), tr("查找的学生信息不存在！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("查询失败"), tr("输入有误！"), QMessageBox::Ok);
	}
}
void core_t::xingmingchaxun()
{
	int i = ::list.select_student(2, ui.xmcx->text().toUtf8().data(), ui.xmcx->text().toUtf8().data());
	if (i >= 0) {
		ui.xh->setText(::list.student[i].id);
		ui.xmxg->setText(::list.student[i].name);
		ui.csnyxg->setText(::list.student[i].birthday);
		ui.xbxg->setText(::list.student[i].department);
		ui.lxdhxg->setText(::list.student[i].phone);
		ui.jd->setText(QString::number(::list.student[i].grade));;
		ui.bljlyzcd->setText(QString::number(::list.student[i].influence));
	}
	else if (i == -2) {
		QMessageBox::warning(this, tr("查询失败"), tr("查找的学生信息不存在！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("查询失败"), tr("输入有误！"), QMessageBox::Ok);
	}
}
void core_t::xueshengxiugai()
{
	int i = ::list.update_student(ui.xh->text().toUtf8().data(),ui.xmxg->text().toUtf8().data(), ui.csnyxg->text().toUtf8().data(), ui.xbxg->text().toUtf8().data(), ui.lxdhxg->text().toUtf8().data());
	if (i >= 0) {
		QMessageBox::information(this, tr("修改成功"), tr("修改成功！"), QMessageBox::Ok);
	}
	if (i == -1) {
		QMessageBox::warning(this, tr("修改失败"), tr("	没有学生信息，请先录入"), QMessageBox::Ok);
	}
	else if (i == -2) {
		QMessageBox::warning(this, tr("修改失败"), tr("编辑的学生信息不存在！"), QMessageBox::Ok);
	}
}
void core_t::cxap() {
	int i = ::list.teacher_c(ui.jiaoshibianhao->text().toUtf8().data(), ui.kechengbianhao_2->text().toUtf8().data());
	if (i >= 0) {
		QMessageBox::information(this, tr("安排成功"), tr("教师教课安排成功！"), QMessageBox::Ok);
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("安排失败"), tr("课程编号不存在，安排失败！"), QMessageBox::Ok);
	}
	else if (i == -2) {
		QMessageBox::warning(this, tr("安排失败"), tr("教师不存在，安排失败！"), QMessageBox::Ok);
	}
}
void core_t::addxuesheng() {
	int i = ::list.add_student(ui.gaixh->text().toUtf8().data(), ui.gaixm->text().toUtf8().data(), ui.gaicsny->text().toUtf8().data(), ui.gaixb->text().toUtf8().data(), ui.gailxdh->text().toUtf8().data(), ui.gaimm->text().toUtf8().data(), ui.gaijd->text().toFloat(), ui.gaibljlyzcd->text().toFloat());
	if(i >= 0){
		QMessageBox::information(this, tr("添加成功"), tr("添加学生信息成功！"), QMessageBox::Ok);
	}
	else if (i == -1) {
			QMessageBox::warning(this, tr("添加失败"), tr("存在该学号，请重新输入！"), QMessageBox::Ok);
	}
	else if (i == -2) {
			QMessageBox::warning(this, tr("添加失败"), tr("输入有误，添加失败！"), QMessageBox::Ok);
	}
	else {
			QMessageBox::warning(this, tr("添加失败"), tr("未知错误，添加失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core_t::deletexuesheng() {
	int i = ::list.delete_student(ui.xh->text().toUtf8().data());
	if (i >= 0) {
		QMessageBox::information(this, tr("删除成功"), tr("删除学生信息成功！"), QMessageBox::Ok);
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("删除失败"), tr("没有学生信息，请先录入！"), QMessageBox::Ok);
	}
	else if (i == -2) {
		QMessageBox::warning(this, tr("删除失败"), tr("删除的学生信息不存在！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("删除失败"), tr("未知错误，删除失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core_t::jidianpaixu() {
	int i = ::list.sort_student_grade();
	if (i > 0) {
		ui.stu_info->setText("");
		for (int i = 0; i < ::list.n; i++)//学生信息输出
		{
			ui.stu_info->insertPlainText("学号：");
			ui.stu_info->insertPlainText(::list.student[i].id);
			ui.stu_info->insertPlainText(" 姓名：");
			ui.stu_info->insertPlainText(::list.student[i].name);
			ui.stu_info->insertPlainText("出生年月：");
			ui.stu_info->insertPlainText(::list.student[i].birthday);
			ui.stu_info->insertPlainText(" 系别：");
			ui.stu_info->insertPlainText(::list.student[i].department);
			ui.stu_info->insertPlainText("联系电话：");
			ui.stu_info->insertPlainText(::list.student[i].phone);
			ui.stu_info->insertPlainText(" 绩点：");
			ui.stu_info->insertPlainText(QString::number(::list.student[i].grade));
			ui.stu_info->insertPlainText("不良记录严重程度(1.一般 2.严重 3.非常严重)：");
			ui.stu_info->insertPlainText(QString::number(::list.student[i].influence));
			ui.stu_info->insertPlainText("\n");
		}
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("排序失败"), tr("没有学生信息，请先录入！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("排序失败"), tr("未知错误，排序失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core_t::buliangjilupaixu() {
	int i = ::list.sort_student_infuluce();
	if (i > 0) {
		ui.stu_info->setText("");
		for (int i = 0; i < ::list.n; i++)//学生信息输出
		{
			ui.stu_info->insertPlainText("学号：");
			ui.stu_info->insertPlainText(::list.student[i].id);
			ui.stu_info->insertPlainText(" 姓名：");
			ui.stu_info->insertPlainText(::list.student[i].name);
			ui.stu_info->insertPlainText("出生年月：");
			ui.stu_info->insertPlainText(::list.student[i].birthday);
			ui.stu_info->insertPlainText(" 系别：");
			ui.stu_info->insertPlainText(::list.student[i].department);
			ui.stu_info->insertPlainText("联系电话：");
			ui.stu_info->insertPlainText(::list.student[i].phone);
			ui.stu_info->insertPlainText(" 绩点：");
			ui.stu_info->insertPlainText(QString::number(::list.student[i].grade));
			ui.stu_info->insertPlainText("不良记录严重程度(1.一般 2.严重 3.非常严重)：");
			ui.stu_info->insertPlainText(QString::number(::list.student[i].influence));
			ui.stu_info->insertPlainText("\n");
		}
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("排序失败"), tr("没有学生信息，请先录入！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("排序失败"), tr("未知错误，排序失败！请联系管理员！"), QMessageBox::Ok);
	}
}