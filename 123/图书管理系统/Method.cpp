#include"Biz.h"
Student inputStuInfo(){
	char studentName[30];
	int studentNumber;

	cout << "input studentName:";
	cin >> studentName;
	cout << "input studentNumber:";
	cin >> studentNumber;

	Student stu(studentName, studentNumber);

	return stu;
}
void studentMethod(){
	Biz stuBiz;
	Student stu;
	int tag = 0;
	int isOK = 0;
	do{
		cout << "-----------学生管理管理系统-----------" << endl;
		cout << "--------1 录入--------" << endl;
		cout << "--------2 修改--------" << endl;
		cout << "--------3 删除--------" << endl;
		cout << "--------4 查找--------" << endl;
		cout << "--------5 显式--------" << endl;
		cout << "--------0 退出--------" << endl;
		cout << "请选择操作:";
		cin >> tag;
		switch(tag) {
		case 1:
			cout << "学生信息管理 << 录入:" << endl;
			stu = inputStuInfo();
			isOK = stuBiz.addStudent(stu);
			if(isOK) {
				cout << "新增学生信息成功" << endl;
			} else {
				cout << "新增学生信息失败" << endl;
			}
			break;
		case 2:
			cout << "学生信息管理 << 修改:" << endl;

			break;
		case 3:
			cout << "学生信息管理 << 查找:" << endl;
			break;
		case 4:
			cout << "学生信息管理 << 删除:" << endl;
			break;
		case 5:
			cout << "学生信息管理 << 显式:" << endl;
			stuBiz.findAllStudent();
			break;
		}
	}while(tag != 0);	
}