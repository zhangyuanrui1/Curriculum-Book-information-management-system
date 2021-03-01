#include"Biz.h"

void studentInterface(); //学生界面
void teacherInterface(); //教师界面
void control();//管理员控制界面

Student inputStuInfo(); //学生证号的输入
Teacher inputTeaInfo(); //教师证号的输入
void studentMethod(); //学生证号管理界面
void teacherMethod(); //教师证号管理界面
void userMethod(); //管理员证号管理界面

Library inputLibInfo(); //图书信息的输入
void libraryMethod(); //图书信息管理界面

Magazines inputMagaInfo(); //杂志信息的输入
void magazinesMethod(); //杂志信息管理界面

User inputuserInfo(); //id 姓名 密码的输入
void LoginInterface(); //注册界面
void studentLogin(); //学生注册
void teacherLogin(); //教师注册

void enterInterface(); //登录界面
void studentEnter(); //学生登录
void teacherEnter(); //教师登录
void enter(); //管理员登录

void userInterface(); //用户信息管理（密码）界面
void userStudentMethod(); //学生密码管理界面
void userTeacherMethod(); //教师密码管理界面
//23个方法

Library inputLibInfo(){ //图书信息的输入
	char libraryNmae[30]; //书名
	int libraryCode; //条码
	int librarynumber; //内部分类号
	char author[30]; //作者
	int libraryStorage; //库存量
	cout << "                                     请输入作者：";
	cin >>  author;
	cout << "                                     请输入条码：";
	cin >> libraryCode;
	cout << "                                     请输入书名：";
	cin >> libraryNmae;
	cout << "                               请输入内部分类号：";
	cin >> librarynumber;
	cout << "                                   请输入库存量：";
	cin >> libraryStorage;
	Library lib(libraryNmae, libraryCode, librarynumber, author, libraryStorage);
	return lib;
}
void libraryMethod(){ //图书信息管理界面
	Biz biz;
	Library lib;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int libraryCode;
	int studentNumber;
	int teacherNumber;
	do{
		system("cls");
		cout << "-----------------------------图书信息管理-----------------------------" << endl;
		cout << "                               1 新增" << endl;
		cout << "                               2 修改" << endl;
		cout << "                               3 查找" << endl;
		cout << "                               4 删除" << endl;
		cout << "                               5 列表显式" << endl;
		cout << "                               6 学生借阅" << endl;
		cout << "                               7 教师借阅" << endl;
		cout << "                               8 学生借阅信息列表显式" << endl;
		cout << "                               9 教师借阅信息列表显式" << endl;
		cout << "                               10 学生归还" << endl;
		cout << "                               11 教师归还" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               图书信息管理 << 新增:" << endl;
			lib = inputLibInfo();
			bb = biz.addLibrary(lib);
			if(bb) {
				cout << "                               新增图书信息成功" << endl;
			} else {
				cout << "                               新增图书信息失败" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               图书信息管理 << 修改:" << endl;
			cout << "                               请输入要修改的图书条码:";
			cin >> libraryCode;
			lib = biz.findByIdLibrary(libraryCode);
			if(lib.getLibraryCode() == 0){
				cout << "                               图书不存在" << endl;
			} else {
				cout << "-------------------------------------------------------------------------------" << endl;
				cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
				cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
				cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
				cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
				cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
				cout << "-------------------------------------------------------------------------------" << endl;
				cout << "                               请输入要修改的图书信息:" << endl;
				lib = inputLibInfo();
				ok = biz.updateLibrary(lib);
				if(ok) {
					cout << "======================================================================================================" << endl;
					cout << "                               修改图书信息成功!" << endl;
					cout << "---------------------------------------------------------------------------" << endl;
					cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
					cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
					cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
					cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
					cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
					cout << "---------------------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改图书信息失败!" << endl;
				}
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               图书信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的图书条码:";
			cin >> libraryCode;
			lib = biz.findByIdLibrary(libraryCode);
			if(lib.getLibraryCode() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-------------------------------------------------------------------------------------" << endl;
				cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
				cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
				cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
				cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
				cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
				cout << "-------------------------------------------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               图书信息管理 << 删除:" << endl;
			cout << "                               请输入要删除的图书条码：" ;
			cin >> libraryCode;
			ok = biz.deleteByIdLibrary(libraryCode);
			if(ok) {
				cout << "                               删除图书成功!" << endl;
			} else {
				cout << "                               删除图书失败!" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               图书信息管理 << 列表显式:" << endl;
			biz.findAllLibrary();
			system("pause");
			system("cls");
			break;
		case 6:
			cout << "                               图书信息管理 << 学生借阅:" << endl;
			biz.libraryStudentLend();
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "                               图书信息管理 << 教师借阅:" << endl;
			biz.libraryTeacherLend();
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "                               图书信息管理 << 学生借阅信息列表显式:" << endl;
			cout << "                               请输入学生的借书证号：" ;
			cin >> studentNumber;
			biz.findByIdLibraryStudentLend(studentNumber);
			system("pause");
			system("cls");
			break;
		case 9:
			cout << "                               图书信息管理 << 教师借阅信息列表显式:" << endl;
			cout << "                               请输入教师的借书证号：" ;
			cin >> teacherNumber;
			biz.findByIdLibraryTeacherLend(teacherNumber);
			system("pause");
			system("cls");
			break;
		case 10:
			cout << "                               图书信息管理 << 学生归还:" << endl;
			biz.libraryStudentReturn();
			system("pause");
			system("cls");
			break;
		case 11:
			cout << "                               图书信息管理 << 教师归还:" << endl;
			biz.libraryTeacherReturn();
			system("pause");
			system("cls");
			break;
		default:
            cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);
}

Magazines inputMagaInfo(){ //杂志信息的输入
	char magazinesName[30]; //书名
	int magazinesCode; //条码
	int magazinesNumber; //卷号
	int magazinesStorage; //库存量
	cout << "                               请输入书名：";
	cin >> magazinesName;
	cout << "                               请输入条码：";
	cin >> magazinesCode;
	cout << "                               请输入卷号：";
	cin >> magazinesNumber;
	cout << "                             请输入库存量：";
	cin >> magazinesStorage;
	Magazines maga(magazinesName, magazinesCode, magazinesNumber, magazinesStorage);
	return maga;
}
void magazinesMethod(){ //杂志信息管理界面
	Biz biz;
	Magazines maga;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int magazinesCode;
	int studentNumber;
	int teacherNumber;
	do{
		cout << "----------------------------杂志信息管理------------------------------" << endl;
		cout << "                               1 新增" << endl;
		cout << "                               2 修改" << endl;
		cout << "                               3 查找" << endl;
		cout << "                               4 删除" << endl;
		cout << "                               5 列表显式" << endl;
		cout << "                               6 学生借阅" << endl;
		cout << "                               7 教师借阅" << endl;
		cout << "                               8 学生借阅信息列表显式" << endl;
		cout << "                               9 教师借阅信息列表显式" << endl;
		cout << "                               10 学生归还" << endl;
		cout << "                               11 教师归还" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               杂志信息管理 << 新增:" << endl;
			maga = inputMagaInfo();
			bb = biz.addMagazines(maga);
			if(bb) {
				cout << "                               新增杂志信息成功" << endl;
			} else {
				cout << "                               新增杂志信息失败" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               杂志信息管理 << 修改:" << endl;
			cout << "                               请输入要查询的杂志条码:";
			cin >> magazinesCode;
			maga = biz.findByIdMagazines(magazinesCode);
			if(maga.getMagazinesCode() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "------------------------------------------------------------------------------------" << endl;
				cout << "                               杂志：   书名：" << maga.getMagazinesName() << endl;
				cout << "                               杂志：   条码：" << maga.getMagazinesCode() << endl;
				cout << "                               杂志：   卷号：" << maga.getMagazinesNumber() << endl;
				cout << "                               杂志： 库存量：" << maga.getMagazinesStorage() << endl;
				cout << "------------------------------------------------------------------------------------" << endl;
				cout << "                               请输入要修改的杂志信息:" << endl;
				maga = inputMagaInfo();
				ok = biz.updateMagazines(maga);
				if(ok) {
					cout << "===========================================================================================" << endl;
					cout << "                               修改杂志信息成功!" << endl;
					cout << "--------------------------------------------------------------------------" << endl;
					cout << "                               杂志：   书名：" << maga.getMagazinesName() << endl;
					cout << "                               杂志：   条码：" << maga.getMagazinesCode() << endl;
					cout << "                               杂志：   卷号：" << maga.getMagazinesNumber() << endl;
					cout << "                               杂志： 库存量：" << maga.getMagazinesStorage() << endl;
					cout << "--------------------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改杂志信息失败!" << endl;
				}
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               杂志信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的杂志条码:";
			cin >> magazinesCode;
			maga = biz.findByIdMagazines(magazinesCode);
			if(maga.getMagazinesCode() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-----------------------------------------------------" << endl;
				cout << "                               杂志：书名   ：" << maga.getMagazinesName() << endl;
				cout << "                               杂志：条码   ：" << maga.getMagazinesCode() << endl;
				cout << "                               杂志：卷号   ：" << maga.getMagazinesNumber() << endl;
				cout << "                               杂志：库存量 ：" << maga.getMagazinesStorage() << endl;
				cout << "-----------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               杂志信息管理 << 删除:" << endl;
			cout << "                               请输入要删除的杂志条码：" ;
			cin >> magazinesCode;
			ok = biz.deleteByIdMagazines(magazinesCode);
			if(ok) {
				cout << "                               删除杂志成功!" << endl;
			} else {
				cout << "                               删除杂志失败!" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               杂志信息管理 << 列表显式:" << endl;
			biz.findAllMagazines();
			system("pause");
			system("cls");
			break;
		case 6:
			cout << "                               杂志信息管理 << 学生借阅:" << endl;
			biz.magazinesStudentLend();
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "                               杂志信息管理 << 教师借阅:" << endl;
			biz.magazinesTeacherLend();
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "                               杂志信息管理 << 学生借阅信息列表显式:" << endl;
			cout << "                               请输入学生的借书证号：" ;
			cin >> studentNumber;
			biz.findByIdMagazinesStudentLend(studentNumber);
			system("pause");
			system("cls");
			break;
		case 9:
			cout << "                               杂志信息管理 << 教师借阅信息列表显式:" << endl;
			cout << "                               请输入教师的借书证号：" ;
			cin >> teacherNumber;
			biz.findByIdMagazinesTeacherLend(teacherNumber);
			system("pause");
			system("cls");
			break;
		case 10:
			cout << "                               杂志信息管理 << 学生归还:" << endl;
			biz.magazinesStudentReturn();
			system("pause");
			system("cls");
			break;
		case 11:
			cout << "                               杂志信息管理 << 教师归还:" << endl;
			biz.magazinesTeacherReturn();
			system("pause");
			system("cls");
			break;
		default:
            cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);
}


Student inputStuInfo(){ //学生证号的输入
	char studentName[30];
	int studentNumber;
	cout << "                                    请输入姓名：";
	cin >> studentName;
	cout << "                                请输入借书证号：";
	cin >> studentNumber;
	Student stu(studentName, studentNumber);
	return stu;
}
void studentMethod(){ //学生证号管理界面
	Biz biz;
	Student stu;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int studentNumber;
	do{
		cout << "---------------------------学生借阅证号管理---------------------------" << endl;
		cout << "                               1 新增" << endl;
		cout << "                               2 修改" << endl;
		cout << "                               3 查找" << endl;
		cout << "                               4 删除" << endl;
		cout << "                               5 列表显式" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               学生借阅证号管理 << 新增:" << endl;
			stu = inputStuInfo();
			bb = biz.addStudent(stu);
			if(bb) {
				cout << "                               新增学生借阅证号成功" << endl;
			} else {
				cout << "                               新增学生借阅证号失败" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               学生借阅证号管理 << 修改:" << endl;
			cout << "                               请输入要查询的学生借书证号：" ;
			cin >> studentNumber;
			stu = biz.findByIdStudent(studentNumber);
			if(stu.getStudentNumber() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "------------------------------------------------------------------------------" << endl;
				cout << "                               学生：     姓名：" << stu.getStudentName() << endl;
				cout << "                               学生： 借书证号：" << stu.getStudentNumber() << endl;
				cout << "------------------------------------------------------------------------------" << endl;
				cout << "                               请输入要修改的学生证号信息:" << endl;
				stu = inputStuInfo();
				ok = biz.updateStudent(stu);
				if(ok) {
					cout << "==============================================================================================" << endl;
					cout << "                               修改学生证号信息成功!" << endl;
					cout << "--------------------------------------------------------------------------" << endl;
					cout << "                               学生：     姓名：" << stu.getStudentName() << endl;
					cout << "                               学生： 借书证号：" << stu.getStudentNumber() << endl;
					cout << "--------------------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改学生证号信息失败!" << endl;
				}
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               学生借阅证号管理 << 查找:" << endl;
			cout << "                               请输入要查询的学生借书证号：" ;
			cin >> studentNumber;
			stu = biz.findByIdStudent(studentNumber);
			if(stu.getStudentNumber() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-----------------------------------------------------------------------------" << endl;
				cout << "                               学生：     姓名：" << stu.getStudentName() << endl;
				cout << "                               学生： 借书证号：" << stu.getStudentNumber() << endl;
				cout << "-----------------------------------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               学生借阅证号管理 << 删除:" << endl;
			cout << "                               请输入要删除的学生借书证号：" ;
			cin >> studentNumber;
			ok = biz.deleteByIdStudent(studentNumber);
			if(ok) {
				cout << "                               删除成功!" << endl;
			} else {
				cout << "                               删除失败!" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               学生借阅证号管理 << 列表显式:" << endl;
			biz.findAllStudent();
			system("pause");
			system("cls");
			break;
		default:
			cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}


Teacher inputTeaInfo(){ //教师证号的输入
	char teacherName[30];
	int teacherNumber;
	cout << "                                    请输入姓名：";
	cin >> teacherName;
	cout << "                                请输入借书证号：";
	cin >> teacherNumber;
	Teacher tea(teacherName, teacherNumber);
	return tea;
}
void teacherMethod(){ //教师证号管理界面
	Biz biz;
	Teacher tea;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int teacherNumber;
	do{
		cout << "---------------------------教师借阅证号管理--------------------------" << endl;
		cout << "                               1 新增" << endl;
		cout << "                               2 修改" << endl;
		cout << "                               3 查找" << endl;
		cout << "                               4 删除" << endl;
		cout << "                               5 列表显式" << endl;
		cout << "                               0 退出" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               教师借阅证号管理 << 新增:" << endl;
			tea = inputTeaInfo();
			bb = biz.addTeacher(tea);
			if(bb) {
				cout << "                               新增教师借阅证号信息成功" << endl;
			} else {
				cout << "                               新增教师借阅证号信息失败" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 2:
			cout << "                               教师借阅证号管理 << 修改:" << endl;
			cout << "                               请输入要查询的教师借书证号：" ;
			cin >> teacherNumber;
			tea = biz.findByIdTeacher(teacherNumber);
			if(tea.getTeacherNumber() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "------------------------------------------------------------------------" << endl;
				cout << "                               教师：     姓名：" << tea.getTeacherName() << endl;
				cout << "                               教师： 借书证号：" << tea.getTeacherNumber() << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cout << "                               请输入要修改的教师证号信息:" << endl;
				tea = inputTeaInfo();
				ok = biz.updateTeacher(tea);
				if(ok) {
					cout << "=====================================================================================" << endl;
					cout << "                               修改教师证号成功!" << endl;
					cout << "--------------------------------------------------------------------" << endl;
					cout << "                               教师：     姓名：" << tea.getTeacherName() << endl;
					cout << "                               教师： 借书证号：" << tea.getTeacherNumber() << endl;
					cout << "--------------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改教师证号失败!" << endl;
				}
			}
			system("pause");
            system("cls");
			break;
		case 3:
			cout << "                               教师借阅证号管理 << 查找:" << endl;
			cout << "                               请输入要查询的教师借书证号：" ;
			cin >> teacherNumber;
			tea = biz.findByIdTeacher(teacherNumber);
			if(tea.getTeacherNumber() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-------------------------------------------------------------------" << endl;
				cout << "                               教师：     姓名：" << tea.getTeacherName() << endl;
				cout << "                               教师： 借书证号：" << tea.getTeacherNumber() << endl;
				cout << "-------------------------------------------------------------------" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 4:
			cout << "                               教师借阅证号管理 << 删除:" << endl;
			cout << "                               请输入要删除的教师借书证号：" ;
			cin >> teacherNumber;
			ok = biz.deleteByIdTeacher(teacherNumber);
			if(ok) {
				cout << "                               删除成功!" << endl;
			} else {
				cout << "                               删除失败!" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 5:
			cout << "                               教师借阅证号管理 << 列表显式:" << endl;
			biz.findAllTeacher();
			system("pause");
            system("cls");
			break;
		default:
            cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}

User inputuserInfo(){ //id 姓名 密码的输入
	int id; //10001
	char userName[30];
	char pwd[30];//密码111222333
	cout << "                                 请输入id：";
	cin >> id;
	cout << "                               请输入姓名：";
	cin >> userName;
	cout << "                               请输入密码：";
	cin >> pwd;
	User user(id, userName, pwd);
	return user;
}
void userMethod(){ //管理员证号管理界面
	Biz biz;
	User user;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int id;
	do{
		cout << "---------------------------管理员信息管理---------------------------" << endl;
		cout << "                               1 新增" << endl;
		cout << "                               2 修改" << endl;
		cout << "                               3 查找" << endl;
		cout << "                               4 删除" << endl;
		cout << "                               5 列表显式" << endl;
		cout << "                               0 退出" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               用户信息管理 << 新增:" << endl;
			user = inputuserInfo();
			bb = biz.addUser(user);
			if(bb) {
				cout << "                               新增用户信息成功" << endl;
			} else {
				cout << "                               新增用户信息失败" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 2:                               
			cout << "                               用户信息管理 << 修改:" << endl;
			cout << "                               请输入要查询的用户账号：" ;
			cin >> id;
			user = biz.findByIdUser(id);
			if(user.getId() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "---------------------------------------------------------------------" << endl;
				cout << "                               用户：  id：" << user.getId() << endl;
				cout << "                               用户：姓名：" << user.getUserName() << endl;
				cout << "                               用户：密码：" << user.getPwd() << endl;
				cout << "---------------------------------------------------------------------" << endl;
				cout << "                               请输入要修改的用户信息:" << endl;
				user = inputuserInfo();
				ok = biz.updateUser(user);
				if(ok) {
					cout << "==============================================================================" << endl;
					cout << "                               修改教师信息成功!" << endl;
					cout << "-----------------------------------------------------------------" << endl;
					cout << "                               用户：  id：" << user.getId() << endl;
					cout << "                               用户：姓名：" << user.getUserName() << endl;
					cout << "                               用户：密码：" << user.getPwd() << endl;
					cout << "-----------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改教师信息失败!" << endl;
				}
			}
			system("pause");
            system("cls");
			break;
		case 3:
			cout << "                               用户信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的用户账号：" ;
			cin >> id;
			user = biz.findByIdUser(id);
			if(user.getId() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-------------------------------------------------------------------" << endl;
				cout << "                               用户：  id：" << user.getId() << endl;
				cout << "                               用户：姓名：" << user.getUserName() << endl;
				cout << "                               用户：密码：" << user.getPwd() << endl;
				cout << "-------------------------------------------------------------------" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 4:
			cout << "                               用户信息管理 << 删除:" << endl;
			cout << "                               请输入要查询的用户账号：" ;
			cin >> id;
			ok = biz.deleteByIdUser(id);
			if(ok) {
				cout << "                               删除用户信息成功!" << endl;
			} else {                               
				cout << "                               删除用户信息失败!" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 5:
			cout << "                               用户信息管理 << 列表显式:" << endl;
			biz.findAllUser();
			system("pause");
            system("cls");
			break;
		default:
            cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}

void userStudentMethod(){ //学生密码管理界面
	Biz biz;
	User user;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int id;
	do{
		system("cls");
		cout << "----------------------------学生密码管理----------------------------" << endl;
		cout << "                               1 新增" << endl;
		cout << "                               2 修改" << endl;
		cout << "                               3 查找" << endl;
		cout << "                               4 删除" << endl;
		cout << "                               5 列表显式" << endl;
		cout << "                               0 退出" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               用户信息管理 << 新增:" << endl;
			user = inputuserInfo();
			bb = biz.addUserStudent(user);
			if(bb) {
				cout << "                               新增用户信息成功" << endl;
			} else {
				cout << "                               新增用户信息失败" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 2:
			cout << "                               用户信息管理 << 修改:" << endl;
			cout << "                               请输入要查询的用户账号：" ;
			cin >> id;
			user = biz.findByIdUserStudent(id);
			if(user.getId() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "------------------------------------------------------------------" << endl;
				cout << "                               用户：  id：" << user.getId() << endl;
				cout << "                               用户：姓名：" << user.getUserName() << endl;
				cout << "                               用户：密码：" << user.getPwd() << endl;
				cout << "------------------------------------------------------------------" << endl;
				cout << "                               请输入要修改的用户信息:" << endl;
				user = inputuserInfo();
				ok = biz.updateUserStudent(user);
				if(ok) {
					cout << "===================================================================================" << endl;
					cout << "                               修改教师信息成功!" << endl;
					cout << "-------------------------------------------------------------------" << endl;
					cout << "                               用户：  id：" << user.getId() << endl;
					cout << "                               用户：姓名：" << user.getUserName() << endl;
					cout << "                               用户：密码：" << user.getPwd() << endl;
					cout << "-------------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改教师信息失败!" << endl;
				}
			}
			system("pause");
            system("cls");
			break;
		case 3:
			cout << "                               用户信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的用户账号：" ;
			cin >> id;
			user = biz.findByIdUserStudent(id);
			if(user.getId() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "------------------------------------------------------------------------" << endl;
				cout << "                               用户：  id：" << user.getId() << endl;
				cout << "                               用户：姓名：" << user.getUserName() << endl;
				cout << "                               用户：密码：" << user.getPwd() << endl;
				cout << "------------------------------------------------------------------------" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 4:
			cout << "                               用户信息管理 << 删除:" << endl;
			cout << "                               请输入要删除的用户账号：" ;
			cin >> id;
			ok = biz.deleteByIdUserStudent(id);
			if(ok) {
				cout << "                               删除用户信息成功!" << endl;
			} else {
				cout << "                               删除用户信息失败!" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 5:
			cout << "                               用户信息管理 << 列表显式:" << endl;
			biz.findAllUserStudent();
			system("pause");
            system("cls");
			break;
		default:
            cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}

void userTeacherMethod(){ //教师密码管理界面
	Biz biz;
	User user;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int id;
	do{
		cout << "----------------------------教师密码管理----------------------------" << endl;
		cout << "                               1 新增" << endl;
		cout << "                               2 修改" << endl;
		cout << "                               3 查找" << endl;
		cout << "                               4 删除" << endl;
		cout << "                               5 列表显式" << endl;
		cout << "                               0 退出" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			cout << "                               用户信息管理 << 新增:" << endl;
			user = inputuserInfo();
			bb = biz.addUserTeacher(user);
			if(bb) {
				cout << "                               新增用户信息成功" << endl;
			} else {
				cout << "                               新增用户信息失败" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 2:
			cout << "                               用户信息管理 << 修改:" << endl;
			cout << "                               请输入要查询的用户账号：" ;
			cin >> id;
			user = biz.findByIdUserTeacher(id);
			if(user.getId() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-------------------------------------------------------------------" << endl;
				cout << "                               用户：  id：" << user.getId() << endl;
				cout << "                               用户：姓名：" << user.getUserName() << endl;
				cout << "                               用户：密码：" << user.getPwd() << endl;
				cout << "-------------------------------------------------------------------" << endl;
				cout << "                               请输入要修改的用户信息:" << endl;
				user = inputuserInfo();
				ok = biz.updateUserTeacher(user);
				if(ok) {
					cout << "===============================================================================" << endl;
					cout << "                               修改教师信息成功!" << endl;
					cout << "---------------------------------------------------------------" << endl;
					cout << "                               用户：  id：" << user.getId() << endl;
					cout << "                               用户：姓名：" << user.getUserName() << endl;
					cout << "                               用户：密码：" << user.getPwd() << endl;
					cout << "---------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改教师信息失败!" << endl;
				}
			}
			system("pause");
            system("cls");
			break;
		case 3:
			cout << "                               用户信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的用户账号：" ;
			cin >> id;
			user = biz.findByIdUserTeacher(id);
			if(user.getId() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "----------------------------------------------------------------------" << endl;
				cout << "                               用户：	id：" << user.getId() << endl;
				cout << "                               用户：姓名：" << user.getUserName() << endl;
				cout << "                               用户：密码：" << user.getPwd() << endl;
				cout << "----------------------------------------------------------------------" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 4:
			cout << "                               用户信息管理 << 删除:" << endl;
			cout << "                               请输入要删除的用户账号：" ;
			cin >> id;
			ok = biz.deleteByIdUserTeacher(id);
			if(ok) {
				cout << "                               删除用户信息成功!" << endl;
			} else {
				cout << "                               删除用户信息失败!" << endl;
			}
			system("pause");
            system("cls");
			break;
		case 5:
			cout << "                               用户信息管理 << 列表显式:" << endl;
			biz.findAllUserTeacher();
			system("pause");
            system("cls");
			break;
		default:
            cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);	
}

void userInterface(){ //用户信息管理（密码）界面
	
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "--------------------------------用户信息管理--------------------------------" << endl;
		cout << "                               1 学生密码信息" << endl;
		cout << "                               2 教师密码信息" << endl;
		cout << "                               3 管理员密码信息" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "                               输入要进行的操作：" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			userStudentMethod();
			system("pause");
			break;
		case 2:
			system("cls");
			userTeacherMethod();
			system("pause");
			break;
		case 3:
			system("cls");
			userMethod();
			system("pause");
			break;
		default:
			cout << "                               输入错误！请重新输入" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0);
}


void control(){ //管理员控制界面
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "----------------------------图书馆借阅管理系统----------------------------" << endl;
		cout << "                               1 图书信息" << endl;
		cout << "                               2 杂志信息" << endl;
		cout << "                               3 教师证号信息" << endl;
		cout << "                               4 学生证号信息" << endl;
		cout << "                               5 用户信息" << endl;
		cout << "                               0 退出" << endl;
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "                               输入要进行的操作：" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			libraryMethod();		
			break;
		case 2:
			system("cls");
			magazinesMethod();
			break;
		case 3:
			system("cls");
			teacherMethod();
			break;
		case 4:
			system("cls");
			studentMethod();
			break;
		case 5:
			system("cls");
			userInterface();
			break;
		default:
			cout << "                               输入错误！请重新输入" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0);
}


void enter(){ //管理员登录
	int id; //10001
	char userName[30];
	char pwd[30];
	cout << "                                 请输入id：";
	cin >> id;
	cout << "                               请输入姓名：";
	cin >> userName;
	cout << "                               请输入密码：";
	cin >> pwd;
	User user;
	fstream iof;
	int bb = 0;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (strcmp(user.getPwd(), pwd) == 0 && user.getId() == id && strcmp(user.getUserName(), userName) == 0){//找到了,存在
			cout << "                               登陆成功" << endl;
			system("pause");
			control();
			bb = 1;
			break;
		}
	}
	if(bb == 0){
		cout << "                               用户不存在，登陆失败" << endl;
	}
}

void studentLogin(){ //学生注册
	Biz biz;
	User user;
	user = inputuserInfo();
	biz.addUserStudent(user);
	cout << "                               新增用户信息成功" << endl;
}

void studentEnter(){ //学生登录
	int id; //10001
	char userName[30];
	char pwd[30];//密码111222333
	cout << "                                 请输入id：";
	cin >> id;
	cout << "                               请输入姓名：";
	cin >> userName;
	cout << "                               请输入密码：";
	cin >> pwd;
	User user;
	fstream iof;
	int bb = 0;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (strcmp(user.getPwd(), pwd) == 0 && user.getId() == id && strcmp(user.getUserName(), userName) == 0){//找到了,存在
			cout << "                               登陆成功" << endl;
			system("pause");
			studentInterface();
			bb = 1;
			break;
		}
	}
	if(bb == 0){
		cout << "                               用户不存在，登陆失败" << endl;
	}
}

void teacherLogin(){ //教师注册
	Biz biz;
	User user;
	user = inputuserInfo();
	biz.addUserTeacher(user);
	cout << "                               新增用户信息成功" << endl;
}

void teacherEnter(){ //教师登录
	int id; //10001
	char userName[30];
	char pwd[30];//密码111222333
	cout << "                                 请输入id：";
	cin >> id;
	cout << "                               请输入姓名：";
	cin >> userName;
	cout << "                               请输入密码：";
	cin >> pwd;
	User user;
	fstream iof;
	int bb = 0;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (strcmp(user.getPwd(), pwd) == 0 && user.getId() == id && strcmp(user.getUserName(), userName) == 0){//找到了,存在
			cout << "                               登陆成功" << endl;
			system("pause");
			teacherInterface();
			bb = 1;
			break;
		}
	}
	if(bb == 0){
		cout << "                               用户不存在，登陆失败" << endl;
	}
}

void LoginInterface(){ //注册界面
	
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "-----------------------------图书馆借阅管理系统-----------------------------" << endl;
		cout << "                               1 学生注册" << endl;
		cout << "                               2 教师注册" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "                               输入要进行的操作：" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			studentLogin();
			system("pause");
			break;
		case 2:
			system("cls");
			teacherLogin();
			system("pause");
			break;
		default:
			cout << "                               输入错误！请重新输入" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0);
}

void enterInterface(){ //登录界面
	
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "----------------------------图书馆借阅管理系统----------------------------" << endl;
		cout << "                               1 学生登录" << endl;
		cout << "                               2 教师登录" << endl;
		cout << "                               3 管理员登录" << endl;
		cout << "                               0 退出" << endl;
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "                               输入要进行的操作：" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			studentEnter();
			system("pause");
			system("cls");
			break;
		case 2:
			teacherEnter();
			system("pause");
			system("cls");
			break;
		case 3:
			enter();	
			system("pause");
			system("cls");
			break;
		default:
			cout << "                               输入错误！请重新输入" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0);
}

void studentInterface(){ //学生界面
	Biz biz;
	Magazines maga;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int magazinesCode;
	int studentNumber;
	Library lib;
	int libraryCode;
	do{
		system("cls");
		cout << "----------------------------学生界面管理------------------------------" << endl;
		cout << "                               1 学生证号管理" << endl;
		cout << "                               2 图书查找" << endl;
		cout << "                               3 图书列表显式" << endl;
		cout << "                               4 学生：图书借阅" << endl;
		cout << "                               5 学生：图书借阅列表显式" << endl;
		cout << "                               6 学生：图书归还" << endl;
		cout << "                               7 杂志查找" << endl;
		cout << "                               8 杂志列表显式" << endl;
		cout << "                               9 学生：杂志借阅" << endl;
		cout << "                               10 学生：杂志借阅列表显式" << endl;
		cout << "                               11 学生：杂志归还" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			studentMethod();
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               图书信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的图书条码:";
			cin >> libraryCode;
			lib = biz.findByIdLibrary(libraryCode);
			if(lib.getLibraryCode() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-------------------------------------------------------------------------------------" << endl;
				cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
				cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
				cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
				cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
				cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
				cout << "-------------------------------------------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               图书信息管理 << 列表显式:" << endl;
			biz.findAllLibrary();
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               图书信息管理 << 学生借阅:" << endl;
			biz.libraryStudentLend();
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               图书信息管理 << 学生借阅信息列表显式:" << endl;
			cout << "                               请输入学生的借书证号：" ;
			cin >> studentNumber;
			biz.findByIdLibraryStudentLend(studentNumber);
			system("pause");
			system("cls");
			break;
		case 6:
			cout << "                               图书信息管理 << 学生归还:" << endl;
			biz.libraryStudentReturn();
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "                               杂志信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的杂志条码:";
			cin >> magazinesCode;
			maga = biz.findByIdMagazines(magazinesCode);
			if(maga.getMagazinesCode() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-----------------------------------------------------" << endl;
				cout << "                               杂志：书名   ：" << maga.getMagazinesName() << endl;
				cout << "                               杂志：条码   ：" << maga.getMagazinesCode() << endl;
				cout << "                               杂志：卷号   ：" << maga.getMagazinesNumber() << endl;
				cout << "                               杂志：库存量 ：" << maga.getMagazinesStorage() << endl;
				cout << "-----------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "                               杂志信息管理 << 列表显式:" << endl;
			biz.findAllMagazines();
			system("pause");
			system("cls");
			break;
		case 9:
			cout << "                               杂志信息管理 << 学生借阅:" << endl;
			biz.magazinesStudentLend();
			system("pause");
			system("cls");
			break;
		case 10:
			cout << "                               杂志信息管理 << 学生借阅信息列表显式:" << endl;
			cout << "                               请输入学生的借书证号：" ;
			cin >> studentNumber;
			biz.findByIdMagazinesStudentLend(studentNumber);
			system("pause");
			system("cls");
			break;
		case 11:
			cout << "                               杂志信息管理 << 学生归还:" << endl;
			biz.magazinesStudentReturn();
			system("pause");
			system("cls");
			break;
		default:
            cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);
}

void teacherInterface(){ //教师界面
	Biz biz;
	Magazines maga;
	int aa = 0;
	int bb = 0;
	int ok = 0;
	int magazinesCode;
	int teacherNumber;
	Library lib;
	int libraryCode;
	do{
		system("cls");
		cout << "----------------------------教师界面管理------------------------------" << endl;
		cout << "                               1 教师证号管理" << endl;
		cout << "                               2 图书查找" << endl;
		cout << "                               3 图书列表显式" << endl;
		cout << "                               4 教师：图书借阅" << endl;
		cout << "                               5 教师：图书借阅列表显式" << endl;
		cout << "                               6 教师：图书归还" << endl;
		cout << "                               7 杂志查找" << endl;
		cout << "                               8 杂志列表显式" << endl;
		cout << "                               9 教师：杂志借阅" << endl;
		cout << "                               10 教师：杂志借阅列表显式" << endl;
		cout << "                               11 教师：杂志归还" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               请选择操作:";
		cin >> aa;
		switch(aa) {
		case 0:
			break;
		case 1:
			system("cls");
			teacherMethod();
			system("pause");
			system("cls");
			break;
		case 2:
			cout << "                               图书信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的图书条码:";
			cin >> libraryCode;
			lib = biz.findByIdLibrary(libraryCode);
			if(lib.getLibraryCode() == 0){
				cout << "                               用户不存在" << endl;
			} else {
				cout << "-------------------------------------------------------------------------------------" << endl;
				cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
				cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
				cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
				cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
				cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
				cout << "-------------------------------------------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 3:
			cout << "                               图书信息管理 << 列表显式:" << endl;
			biz.findAllLibrary();
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "                               图书信息管理 << 教师借阅:" << endl;
			biz.libraryTeacherLend();
			system("pause");
			system("cls");
			break;
		case 5:
			cout << "                               图书信息管理 << 教师借阅信息列表显式:" << endl;
			cout << "                               请输入教师的借书证号：" ;
			cin >> teacherNumber;
			biz.findByIdLibraryTeacherLend(teacherNumber);
			system("pause");
			system("cls");
			break;
		case 6:
			cout << "                               图书信息管理 << 教师归还:" << endl;
			biz.libraryTeacherReturn();
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "                               杂志信息管理 << 查找:" << endl;
			cout << "                               请输入要查询的杂志条码:";
			cin >> magazinesCode;
			maga = biz.findByIdMagazines(magazinesCode);
			if(maga.getMagazinesCode() == 0){
				cout << "                               杂志不存在" << endl;
			} else {
				cout << "-----------------------------------------------------" << endl;
				cout << "                               杂志：书名   ：" << maga.getMagazinesName() << endl;
				cout << "                               杂志：条码   ：" << maga.getMagazinesCode() << endl;
				cout << "                               杂志：卷号   ：" << maga.getMagazinesNumber() << endl;
				cout << "                               杂志：库存量 ：" << maga.getMagazinesStorage() << endl;
				cout << "-----------------------------------------------------" << endl;
			}
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "                               杂志信息管理 << 列表显式:" << endl;
			biz.findAllMagazines();
			system("pause");
			system("cls");
			break;
		case 9:
			cout << "                               杂志信息管理 << 教师借阅:" << endl;
			biz.magazinesTeacherLend();
			system("pause");
			system("cls");
			break;
		case 10:
			cout << "                               杂志信息管理 << 教师借阅信息列表显式:" << endl;
			cout << "                               请输入学生的借书证号：" ;
			cin >> teacherNumber;
			biz.findByIdMagazinesTeacherLend(teacherNumber);
			system("pause");
			system("cls");
			break;
		case 11:
			cout << "                               杂志信息管理 << 教师归还:" << endl;
			biz.magazinesTeacherReturn();
			system("pause");
			system("cls");
			break;
		default:
            cout << "                               输入错误！" << endl;
            system("pause");
            system("cls");
		}
	}while(aa != 0);
}