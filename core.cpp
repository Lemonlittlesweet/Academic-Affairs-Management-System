#include "core.h"
#include "Global.h"
#include <QTablewidget>
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
	this->setWindowTitle("学生主界面");
	//ui.subscore->setValidator(new QRegExpValidator(QRegExp("^([0-9]|[1-9][0-9]|100)$")));
	ui.subid->setValidator(new QRegExpValidator(QRegExp("^[0-9]*$")));
	ui.subid_2->setValidator(new QRegExpValidator(QRegExp("^[0-9]*$")));
	ui.bianhao->setValidator(new QRegExpValidator(QRegExp("^[0-9]*$")));
	ui.homework_course->setValidator(new QRegExpValidator(QRegExp("^[0-9]*$")));
	ui.tea_sc->setValidator(new QRegExpValidator(QRegExp("^([0-9]|[1-9][0-9]|100)$")));
	ui.q_subid->setValidator(new QRegExpValidator(QRegExp("^[0-9]*$")));
	ui.q_teaid->setValidator(new QRegExpValidator(QRegExp("^[0-9]*$")));


	for (int i = 0; i < ::list.t_n; i++)//输出教师
	{
		ui.shoukepingfen->insertPlainText("教师编号：");
		ui.shoukepingfen->insertPlainText(::list.teacher[i].id);
		ui.shoukepingfen->insertPlainText(" 姓名：");
		ui.shoukepingfen->insertPlainText(::list.teacher[i].name);
		ui.shoukepingfen->insertPlainText("授课评分：");
		if (::list.teacher[i].grade == -1) {
			ui.shoukepingfen->insertPlainText("无");
		}
		else {
			ui.shoukepingfen->insertPlainText(QString::number(::list.teacher[i].grade));
		}
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
	for (int i = 0; i < ::list.num; i++)//输出选课
	{//和传进来id作比较，if
		if (!strcmp(ID.toUtf8().data(), ::list.s_course[i].stu_id))
		{
			ui.tuike->insertPlainText("选课编号：");
			ui.tuike->insertPlainText(::list.s_course[i].sub_id);
			ui.tuike->insertPlainText( " 成绩：");
			if (::list.s_course[i].score == -1) {
				ui.tuike->insertPlainText("无");
			}
			else {
				ui.tuike->insertPlainText(QString::number(::list.s_course[i].score));
			}
			ui.tuike->insertPlainText("\n");
		}
		/*cout << "学号：" << ::list.s_course[i].stu_id << "  ";
		cout << "选课编号：" << ::list.s_course[i].sub_id << "  ";
		cout << "成绩：" << ::list.s_course[i].score << endl;*/
	}
	for (int i = 0; i < ::list.s_n; i++)//输出课程
	{
		ui.xuanke->insertPlainText("课程编号：");
		ui.xuanke->insertPlainText(::list.subject[i].id);
		ui.xuanke->insertPlainText(" 课程名称：");
		ui.xuanke->insertPlainText(::list.subject[i].name);
		//ui.xuanke->insertPlainText("课程性质：");
		//ui.xuanke->insertPlainText(::list.subject[i].type);
		//ui.xuanke->insertPlainText(" 课程总学时：");
		//ui.xuanke->insertPlainText(QString::number(::list.subject[i].hour));
		ui.xuanke->insertPlainText("课程学分：");
		ui.xuanke->insertPlainText(QString::number(::list.subject[i].score));
		ui.xuanke->insertPlainText(" 课程时间：");
		ui.xuanke->insertPlainText(::list.subject[i].time);
		//ui.xuanke->insertPlainText("课程选修人数：");
		//ui.xuanke->insertPlainText(QString::number(::list.subject[i].num));
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
	//不确定是否存在风险的写法
}

void core::choclassPress() {
	if(!(ui.subid->text().isEmpty())){
		switch (::list.choose(ID.toUtf8().data(), ui.subid->text().toUtf8().data()))
		{
		case 1:
			QMessageBox::information(this, tr("选课成功"), tr("您已成功选课！"), QMessageBox::Ok);
			break;
		case -1:
			QMessageBox::warning(this, tr("选课失败"), tr("你已选过该课程！请勿再次选课！！"), QMessageBox::Ok);
			break;
		case -2:
			QMessageBox::warning(this, tr("选课失败"), tr("课程编号不存在，选课失败！"), QMessageBox::Ok);
			break;
		default:
			QMessageBox::warning(this, tr("选课失败"), tr("未知错误，选课失败！请联系管理员！"), QMessageBox::Ok);
		}
	}
	else {
		QMessageBox::warning(this, tr("选课失败"), tr("有未填写信息!"), QMessageBox::Ok);
	}
}

void core::exitclassPress() {
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

void core::searchSel() {
	ui.tuike->setText("");
	for (int i = 0; i < ::list.num; i++)
	{
		
		if (!strcmp(ID.toUtf8().data(), ::list.s_course[i].stu_id))
		{
			ui.tuike->insertPlainText("选课编号：");
			ui.tuike->insertPlainText(::list.s_course[i].sub_id);
			ui.tuike->insertPlainText(" 成绩：");
			if (::list.s_course[i].score == -1)
			{
				ui.tuike->insertPlainText("无");
			}
			else {
				ui.tuike->insertPlainText(QString::number(::list.s_course[i].score));
			}
			ui.tuike->insertPlainText("\n");
		}

	}
}
void core::bianhao()
{
	int i = ::list.select_subject(1, ui.bianhao->text().toUtf8().data(), ui.bianhao->text().toUtf8().data());
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
	int i = ::list.select_subject(2, ui.mingchen->text().toUtf8().data(),ui.mingchen->text().toUtf8().data());
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
	else {
		ui.xuanke->setText("");
		for (int i = 0; i < ::list.s_n; i++)
		{
			ui.xuanke->insertPlainText("课程编号：");
			ui.xuanke->insertPlainText(::list.subject[i].id);
			ui.xuanke->insertPlainText(" 课程名称：");
			ui.xuanke->insertPlainText(::list.subject[i].name);
			//ui.xuanke->insertPlainText("课程性质：");
			//ui.xuanke->insertPlainText(::list.subject[i].type);
			//ui.xuanke->insertPlainText(" 课程总学时：");
			//ui.xuanke->insertPlainText(QString::number(::list.subject[i].hour));
			ui.xuanke->insertPlainText("课程学分：");
			ui.xuanke->insertPlainText(QString::number(::list.subject[i].score));
			ui.xuanke->insertPlainText(" 课程时间：");
			ui.xuanke->insertPlainText(::list.subject[i].time);
			//ui.xuanke->insertPlainText("课程选修人数：");
			//ui.xuanke->insertPlainText(QString::number(::list.subject[i].num));
			ui.xuanke->insertPlainText("\n");
		}
	}
}
void core::xuefenpaixuj() {
	if (::list.sort_course_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有课程信息，请先录入！"), QMessageBox::Ok);
	}
	else {
		ui.xuanke->setText("");
		for (int i = ::list.s_n-1; i >=0; i--)
		{
			ui.xuanke->insertPlainText("课程编号：");
			ui.xuanke->insertPlainText(::list.subject[i].id);
			ui.xuanke->insertPlainText(" 课程名称：");
			ui.xuanke->insertPlainText(::list.subject[i].name);
			//ui.xuanke->insertPlainText("课程性质：");
			//ui.xuanke->insertPlainText(::list.subject[i].type);
			//ui.xuanke->insertPlainText(" 课程总学时：");
			//ui.xuanke->insertPlainText(QString::number(::list.subject[i].hour));
			ui.xuanke->insertPlainText("课程学分：");
			ui.xuanke->insertPlainText(QString::number(::list.subject[i].score));
			ui.xuanke->insertPlainText(" 课程时间：");
			ui.xuanke->insertPlainText(::list.subject[i].time);
			//ui.xuanke->insertPlainText("课程选修人数：");
			//ui.xuanke->insertPlainText(QString::number(::list.subject[i].num));
			ui.xuanke->insertPlainText("\n");
		}
	}
}
void core::laoshishoukepingfenpaixu() {
	if (::list.sort_teacher_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有教师信息！"), QMessageBox::Ok);
	}
	else
	{
		ui.shoukepingfen->setText("");
		for (int i = 0; i < ::list.t_n; i++)
		{
			ui.shoukepingfen->insertPlainText("教师编号：");
			ui.shoukepingfen->insertPlainText(::list.teacher[i].id);
			ui.shoukepingfen->insertPlainText(" 姓名：");
			ui.shoukepingfen->insertPlainText(::list.teacher[i].name);
			ui.shoukepingfen->insertPlainText("授课评分：");
			if (::list.teacher[i].grade == -1) {
				ui.shoukepingfen->insertPlainText("无");
			}
			else {
				ui.shoukepingfen->insertPlainText(QString::number(::list.teacher[i].grade));
			}
			ui.shoukepingfen->insertPlainText("\n");
		}
	}
}
void core::laoshij() {
	if (::list.sort_teacher_grade() < 0) {
		QMessageBox::warning(this, tr("查询失败"), tr("没有教师信息！"), QMessageBox::Ok);
	}
	else
	{
		ui.shoukepingfen->setText("");
		for (int i = ::list.t_n-1; i>=0; i--)
		{
			ui.shoukepingfen->insertPlainText("教师编号：");
			ui.shoukepingfen->insertPlainText(::list.teacher[i].id);
			ui.shoukepingfen->insertPlainText(" 姓名：");
			ui.shoukepingfen->insertPlainText(::list.teacher[i].name);
			ui.shoukepingfen->insertPlainText("授课评分：");
			if (::list.teacher[i].grade <0) {
				ui.shoukepingfen->insertPlainText("无");
			}
			else {
				ui.shoukepingfen->insertPlainText(QString::number(::list.teacher[i].grade));
			}
			ui.shoukepingfen->insertPlainText("\n");
		}
	}
}

void core::searchhome() {
	int i;
	i = ::list.stu_show_homework(ID.toUtf8().data());
	if (i >= 0) {
		ui.homesearch->setText("");
		ui.homesearch->insertPlainText("课程号：");
		ui.homesearch->insertPlainText(::list.content[i].subject_id);
		ui.homesearch->insertPlainText("授课教师：");
		ui.homesearch->insertPlainText(::list.content[i].teacher_id);
		ui.homesearch->insertPlainText("作业内容：");
		ui.homesearch->insertPlainText(::list.content[i].content);
	}
	else if(i == -1) {
		QMessageBox::warning(this, tr("查询失败"), tr("您目前暂无选课信息"), QMessageBox::Ok);
	}
	else {
		QMessageBox::warning(this, tr("查询失败"), tr("未知错误，查询失败！请联系管理员！"), QMessageBox::Ok);
	}
}
void core::handhomework() {
	if (!(ui.homework_course->text().isEmpty() || ui.handhomework->toPlainText().isEmpty())) {
		int i = ::list.submit(ID.toUtf8().data(), ui.homework_course->text().toUtf8().data(), ui.handhomework->toPlainText().toUtf8().data());
		if (i >= 0) {
			QMessageBox::information(this, tr("交作业成功"), tr("交作业成功！"), QMessageBox::Ok);
		}
		else {
			QMessageBox::warning(this, tr("交作业失败"), tr("未知错误，查询失败！请联系管理员！"), QMessageBox::Ok);
		}
	}
	else {
		QMessageBox::warning(this, tr("交作业失败"), tr("有未填写内容！"), QMessageBox::Ok);
	}
}

int searchc;
int searcht;
int searchd=-1;
int any=0;
void core::stu_former() {
	int flag1 = 0;
	int f;
	int ft = 0;
	f = 0;
	for (int i = searchc; i>=0; i--)//在表里找到学生选的课程
	{
		if (!strcmp(ID.toUtf8().data(), ::list.s_course[i].stu_id))
		{
			flag1 = 1;
			int j = ::list.tc_n-1;
			if (ft == 0) {
				j = searcht - 1;
			}
			for (j ; j >=0; j--)//在老师授课表里找到授课的老师
			{
				if (!strcmp(::list.s_course[i].sub_id, ::list.t_course[j].sub_id))
				{
					for (int k = 0; k < ::list.t_n; k++)
					{
						if (!strcmp(::list.t_course[j].teacher_id, ::list.teacher[k].id) && f == 0)//在老师数组中找到对应的老师
						{
							if (::list.teacher[k].flag == 0 && ::list.s_course[i].flag == 0)
							{
								/*cout << "你给" << teacher[k].name << "的打分是：";
								cin >> teacher[k].grade;*/
								QString teachergrade = "你给" + QString::fromUtf8(::list.s_course[i].sub_id) + "课的" + QString::fromUtf8(::list.teacher[k].name) + "的打分是：";
								ui.sco_info->setText(teachergrade);
								f = 1;
								searchc = i;
								searcht = j;
								searchd = k;
								::list.teacher[k].flag = 1;
								::list.s_course[i].flag = 1;
							}
						}
					}
				}
			}
			ft = 1;
		}
	}
	for (int i = 0; i < ::list.t_n; i++)
		::list.teacher[i].flag = 0;
	for (int i = 0; i < ::list.num; i++)
		::list.s_course[i].flag = 0;
	if (any == 0)
		QMessageBox::warning(this, tr("打分失败"), tr("你并没有开始打分，无法给老师打分！请在开始打分后重试！"), QMessageBox::Ok);
	else if(f==0)
		QMessageBox::warning(this, tr("查询失败"), tr("已是第一名老师！"), QMessageBox::Ok);
}
void core::stu_hand() {
	if (!(ui.tea_sc->text().isEmpty() || searchd < 0)) {
		int i = ::list.scoring(searchd, ui.tea_sc->text().toFloat());
		if (i==1)
			QMessageBox::information(this, tr("打分成功"), tr("打分成功！"), QMessageBox::Ok);
		else
			QMessageBox::warning(this, tr("打分失败"), tr("未知错误！请联系管理员！"), QMessageBox::Ok);
	}
	else
		QMessageBox::warning(this, tr("打分失败"), tr("有未填写项！"), QMessageBox::Ok);
}
void core::stu_latter() {
	int flag1 = 0;
	int f;
	int ft;
	ft = 0;
	f = 0;
	for (int i = searchc; i < ::list.num; i++)//在表里找到学生选的课程
	{
		if (!strcmp(ID.toUtf8().data(), ::list.s_course[i].stu_id))
		{
			flag1 = 1;
			int j = 0;
			if (ft == 0) {
				j = searcht + 1;
			}
			for ( j ; j < ::list.tc_n; j++)//在老师授课表里找到授课的老师
			{
				if (!strcmp(::list.s_course[i].sub_id, ::list.t_course[j].sub_id))
				{
					for (int k = 0; k < ::list.t_n; k++)
					{
						if (!strcmp(::list.t_course[j].teacher_id, ::list.teacher[k].id) && f == 0)//在老师数组中找到对应的老师
						{
							if (::list.teacher[k].flag == 0 && ::list.s_course[i].flag == 0)
							{
								/*cout << "你给" << teacher[k].name << "的打分是：";
								cin >> teacher[k].grade;*/
								QString teachergrade = "你给" + QString::fromUtf8(::list.s_course[i].sub_id) + "课的" + QString::fromUtf8(::list.teacher[k].name) + "的打分是：";
								ui.sco_info->setText(teachergrade);
								f = 1;
								searchc = i;
								searcht = j;
								searchd = k;
								::list.teacher[k].flag = 1;
								::list.s_course[i].flag = 1;
							}
						}
					}
				}
			}
			ft = 1;
		}
	}
	for (int i = 0; i < ::list.t_n; i++)
		::list.teacher[i].flag = 0;
	for (int i = 0; i < ::list.num; i++)
		::list.s_course[i].flag = 0;
	if (any == 0)
		QMessageBox::warning(this, tr("打分失败"), tr("你并没有开始打分，无法给老师打分！请在开始打分后重试！"), QMessageBox::Ok);
	else if (f == 0)
		QMessageBox::warning(this, tr("查询失败"), tr("已是最后一名老师！"), QMessageBox::Ok);
}
void core::startbegin() {
	int flag1 = 0;
	int f;
	f = 0;
	for (int i = 0; i < ::list.num; i++)//在表里找到学生选的课程
	{
		if (!strcmp(ID.toUtf8().data(), ::list.s_course[i].stu_id))
		{
			flag1 = 1;
			for (int j = 0; j < ::list.tc_n; j++)//在老师授课表里找到授课的老师
			{
				if (!strcmp(::list.s_course[i].sub_id, ::list.t_course[j].sub_id))
				{
					for (int k = 0; k < ::list.t_n; k++)
					{
						if (!strcmp(::list.t_course[j].teacher_id, ::list.teacher[k].id)&&f==0)//在老师数组中找到对应的老师
						{
							if (::list.teacher[k].flag == 0 && ::list.s_course[i].flag == 0)
							{
								/*cout << "你给" << teacher[k].name << "的打分是：";
								cin >> teacher[k].grade;*/
								QString teachergrade = "你给" + QString::fromUtf8(::list.s_course[i].sub_id) + "课的" + QString::fromUtf8(::list.teacher[k].name) + "的打分是：";
								ui.sco_info->setText(teachergrade);
								f = 1;
								any = 1;
								searchc = i;
								searcht = j;
								searchd = k;
								::list.teacher[k].flag = 1;
								::list.s_course[i].flag = 1;
							}
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < ::list.t_n; i++)
		::list.teacher[i].flag = 0;
	for (int i = 0; i < ::list.num; i++)
		::list.s_course[i].flag = 0;
	if (flag1 == 0)
		QMessageBox::warning(this, tr("打分失败"), tr("你并没有选课，无法给老师打分！请在选课后重试！"), QMessageBox::Ok);
}
void core::qiandao() {
	if (!(ui.q_subid->text().isEmpty() || ui.q_teaid->text().isEmpty())) {
		int i = ::list.sign_in_s(ID.toUtf8().data(), ui.q_subid->text().toUtf8().data(), ui.q_teaid->text().toUtf8().data());
		if (i == 1) {
			QMessageBox::information(this, tr("签到成功"), tr("当前时间在指定时间范围内！"), QMessageBox::Ok);
		}
		else if (i == 0) {
			QMessageBox::warning(this, tr("签到失败"), tr("当前时间不在指定时间范围内！"), QMessageBox::Ok);
		}
		else {
			QMessageBox::warning(this, tr("签到失败"), tr("未知错误，签到失败！请联系管理员！"), QMessageBox::Ok);
		}
	}
	else
		QMessageBox::warning(this, tr("签到失败"), tr("有未填写内容！"), QMessageBox::Ok);
}