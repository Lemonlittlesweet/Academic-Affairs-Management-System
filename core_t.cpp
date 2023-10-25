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
	this->setWindowTitle("教师主界面");

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
			ui.tuike->insertPlainText("学号：");
			ui.tuike->insertPlainText(::list.s_course[i].stu_id);
			ui.tuike->insertPlainText("选课编号：");
			ui.tuike->insertPlainText(::list.s_course[i].sub_id);
			ui.tuike->insertPlainText( " 成绩：");
			if (::list.s_course[i].score == -1) {
				ui.tuike->insertPlainText(" 无");
			}
			else {
				ui.tuike->insertPlainText(QString::number(::list.s_course[i].score));
			}
			ui.tuike->insertPlainText("\n");
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
		ui.stu_info->insertPlainText("不良记录严重程度：");
		if (::list.student[i].influence == 1)
			ui.stu_info->insertPlainText("无");
		else if (::list.student[i].influence == 2)
			ui.stu_info->insertPlainText("较轻");
		else
			ui.stu_info->insertPlainText("严重");
		ui.stu_info->insertPlainText("奖项：");
		ui.stu_info->insertPlainText(::list.student[i].awards);
		ui.stu_info->insertPlainText("竞赛：");
		ui.stu_info->insertPlainText(::list.student[i].competition);
		ui.stu_info->insertPlainText("学术交流情况：");
		ui.stu_info->insertPlainText(::list.student[i].communication);
		ui.stu_info->insertPlainText("\n");
	}
}

core_t::~core_t() {

}
void core_t::exit() {
	this->close();
	top->show();
	
}

void core_t::searchSel() {
	ui.tuike->setText("");
	for (int i = 0; i < ::list.num; i++)
	{
		ui.tuike->insertPlainText("学号：");
		ui.tuike->insertPlainText(::list.s_course[i].stu_id);
		ui.tuike->insertPlainText("选课编号：");
		ui.tuike->insertPlainText(::list.s_course[i].sub_id);
		ui.tuike->insertPlainText(" 成绩：");
		if (::list.s_course[i].score == -1) {
			ui.tuike->insertPlainText(" 无");
		}
		else {
			ui.tuike->insertPlainText(QString::number(::list.s_course[i].score));
		}
		ui.tuike->insertPlainText("\n");
	}
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
void core_t::xfjxpf() {
	if (::list.sort_course_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有课程信息，请先录入！"), QMessageBox::Ok);
	}
	else {
		ui.xuanke->setText("");
		for (int i = ::list.s_n - 1; i >= 0; i--)
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
void core_t::lsskpxjxpx() {
	if (::list.sort_teacher_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有教师信息！"), QMessageBox::Ok);
	}
	else {
		ui.shoukepingfen->setText("");
		for (int i = ::list.t_n-1; i >= 0; i--)
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
	int j = ::list.add_subject(ui.zjbh->text().toUtf8().data(), ui.zjmc->text().toUtf8().data(), ui.zjxz->text().toUtf8().data(), ui.zjzxs->text().toInt(), ui.zjxf->text().toInt(), ui.zjsj->text().toUtf8().data());
	if (!(ui.zjbh->text().isEmpty() || ui.zjmc->text().isEmpty()||ui.zjzxs->text().isEmpty() || ui.zjxf->text().isEmpty() || ui.zjsj->text().isEmpty())) {
		if (j >= 0) {
			QMessageBox::information(this, tr("增加成功"), tr("添加课程信息成功！"), QMessageBox::Ok);
		}
		else if (j == -1) {
			QMessageBox::warning(this, tr("增加失败"), tr("存在该课程编号，请重新输入！"), QMessageBox::Ok);
		}
		else {
			QMessageBox::warning(this, tr("修改失败"), tr("未知错误，修改失败！请联系管理员！"), QMessageBox::Ok);
		}
	}
	else {
		QMessageBox::warning(this, tr("增加失败"), tr("有未填写信息！"), QMessageBox::Ok);
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
		ui.jd->setText(QString::number(::list.student[i].grade));
		if (::list.student[i].influence == 1)
			ui.bljlyzcd->setText("无");
		else if (::list.student[i].influence == 2)
			ui.bljlyzcd->setText("较轻");
		else
			ui.bljlyzcd->setText("严重");
		ui.awa->setText(::list.student[i].awards);
		ui.comp->setText(::list.student[i].competition);
		ui.commu->setText(::list.student[i].communication);
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
		ui.jd->setText(QString::number(::list.student[i].grade));
		if (::list.student[i].influence == 1)
			ui.bljlyzcd->setText("无");
		else if (::list.student[i].influence == 2)
			ui.bljlyzcd->setText("较轻");
		else
			ui.bljlyzcd->setText("严重");
		ui.awa->setText(::list.student[i].awards);
		ui.comp->setText(::list.student[i].competition);
		ui.commu->setText(::list.student[i].communication);
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
	int i = ::list.update_student(ui.xh->text().toUtf8().data(),ui.xmxg->text().toUtf8().data(), ui.csnyxg->text().toUtf8().data(), ui.xbxg->text().toUtf8().data(), ui.lxdhxg->text().toUtf8().data(), ui.awa->text().toUtf8().data(), ui.comp->text().toUtf8().data(),ui.commu->text().toUtf8().data());
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
	int i = ::list.teacher_c(ID.toUtf8().data(), ui.kechengbianhao_2->text().toUtf8().data());
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
void core_t::aptea() {
	int flag = 0;
	ui.aptea->setText("");
	for (int i = 0; i < ::list.tc_n; i++)
	{
		if (!strcmp(ID.toUtf8().data(), ::list.t_course[i].teacher_id))
		{
			flag = 1;
			for (int j = 0; j < ::list.s_n; j++)
			{
				if (!strcmp(::list.t_course[i].sub_id, ::list.subject[j].id))
				{
					ui.aptea->insertPlainText("课程编号：");
					ui.aptea->insertPlainText(::list.subject[j].id);
					ui.aptea->insertPlainText("课程名称：");
					ui.aptea->insertPlainText(::list.subject[j].name);
					ui.aptea->insertPlainText("课程性质：");
					ui.aptea->insertPlainText(::list.subject[j].type);
					ui.aptea->insertPlainText("课程总学时：");
					ui.aptea->insertPlainText(QString::number(::list.subject[j].hour));
					ui.aptea->insertPlainText("课程学分：");
					ui.aptea->insertPlainText(QString::number(::list.subject[j].score));
					ui.aptea->insertPlainText("课程时间：");
					ui.aptea->insertPlainText(::list.subject[j].time);
					ui.aptea->insertPlainText("课程选修人数：");
					ui.aptea->insertPlainText(QString::number(::list.subject[j].num));
					/*cout << "  课程编号：" << subject[j].id;
					cout << "  课程名称：" << subject[j].name;
					cout << "  课程性质：" << subject[j].type;
					cout << "  课程总学时：" << subject[j].hour;
					cout << "  课程学分：" << subject[j].score;
					cout << "  课程时间：" << subject[j].time;
					cout << "  课程选修人数：" << subject[j].num << endl;*/
				}
			}
		}
	}
	if (flag == 0)
		//cout << "您并没有排课！" << endl;
		QMessageBox::information(this, tr("课程信息"), tr("您并没有排课！"), QMessageBox::Ok);
}
void core_t::addxuesheng() {
	int i = ::list.add_student(ui.gaixh->text().toUtf8().data(), ui.gaixm->text().toUtf8().data(), ui.gaicsny->text().toUtf8().data(), ui.gaixb->text().toUtf8().data(), ui.gailxdh->text().toUtf8().data(), ui.gaimm->text().toUtf8().data(), ui.gaijd->text().toFloat(), ui.gaibljlyzcd->text().toFloat(), ui.award->text().toUtf8().data(), ui.com->text().toUtf8().data(), ui.comm->text().toUtf8().data());
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
			ui.stu_info->insertPlainText("不良记录严重程度：");
			if (::list.student[i].influence == 1)
				ui.stu_info->insertPlainText("无");
			else if (::list.student[i].influence == 2)
				ui.stu_info->insertPlainText("较轻");
			else
				ui.stu_info->insertPlainText("严重");
			ui.stu_info->insertPlainText("奖项：");
			ui.stu_info->insertPlainText(::list.student[i].awards);
			ui.stu_info->insertPlainText("竞赛：");
			ui.stu_info->insertPlainText(::list.student[i].competition);
			ui.stu_info->insertPlainText("学术交流情况：");
			ui.stu_info->insertPlainText(::list.student[i].communication);
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
	int j = ::list.sort_student_infuluce();
	if (j > 0) {
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
			ui.stu_info->insertPlainText("不良记录严重程度：");
			if (::list.student[i].influence == 1)
				ui.stu_info->insertPlainText("无");
			else if (::list.student[i].influence == 2)
				ui.stu_info->insertPlainText("较轻");
			else
				ui.stu_info->insertPlainText("严重");
			ui.stu_info->insertPlainText("奖项：");
			ui.stu_info->insertPlainText(::list.student[i].awards);
			ui.stu_info->insertPlainText("竞赛：");
			ui.stu_info->insertPlainText(::list.student[i].competition);
			ui.stu_info->insertPlainText("学术交流情况：");
			ui.stu_info->insertPlainText(::list.student[i].communication);
			ui.stu_info->insertPlainText("\n");
		}
	}
	else if (j == -1) {
		QMessageBox::warning(this, tr("排序失败"), tr("没有学生信息，请先录入！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("排序失败"), tr("未知错误，排序失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core_t::sendhome() {
	int i;
	i = ::list.send_homework(ID.toUtf8().data(), ui.subid->text().toUtf8().data(), ui.mes->toPlainText().toUtf8().data());
	if (i == 1) {
		QMessageBox::information(this, tr("发布成功"), tr("已成功发布作业！"), QMessageBox::Ok);
	}
	else if (i == -1) {
		QMessageBox::warning(this, tr("发布失败"), tr("未查询到该课程号!"), QMessageBox::Ok);
	}
	else
		QMessageBox::warning(this, tr("发布失败"), tr("未知错误，发布失败！请联系管理员！"), QMessageBox::Ok);
}
void core_t::searchhome() {
	int i;
	ui.homeinfo->setText("");
	for (i = 0; i < ::list.con_n; i++) {
		ui.homeinfo->insertPlainText("教师号：");
		ui.homeinfo->insertPlainText(::list.content[i].teacher_id);
		ui.homeinfo->insertPlainText("课程号：");
		ui.homeinfo->insertPlainText(::list.content[i].subject_id);
		ui.homeinfo->insertPlainText("作业内容：");
		ui.homeinfo->insertPlainText(::list.content[i].content);
	}
}
void core_t::jidianjiangxu() {
	int i = ::list.sort_student_grade();
	if (i > 0) {
		ui.stu_info->setText("");
		for (int i = ::list.n - 1; i >= 0; i--)//学生信息输出
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
			ui.stu_info->insertPlainText("不良记录严重程度：");
			if (::list.student[i].influence == 1)
				ui.stu_info->insertPlainText("无");
			else if (::list.student[i].influence == 2)
				ui.stu_info->insertPlainText("较轻");
			else
				ui.stu_info->insertPlainText("严重");
			ui.stu_info->insertPlainText("奖项：");
			ui.stu_info->insertPlainText(::list.student[i].awards);
			ui.stu_info->insertPlainText("竞赛：");
			ui.stu_info->insertPlainText(::list.student[i].competition);
			ui.stu_info->insertPlainText("学术交流情况：");
			ui.stu_info->insertPlainText(::list.student[i].communication);
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
void core_t::buliangjiluyanzhongchengdujiangxu() {
	int j = ::list.sort_student_infuluce();
	if (j > 0) {
		ui.stu_info->setText("");
		for (int i = ::list.n-1; i >= 0; i--)//学生信息输出
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
			ui.stu_info->insertPlainText("不良记录严重程度：");
			if (::list.student[i].influence == 1)
				ui.stu_info->insertPlainText("无");
			else if (::list.student[i].influence == 2)
				ui.stu_info->insertPlainText("较轻");
			else
				ui.stu_info->insertPlainText("严重");
			ui.stu_info->insertPlainText("奖项：");
			ui.stu_info->insertPlainText(::list.student[i].awards);
			ui.stu_info->insertPlainText("竞赛：");
			ui.stu_info->insertPlainText(::list.student[i].competition);
			ui.stu_info->insertPlainText("学术交流情况：");
			ui.stu_info->insertPlainText(::list.student[i].communication);
			ui.stu_info->insertPlainText("\n");
		}
	}
	else if (j == -1) {
		QMessageBox::warning(this, tr("排序失败"), tr("没有学生信息，请先录入！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("排序失败"), tr("未知错误，排序失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core_t::send() {
	int j;
	if (!(ui.sendedit->toPlainText().isEmpty())) {
		j = ::list.send_message(ID.toUtf8().data(),ui.subjid->text().toUtf8().data(),ui.sendedit->toPlainText().toUtf8().data());
		if (j >= 0) {
		QMessageBox::information(this, tr("发布成功"), tr("已成功发送信息！"), QMessageBox::Ok);
		}
		else if (j == -1) {
			QMessageBox::warning(this, tr("发布失败"), tr("你并没有选择此课程，无权对该课程发布消息！"), QMessageBox::Ok);
		}
		else {
		QMessageBox::warning(this, tr("发布失败"), tr("未知错误，请联系管理员！"), QMessageBox::Ok);
		}
	}
	else {
		QMessageBox::warning(this, tr("发布失败"), tr("有未填写内容！"), QMessageBox::Ok);
	}
}
void core_t::chaxunmessage() {
	ui.sendshow->setText("");
	for (int i = 0; i < ::list.m_n; i++) {
		ui.sendshow->insertPlainText(" 课程：");
		ui.sendshow->insertPlainText(::list.message[i].sub_id);
		ui.sendshow->insertPlainText(" 老师：");
		ui.sendshow->insertPlainText(::list.message[i].teacher_id);
		ui.sendshow->insertPlainText("内容：");
		ui.sendshow->insertPlainText(::list.message[i].content);
		ui.sendshow->insertPlainText("发布时间：");

		ui.sendshow->insertPlainText(QString::fromStdString(::list.message[i].time));
		ui.xuanke->insertPlainText("\n");
	}
}
void core_t::addscore() {
	if (!(ui.course_id->text().isEmpty()||ui.stu_id->text().isEmpty()||ui.add_score->text().isEmpty())) {
		int i = ::list.tea_input_score(ui.course_id->text().toUtf8().data(), ui.stu_id->text().toUtf8().data(), ui.add_score->text().toFloat());
		if (i >= 0) {
			QMessageBox::information(this, tr("录入成功"), tr("录入成功！"), QMessageBox::Ok);
		}
		else  if(i==-1){
			QMessageBox::warning(this, tr("录入失败"), tr("未查到对应学生选有此课程！"), QMessageBox::Ok);
		}
		else {
			QMessageBox::warning(this, tr("录入失败"), tr("未知错误，录入失败！请联系管理员！"), QMessageBox::Ok);
		}
	}
	else {
		QMessageBox::warning(this, tr("录入失败"), tr("有未填写项！"), QMessageBox::Ok);
	}
}


int searchnum;
void  core_t::chaxunchengji(){
	if (!(ui.sub_id->text().isEmpty())) {
		searchnum = 0;
		int flag = 0;
		ui.homework->setText("");
		for (int i =0; i < ::list.sw_n; i++)
		{
			if (!strcmp(ui.sub_id->text().toUtf8().data(), ::list.subwork[i].sub_id)||flag==0)
			{
				QString numb = "学号:" + QString::fromUtf8(::list.subwork[i].stu_id);
				ui.stu_id->setText(numb);
				ui.homework->insertPlainText(::list.subwork[i].content);
				if (::list.subwork[i].grade >= 0)
					ui.score->setText(QString::number(::list.subwork[i].grade));
				else
					ui.score->setText("无");
				/*cout << "学生学号：" << subwork[i].stu_id << endl;
				cout << "提交内容：" << subwork[i].content << endl;
				cout << "请输入你的评分：";
				cin >> subwork[i].grade;*/
				flag = 1;
				searchnum = i;

			}
		}
		if (flag == 0)
			QMessageBox::warning(this, tr("查找失败"), tr("无学生提交作业！"), QMessageBox::Ok);
			//cout << "无学生提交作业" << endl;
	}
	else {
		QMessageBox::warning(this, tr("查找失败"), tr("未输入课程号！"), QMessageBox::Ok);
	}
}
void  core_t::correct(){
	if (!(ui.score->text().isEmpty())&&searchnum!=0) {
		int i;
		i = ::list.correct_homework(searchnum, ui.score->text().toFloat());
			if (i == 1) {
				QMessageBox::warning(this, tr("提交成功"), tr("提交成功！"), QMessageBox::Ok);
		}
			else {
				QMessageBox::warning(this, tr("提交失败"), tr("未知错误，提交失败！请联系管理员！"), QMessageBox::Ok);
			}
	}
	else if (searchnum == 0) {
		QMessageBox::warning(this, tr("提交失败"), tr("未查询课程！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("提交失败"), tr("未输入成绩！"), QMessageBox::Ok);
	}
}
void  core_t::latter(){
	if (!(ui.sub_id->text().isEmpty())) {
		int flag = 0;
		ui.homework->setText("");
		for (int i = searchnum+1; i < ::list.sw_n; i++)
		{
			if (!strcmp(ui.sub_id->text().toUtf8().data(), ::list.subwork[i].sub_id) || flag == 0)
			{
				QString numb = "学号:" + QString::fromUtf8(::list.subwork[i].stu_id);
				ui.stu_id->setText(numb);
				ui.homework->insertPlainText(::list.subwork[i].content);
				if(::list.subwork[i].grade>=0)
					ui.score->setText(QString::number(::list.subwork[i].grade));
				else
					ui.score->setText("无");
				/*cout << "学生学号：" << subwork[i].stu_id << endl;
				cout << "提交内容：" << subwork[i].content << endl;
				cout << "请输入你的评分：";
				cin >> subwork[i].grade;*/
				flag = 1;
				searchnum = i;

			}
		}
		if (flag == 0)
			QMessageBox::warning(this, tr("查找失败"), tr("你已批改完所有的作业！"), QMessageBox::Ok);
		//cout << "无学生提交作业" << endl;
	}
	else {
		QMessageBox::warning(this, tr("查找失败"), tr("未输入课程号！"), QMessageBox::Ok);
	}
}
void  core_t::former(){
	if (!(ui.sub_id->text().isEmpty())) {
		int flag = 0;
		ui.homework->setText("");
		for (int i = searchnum -1; i >= 0; i--)
		{
			if (!strcmp(ui.sub_id->text().toUtf8().data(), ::list.subwork[i].sub_id) || flag == 0)
			{
				QString numb = "学号:" + QString::fromUtf8(::list.subwork[i].stu_id);
				ui.stu_id->setText(numb);
				ui.homework->insertPlainText(::list.subwork[i].content);
				if (::list.subwork[i].grade >= 0)
					ui.score->setText(QString::number(::list.subwork[i].grade));
				else
					ui.score->setText("无");
				/*cout << "学生学号：" << subwork[i].stu_id << endl;
				cout << "提交内容：" << subwork[i].content << endl;
				cout << "请输入你的评分：";
				cin >> subwork[i].grade;*/
				flag = 1;
				searchnum = i;

			}
		}
		if (flag == 0)
			QMessageBox::warning(this, tr("查找失败"), tr("已是第一份作业！"), QMessageBox::Ok);
		//cout << "无学生提交作业" << endl;
	}
	else {
		QMessageBox::warning(this, tr("查找失败"), tr("未输入课程号！"), QMessageBox::Ok);
	}
}

void core_t::q_add() {
	if (!(ui.q_subid->text().isEmpty() || ui.qstarth->text().isEmpty() || ui.qstartm->text().isEmpty() || ui.qendh->text().isEmpty() || ui.qendm->text().isEmpty())) {
		int i = ::list.set_sign_in(ID.toUtf8().data(), ui.q_subid->text().toUtf8().data(), ui.qstarth->text().toFloat(), ui.qstartm->text().toFloat(), ui.qendh->text().toFloat(), ui.qendm->text().toFloat());
		if (i == 1) {
			QMessageBox::information(this, tr("发布成功"), tr("已成功发布签到！"), QMessageBox::Ok);
		}
		else {
			QMessageBox::warning(this, tr("发布失败"), tr("未知错误，发布失败！请联系管理员！"), QMessageBox::Ok);
		}
	}
	else {
		QMessageBox::warning(this, tr("发布失败"), tr("有未填项！"), QMessageBox::Ok);
	}
}

void core_t::q_sea() {
	if (!(ui.qsearch->text().isEmpty())) {
		char sub_id[20];
		/*cout << "请输入你要查看的课程号：";
		cin >> sub_id;*/
		strcpy(sub_id, ui.qsearch->text().toUtf8().data());
			int flag = 0;
			ui.q_info->setText("");
			for (int i = 0; i < ::list.si_n; i++)
			{
				if (!strcmp(::list.sign_in[i].tea_id, ID.toUtf8().data()))
				{
					flag = 1;
						for (int j = 0; j < ::list.sis_n; j++)
						{
							if (!strcmp(::list.sign_in_stu[i].sub_id, sub_id))
							{
								if (::list.sign_in_stu[i].state)
								{
									//cout << "学号：" << ::list.sign_in_stu[i].stu_id << " 签到完成" << endl;
									ui.q_info->insertPlainText("学号：");
									ui.q_info->insertPlainText(::list.sign_in_stu[i].stu_id);
									ui.q_info->insertPlainText(" 签到完成");
									ui.q_info->insertPlainText("\n");
								}
								else
								{
									//cout << "学号：" << ::list.sign_in_stu[i].stu_id << " 未完成签到" << endl;
									ui.q_info->insertPlainText("学号：");
									ui.q_info->insertPlainText(::list.sign_in_stu[i].stu_id);
									ui.q_info->insertPlainText(" 未完成签到");
									ui.q_info->insertPlainText("\n");
								}
							}
						}
				}
			}
		if (flag == 0)
			//cout << "你并没有设置签到！" << endl;
			QMessageBox::warning(this, tr("查询失败"), tr("你并没有设置签到！"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("查询失败"), tr("有未填项！"), QMessageBox::Ok);
	}
}