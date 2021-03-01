#include"Biz.h"
/*
int addLibrary(Library &lib); //图书 录入和保存
int updateLibrary(Library &lib); //图书 修改
int deleteByIdLibrary(int libraryCode); //图书 删除
Library findByIdLibrary(int libraryCode); //图书 查找  根据编号查找
void findAllLibrary(); // 图书 查找所有
void libraryStudentLend();// 图书学生借阅
void findByIdLibraryStudentLend(int studentNumber); //根据借书证号查找学生借阅信息
void libraryTeacherLend();// 图书教师借阅
void findByIdLibraryTeacherLend(int teacherNumber); //根据借书证号查找教师借阅信息
void libraryStudentReturn();// 图书学生归还
void libraryTeacherReturn();// 图书教师归还


int addMagazines(Magazines &maga); //杂志 录入和保存
int updateMagazines(Magazines &maga); //杂志 修改
int deleteByIdMagazines(int magazinesCode); //杂志 删除
Magazines findByIdMagazines(int magazinesCode); // 杂志 查找  根据编号查找
void findAllMagazines(); //杂志 查找所有
void magazinesStudentLend();// 杂志学生借阅
void findByIdMagazinesStudentLend(int studentNumber); //根据借书证号查找学生借阅信息
void magazinesTeacherLend();// 杂志教师借阅
void findByIdMagazinesTeacherLend(int teacherNumber); //根据借书证号查找教师借阅信息
void magazinesStudentReturn();// 杂志学生归还
void magazinesTeacherReturn();// 杂志教师归还


int addStudent(Student &stu); //学生 录入和保存
int updateStudent(Student &stu); // 学生 修改
int deleteByIdStudent(int studentNumber); //学生 删除
Student findByIdStudent(int studentNumber); //学生 查找  根据借书证号查找
void findAllStudent(); //学生 查找所有

int addTeacher(Teacher &tea); //教师 录入和保存
int updateTeacher(Teacher &tea); //教师 修改
int deleteByIdTeacher(int teacherNumber); //教师 删除
Teacher findByIdTeacher(int teacherNumber); //教师 查找  根据借书证号查找
void findAllTeacher(); //教师 查找所有

int addUser(User &user); //用户 录入和保存
int updateUser(User &user); //用户 修改
int deleteByIdUser(int id); //用户 删除
User findByIdUser(int id); //用户 查找  根据编号查找
void findAllUser();//用户 查找所有

int addUserStudent(User &user); //学生用户 录入和保存
int updateUserStudent(User &user); //学生用户 修改
int deleteByIdUserStudent(int id); //学生用户 删除
User findByIdUserStudent(int id); //学生用户 查找  根据编号查找
void findAllUserStudent();//学生用户 查找所有

int addUserTeacher(User &user); //教师用户 录入和保存
int updateUserTeacher(User &user); //教师用户 修改
int deleteByIdUserTeacher(int id); //教师用户 删除
User findByIdUserTeacher(int id); //教师用户 查找  根据编号查找
void findAllUserTeacher();//教师用户 查找所有
*/
int Biz::addLibrary(Library &lib){
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&lib, sizeof(Library));
	iof.close();
	return 1;
} 
int Biz::updateLibrary(Library &lib){
	int tag = 0;
	Library oldLibrary;
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&oldLibrary, sizeof(Library));
		if(oldLibrary.getLibraryCode() == lib.getLibraryCode()){
			iof.seekp(-sizeof(Library), ios::cur);
			iof.write((char*)&lib, sizeof(Library));
			tag = 1;
			break;
		}
	}
	return tag;
}
int Biz::deleteByIdLibrary(int libraryCode){
	int tag = 0;
	Library lib;
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&lib, sizeof(Library));
		if (lib.getLibraryCode() == libraryCode){//找到了,存在
			lib.setLibraryCode(0);
			iof.seekp(-sizeof(Library), ios::cur);
			iof.write((char*)&lib, sizeof(Library));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
Library Biz::findByIdLibrary(int libraryCode){ //根据条码进行查找
	Library lib;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&lib, sizeof(Library));
		if (lib.getLibraryCode() == libraryCode){//找到了,存在
			tag = 1;//存在
			break;
		}
	}
	if (tag == 0){
		lib.setLibraryCode(0);
	}
	iof.close();
	return lib;
}
void Biz::findAllLibrary(){
	Library lib;
	fstream iof;
	int a = 1;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "================================================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&lib, sizeof(Library));
		if(lib.getLibraryCode() != 0) {
			cout << "                               第" << a++ << "本图书" << endl;
			cout << "---------------------------------------------------------------------------------------" << endl;
			cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
			cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
			cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
			cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
			cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
			cout << "---------------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "================================================================================================================================" << endl;
	iof.close();
}

void Biz::findByIdLibraryStudentLend(int studentNumber){
	Library lib;
	Student stu;
	int a = 1;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("LibraryStudentLend.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&stu, sizeof(Student));
		iof.read((char*)&lib, sizeof(Library));
		if (studentNumber == 0){
			cout << "                               用户不存在" << endl;
		}
		else{
			if (stu.getStudentNumber() == studentNumber){//找到了,存在
				cout << "                               学生" << stu.getStudentName() << "借阅的第" << a++ << "本图书" << endl;
				cout << "==================================================================================================" << endl;
				cout << "                               学生：      姓名：" << stu.getStudentName() << endl;
				cout << "                               学生：  借书证号：" << stu.getStudentNumber() << endl;
				cout << "----------------------------------------------------------------------------------" << endl;
				cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
				cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
				cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
				cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
				cout << "==================================================================================================" << endl;
			}
		}
	}
	iof.close();
}

void Biz::libraryStudentLend(){// 图书学生借阅
	Biz biz;
	Library lib;
	Library oldlib;
	Library oldliba;
	Student stu;
	Student oldstu;
	int number = 0;
	int libraryCode;
	int studentNumber;
	cout << "                               请输入要借阅的图书条码：" ;
	cin >> libraryCode;
	lib = biz.findByIdLibrary(libraryCode);
	if(lib.getLibraryCode() == 0){
		cout << "                               图书不存在" << endl;
	} 
	else if(lib.getLibraryStorage() == 0){
		cout << "                               该图书已被借完" << endl;
	}
	else {
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
		cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
		cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
		cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
		cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "                               请输入学生的借书证号：" ;
		cin >> studentNumber;
		stu = biz.findByIdStudent(studentNumber);
		if(stu.getStudentNumber() == 0){
			cout << "                               用户不存在" << endl;
		} 
		else {
			cout << "-----------------------------------------------------------------------------------------" << endl;
			cout << "                               学生：     姓名：" << stu.getStudentName() << endl;
			cout << "                               学生： 借书证号：" << stu.getStudentNumber() << endl;
			cout << "-----------------------------------------------------------------------------------------" << endl; 
			fstream iofc;
			iofc.open("LibraryStudentLend.txt", ios::in|ios::out);
			iofc.seekg(0,ios::end);
			long poEnda = iofc.tellg();
			iofc.seekg(0, ios::beg);
			while(iofc.tellg() != poEnda) {
				iofc.read((char*)&oldstu, sizeof(Student));
				iofc.read((char*)&oldliba, sizeof(Library));
				if (oldstu.getStudentNumber() == studentNumber){//找到了,存在
					number++;
				}
			}
			iofc.close();
			if(number >= 3){
				cout << "                               已经借3本图书，达到上限，不可再借" << endl;
			}else{
				fstream iofa;
				fstream iof;
				iofa.open("LibraryStudentLend.txt", ios::in|ios::out);
				iofa.seekp(0,ios::end);
				iofa.write((char*)&stu, sizeof(Student));
				iofa.write((char*)&lib, sizeof(Library));
				cout << "                               借书成功" << endl;
				iof.open("Library.txt", ios::in|ios::out);
				iof.seekg(0, ios::end);
				long poEnd = iof.tellg();
				iof.seekg(0, ios::beg);
				while(iof.tellg() != poEnd) {
					iof.read((char*)&oldlib, sizeof(Library));
					if (oldlib.getLibraryCode() == libraryCode){//找到了,存在
						oldlib.setLibraryStorage(oldlib.getLibraryStorage() - 1);
						iof.seekp(-sizeof(Library), ios::cur);
						iof.write((char*)&oldlib, sizeof(Library));
						break;
					}
				}
				iof.close();
				cout << "==================================================================================================" << endl;
				cout << "                               学生：      姓名：" << stu.getStudentName() << endl;
				cout << "                               学生：  借书证号：" << stu.getStudentNumber() << endl;
				cout << "----------------------------------------------------------------------------------" << endl;
				cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
				cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
				cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
				cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
				cout << "==================================================================================================" << endl;
				iofa.close();
			}
		}
	}
}

void Biz::libraryStudentReturn(){// 图书学生归还
	Biz biz;
	Library lib;
	Library liba;
	Library oldlib;
	Student stu;
	Student stua;
	int libraryCode;
	int studentNumber;
	cout << "                               请输入要归还的图书条码：" ;
	cin >> libraryCode;
	lib = biz.findByIdLibrary(libraryCode);
	if(lib.getLibraryCode() == 0){
		cout << "                               图书不存在" << endl;
	}else{
		cout << "                               请输入学生的借书证号：" ;
		cin >> studentNumber;
		fstream iofb;
		iofb.open("LibraryStudentLend.txt", ios::in|ios::out);
		iofb.seekg(0, ios::end);
		long poEndb = iofb.tellg();
		iofb.seekg(0, ios::beg);
		while(iofb.tellg() != poEndb) {
			iofb.read((char*)&stua, sizeof(Student));
			iofb.read((char*)&liba, sizeof(Library));
			if(liba.getLibraryCode() == libraryCode){
				if(stua.getStudentNumber() == studentNumber) { 
					iofb.close();
					fstream iofa;
					fstream iof;
					cout << "                               还书成功" << endl;
					iof.open("Library.txt", ios::in|ios::out);
					iof.seekg(0, ios::end);
					long poEnd = iof.tellg();
					iof.seekg(0, ios::beg);
					while(iof.tellg() != poEnd) {
						iof.read((char*)&oldlib, sizeof(Library));
						if (oldlib.getLibraryCode() == libraryCode){//找到了,存在
							oldlib.setLibraryStorage(oldlib.getLibraryStorage() + 1);
							iof.seekp(-sizeof(Library), ios::cur);
							iof.write((char*)&oldlib, sizeof(Library));
							break;
						}
					}	
					cout << "=============================================================================================" << endl;
					cout << "                               图书：       作者：" << oldlib.getAuthor() << endl; 
					cout << "                               图书：       条码：" << oldlib.getLibraryCode() << endl; 
					cout << "                               图书：       书名：" << oldlib.getLibraryNmae() << endl;
					cout << "                               图书： 内部分类号：" << oldlib.getLibrarynumber() << endl;
					cout << "                               图书：     库存量：" << oldlib.getLibraryStorage() << endl;
					cout << "=============================================================================================" << endl;
					iof.close();
					iofa.open("LibraryStudentLend.txt", ios::in|ios::out);
					iofa.seekg(0, ios::end);
					long poEnda = iofa.tellg();
					iofa.seekg(0, ios::beg);
					while(iofa.tellg() != poEnda) {
						iofa.read((char*)&stu, sizeof(Student));
						iofa.read((char*)&lib, sizeof(Library));
						if (lib.getLibraryCode() == libraryCode && stu.getStudentNumber() ==studentNumber){ //找到了,存在
							stu.setStudentNumber(0);
							iofa.seekp(-sizeof(Library), ios::cur);
							iofa.seekp(-sizeof(Student), ios::cur);
							iofa.write((char*)&stu, sizeof(Student));
							iofa.write((char*)&oldlib, sizeof(Library));
							break;
						}
					}
					iofa.close();
					break;
				}
			}
		}
		iofb.close();
	}
}

void Biz::libraryTeacherReturn(){// 图书教师归还
	Biz biz;
	Library lib;
	Library oldlib;
	Teacher tea;
	int libraryCode;
	int teacherNumber;
	cout << "                               请输入要归还的图书条码：" ;
	cin >> libraryCode;
	lib = biz.findByIdLibrary(libraryCode);
	if(lib.getLibraryCode() == 0){
		cout << "                               图书不存在" << endl;
	}else{
		cout << "                               请输入教师的借书证号：" ;
		cin >> teacherNumber;
		fstream iofb;
		iofb.open("LibraryTeacherLend.txt", ios::in|ios::out);
		iofb.seekg(0, ios::end);
		long poEndb = iofb.tellg();
		iofb.seekg(0, ios::beg);
		while(iofb.tellg() != poEndb) {
			iofb.read((char*)&tea, sizeof(Teacher));
			iofb.read((char*)&lib, sizeof(Library));
			if(lib.getLibraryCode() == libraryCode){
				if(tea.getTeacherNumber() == teacherNumber) { 
					iofb.close();
					fstream iofa;
					fstream iof;
					cout << "                               还书成功" << endl;
					iof.open("Library.txt", ios::in|ios::out);
					iof.seekg(0, ios::end);
					long poEnd = iof.tellg();
					iof.seekg(0, ios::beg);
					while(iof.tellg() != poEnd) {
						iof.read((char*)&oldlib, sizeof(Library));
						if (oldlib.getLibraryCode() == libraryCode){//找到了,存在
							oldlib.setLibraryStorage(oldlib.getLibraryStorage() + 1);
							iof.seekp(-sizeof(Library), ios::cur);
							iof.write((char*)&oldlib, sizeof(Library));
							break;
						}
					}	
					cout << "=============================================================================================" << endl;
					cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
					cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
					cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
					cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
					cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
					cout << "=============================================================================================" << endl;
					iof.close();
					iofa.open("LibraryTeacherLend.txt", ios::in|ios::out);
					iofa.seekg(0, ios::end);
					long poEnda = iofa.tellg();
					iofa.seekg(0, ios::beg);
					while(iofa.tellg() != poEnda) {
						iofa.read((char*)&tea, sizeof(Teacher));
						iofa.read((char*)&lib, sizeof(Library));
						if (lib.getLibraryCode() == libraryCode && tea.getTeacherNumber() == teacherNumber){ //找到了,存在
							tea.setTeacherNumber(0);
							iofa.seekp(-sizeof(Library), ios::cur);
							iofa.seekp(-sizeof(Teacher), ios::cur);
							iofa.write((char*)&tea, sizeof(Teacher));
							iofa.write((char*)&lib, sizeof(Library));
							break;
						}
					}
					iofa.close();
					break;
				}
			}
		}
		iofb.close();
	}		
}

void Biz::libraryTeacherLend(){// 图书教师借阅
	Biz biz;
	Library lib;
	Library oldlib;
	Library oldliba;
	Teacher tea;
	Teacher oldtea;
	int libraryCode;
	int teacherNumber;
	int b = 1;
	int number = 0;
	cout << "                               请输入要借阅的图书条码：" ;
	cin >> libraryCode;
	lib = biz.findByIdLibrary(libraryCode);
	if(lib.getLibraryCode() == 0){
		cout << "                               图书不存在" << endl;
	} 
	else if(lib.getLibraryStorage() == 0){
		cout << "                               该图书已被借完" << endl;
	}
	else {
		cout << "----------------------------------------------------------------------------------------------" << endl;
		cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
		cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
		cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
		cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
		cout << "                               图书：     库存量：" << lib.getLibraryStorage() << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "                               请输入教师的借书证号：" ;
		cin >> teacherNumber;
		tea = biz.findByIdTeacher(teacherNumber);
		if(tea.getTeacherNumber() == 0){
			cout << "                               用户不存在" << endl;
		} 
		else {
			cout << "-----------------------------------------------------------------------------------------------" << endl;
			cout << "                               教师：     姓名：" << tea.getTeacherName() << endl;
			cout << "                               教师： 借书证号：" << tea.getTeacherNumber() << endl;
			cout << "-----------------------------------------------------------------------------------------------" << endl;
			fstream iofc;
			iofc.open("LibraryTeacherLend.txt", ios::in|ios::out);
			iofc.seekg(0,ios::end);
			long poEnda = iofc.tellg();
			iofc.seekg(0, ios::beg);
			while(iofc.tellg() != poEnda) {
				iofc.read((char*)&oldtea, sizeof(Student));
				iofc.read((char*)&oldliba, sizeof(Library));
				if (oldtea.getTeacherNumber() == teacherNumber){//找到了,存在
					number++;
				}
			}
			iofc.close();
			if(number >= 5){
				cout << "                               已经借5本图书，达到上限，不可再借" << endl;
			}else{
				fstream iofa;
				fstream iof;
				iofa.open("LibraryTeacherLend.txt", ios::in|ios::out);
				iofa.seekp(0,ios::end);
				iofa.write((char*)&tea, sizeof(Teacher));
				iofa.write((char*)&lib, sizeof(Library));
				cout << "                               借书成功" << endl;
				iof.open("Library.txt", ios::in|ios::out);
				iof.seekg(0, ios::end);
				long poEnd = iof.tellg();
				iof.seekg(0, ios::beg);
				while(iof.tellg() != poEnd) {
					iof.read((char*)&oldlib, sizeof(Library));
					if (oldlib.getLibraryCode() == libraryCode){//找到了,存在
						oldlib.setLibraryStorage(oldlib.getLibraryStorage() - 1);
						iof.seekp(-sizeof(Library), ios::cur);
						iof.write((char*)&oldlib, sizeof(Library));
						break;
					}
				}
				iof.close();
				cout << "=============================================================================================" << endl;
				cout << "                               教师：      姓名：" << tea.getTeacherName() << endl;
				cout << "                               教师：  借书证号：" << tea.getTeacherNumber() << endl;
				cout << "-------------------------------------------------------------------------------" << endl;
				cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
				cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
				cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
				cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
				cout << "=============================================================================================" << endl;
				iofa.close();
			}
		}
	}
}

void Biz::findByIdLibraryTeacherLend(int teacherNumber){//根据借书证号查找教师借阅信息
		Library lib;
		Teacher tea;
		int tag = 0;//用户不存在
		int a = 1;
		fstream iof;
		iof.open("LibraryTeacherLend.txt", ios::in|ios::out);
		iof.seekg(0, ios::end);
		long poEnd = iof.tellg();
		iof.seekg(0, ios::beg);
		while(iof.tellg() != poEnd) {
			iof.read((char*)&tea, sizeof(Teacher));
			iof.read((char*)&lib, sizeof(Library));
			if (teacherNumber == 0){
				cout << "                               用户不存在" << endl;
			}
			else{
				if (tea.getTeacherNumber() == teacherNumber){//找到了,存在
					cout << "                               教师" << tea.getTeacherName() << "借阅的第" << a++ << "本图书" << endl;
					cout << "============================================================================================" << endl;
					cout << "                               教师：      姓名：" << tea.getTeacherName() << endl;
					cout << "                               教师：  借书证号：" << tea.getTeacherNumber() << endl;
					cout << "---------------------------------------------------------------------------" << endl;
					cout << "                               图书：       作者：" << lib.getAuthor() << endl; 
					cout << "                               图书：       条码：" << lib.getLibraryCode() << endl; 
					cout << "                               图书：       书名：" << lib.getLibraryNmae() << endl;
					cout << "                               图书： 内部分类号：" << lib.getLibrarynumber() << endl;
					cout << "============================================================================================" << endl;
				}
			}
		}
		iof.close();
}


int Biz::addMagazines(Magazines &maga){
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&maga, sizeof(Magazines));
	iof.close();
	return 1;
}
int Biz::updateMagazines(Magazines &maga){
	int tag = 0;
	Magazines old;
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(Magazines));
		if(old.getMagazinesCode() == maga.getMagazinesCode()){
			iof.seekp(-sizeof(Magazines), ios::cur);
			iof.write((char*)&maga, sizeof(Magazines));
			tag = 1;
			break;
		}
	}
	return tag;
}
int Biz::deleteByIdMagazines(int magazinesCode){
	int tag = 0;
	Magazines maga;
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&maga, sizeof(Magazines));
		if (maga.getMagazinesCode() == magazinesCode){//找到了,存在
			maga.setMagazinesCode(0);
			iof.seekp(-sizeof(Magazines), ios::cur);
			iof.write((char*)&maga, sizeof(Magazines));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
Magazines Biz::findByIdMagazines(int magazinesCode){
	Magazines maga;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&maga, sizeof(Magazines));
		if (maga.getMagazinesCode() == magazinesCode){//找到了,存在
			tag = 1;//存在
			break;
		}
	}
	//即便是没找到
	if (tag == 0){
		maga.setMagazinesCode(0);
	}
	iof.close();
	return maga;
}
void Biz::findAllMagazines(){
	Magazines maga;
	fstream iof;
	int a = 1;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "==============================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&maga, sizeof(Magazines));
		if(maga.getMagazinesCode() != 0) {
			cout << "                               第" << a++ << "本杂志" << endl;
			cout << "------------------------------------------------------------------------------------------" << endl;
			cout << "                               杂志：   书名：" << maga.getMagazinesName() << endl;
			cout << "                               杂志：   条码：" << maga.getMagazinesCode() << endl;
			cout << "                               杂志：   卷号：" << maga.getMagazinesNumber() << endl;
			cout << "                               杂志： 库存量：" << maga.getMagazinesStorage() << endl;
			cout << "------------------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "==============================================================================================================" << endl;
	iof.close();
}
void Biz::magazinesStudentLend(){// 杂志学生借阅
	Biz biz;
	Magazines maga;
	Magazines oldmaga;
	Magazines oldmagab;
	Student stu;
	Student oldstu;
	int magazinesCode;
	int studentNumber;
	int number;
	int b = 1;
	cout << "                               请输入要借阅的杂志条码：" ;
	cin >> magazinesCode;
	maga = biz.findByIdMagazines(magazinesCode);
	if(maga.getMagazinesCode() == 0){
		cout << "                               杂志不存在" << endl;
	} 
	else if(maga.getMagazinesStorage() == 0){
		cout << "                               该杂志已被借完" << endl;
	}
	else {
		cout << "--------------------------------------------------------------------------------------------" << endl;
		cout << "                               杂志：   书名：" << maga.getMagazinesName() << endl;
		cout << "                               杂志：   条码：" << maga.getMagazinesCode() << endl;
		cout << "                               杂志：   卷号：" << maga.getMagazinesNumber() << endl;
		cout << "                               杂志： 库存量：" << maga.getMagazinesStorage() << endl;
		cout << "--------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "                               请输入学生的借书证号：" ;
		cin >> studentNumber;
		stu = biz.findByIdStudent(studentNumber);
		if(stu.getStudentNumber() == 0){
			cout << "                               用户不存在" << endl;
		} 
		else {
			cout << "-----------------------------------------------------------------------------------------------" << endl;
			cout << "                               学生：     姓名：" << stu.getStudentName() << endl;
			cout << "                               学生： 借书证号：" << stu.getStudentNumber() << endl;
			cout << "-----------------------------------------------------------------------------------------------" << endl; 
			fstream iofc;
			iofc.open("MagazinesStudentLend.txt", ios::in|ios::out);
			iofc.seekg(0,ios::end);
			long poEnda = iofc.tellg();
			iofc.seekg(0, ios::beg);
			while(iofc.tellg() != poEnda) {
				iofc.read((char*)&oldstu, sizeof(Student));
				iofc.read((char*)&oldmagab, sizeof(Magazines));
				if (oldstu.getStudentNumber() == studentNumber){//找到了,存在
					number++;
				}
			}
			iofc.close();
			if(number >= 5){
				cout << "                               已经借5本杂志，达到上限，不可再借" << endl;
			}else{
				fstream iofa;
				fstream iof;
				iofa.open("MagazinesStudentLend.txt", ios::in|ios::out);
				iofa.seekp(0,ios::end);
				iofa.write((char*)&stu, sizeof(Student));
				iofa.write((char*)&maga, sizeof(Magazines));
				cout << "                               借杂志成功" << endl;
				iof.open("Magazines.txt", ios::in|ios::out);
				iof.seekg(0, ios::end);
				long poEnd = iof.tellg();
				iof.seekg(0, ios::beg);
				while(iof.tellg() != poEnd) {
					iof.read((char*)&oldmaga, sizeof(Magazines));
					if (maga.getMagazinesCode() == magazinesCode){//找到了,存在
						oldmaga.setMagazinesStorage(oldmaga.getMagazinesStorage() - 1);
						iof.seekp(-sizeof(Magazines), ios::cur);
						iof.write((char*)&oldmaga, sizeof(Magazines));
						break;
					}
				}
				iof.close();
				cout << "===============================================================================================" << endl;
				cout << "                               学生：     姓名：" << stu.getStudentName() << endl;
				cout << "                               学生： 借书证号：" << stu.getStudentNumber() << endl;
				cout << "----------------------------------------------------------------------------------" << endl;
				cout << "                               杂志：     书名：" << maga.getMagazinesName() << endl;
				cout << "                               杂志：     条码：" << maga.getMagazinesCode() << endl;
				cout << "                               杂志：     卷号：" << maga.getMagazinesNumber() << endl;
				cout << "===============================================================================================" << endl;
				iofa.close();
			}
		}
	}
}

void Biz::magazinesStudentReturn(){// 杂志学生归还
	Biz biz;
	Magazines maga;
	Magazines oldmaga;
	Student stu;
	int magazinesCode;
	int studentNumber;
	cout << "                               请输入要归还的杂志条码：" ;
	cin >> magazinesCode;
	maga = biz.findByIdMagazines(magazinesCode);
	if(maga.getMagazinesCode() == 0){
		cout << "                               杂志不存在" << endl;
	}else{
		cout << "                               请输入学生的借书证号：" ;
		cin >> studentNumber;
		fstream iofb;
		iofb.open("MagazinesStudentLend.txt", ios::in|ios::out);
		iofb.seekg(0, ios::end);
		long poEndb = iofb.tellg();
		iofb.seekg(0, ios::beg);
		while(iofb.tellg() != poEndb) {
			iofb.read((char*)&stu, sizeof(Student));
			iofb.read((char*)&maga, sizeof(Magazines));
			if(maga.getMagazinesCode() == magazinesCode){
				if(stu.getStudentNumber() == studentNumber) { 
					iofb.close();
					fstream iofa;
					fstream iof;
					cout << "                               还书成功" << endl;
					iof.open("Magazines.txt", ios::in|ios::out);
					iof.seekg(0, ios::end);
					long poEnd = iof.tellg();
					iof.seekg(0, ios::beg);
					while(iof.tellg() != poEnd) {
						iof.read((char*)&oldmaga, sizeof(Magazines));
						if (oldmaga.getMagazinesCode() == magazinesCode){//找到了,存在
							oldmaga.setMagazinesStorage(oldmaga.getMagazinesStorage() + 1);
							iof.seekp(-sizeof(Magazines), ios::cur);
							iof.write((char*)&oldmaga, sizeof(Magazines));
							break;
						}
					}	
					cout << "============================================================================================" << endl;
					cout << "                               杂志：   书名：" << maga.getMagazinesName() << endl;
					cout << "                               杂志：   条码：" << maga.getMagazinesCode() << endl;
					cout << "                               杂志：   卷号：" << maga.getMagazinesNumber() << endl;
					cout << "                               杂志： 库存量：" << maga.getMagazinesStorage() << endl;
					cout << "============================================================================================" << endl;
					iof.close();
					iofa.open("MagazinesStudentLend.txt", ios::in|ios::out);
					iofa.seekg(0, ios::end);
					long poEnda = iofa.tellg();
					iofa.seekg(0, ios::beg);
					while(iofa.tellg() != poEnda) {
						iofa.read((char*)&stu, sizeof(Student));
						iofa.read((char*)&maga, sizeof(Magazines));
						if (maga.getMagazinesCode() == magazinesCode && stu.getStudentNumber() ==studentNumber){ //找到了,存在
							stu.setStudentNumber(0);
							iofa.seekp(-sizeof(Magazines), ios::cur);
							iofa.seekp(-sizeof(Student), ios::cur);
							iofa.write((char*)&stu, sizeof(Student));
							iofa.write((char*)&maga, sizeof(Magazines));
							break;
						}
					}
					iofa.close();
					break;
				}
			}
		}
		iofb.close();
	}		
}
void Biz::magazinesTeacherReturn(){// 杂志教师归还
	Biz biz;
	Magazines maga;
	Magazines oldmaga;
	Teacher tea;
	int magazinesCode;
	int teacherNumber;
	cout << "                               请输入要归还的杂志条码：" ;
	cin >> magazinesCode;
	maga = biz.findByIdMagazines(magazinesCode);
	if(maga.getMagazinesCode() == 0){
		cout << "                               杂志不存在" << endl;
	}else{
		cout << "                               请输入教师的借书证号：" ;
		cin >> teacherNumber;
		fstream iofb;
		iofb.open("MagazinesTeacherLend.txt", ios::in|ios::out);
		iofb.seekg(0, ios::end);
		long poEndb = iofb.tellg();
		iofb.seekg(0, ios::beg);
		while(iofb.tellg() != poEndb) {
			iofb.read((char*)&tea, sizeof(Teacher));
			iofb.read((char*)&maga, sizeof(Magazines));
			if(maga.getMagazinesCode() == magazinesCode){
				if(tea.getTeacherNumber() == teacherNumber) { 
					iofb.close();
					fstream iofa;
					fstream iof;
					cout << "                               还书成功" << endl;
					iof.open("Magazines.txt", ios::in|ios::out);
					iof.seekg(0, ios::end);
					long poEnd = iof.tellg();
					iof.seekg(0, ios::beg);
					while(iof.tellg() != poEnd) {
						iof.read((char*)&oldmaga, sizeof(Magazines));
						if (oldmaga.getMagazinesCode() == magazinesCode){//找到了,存在
							oldmaga.setMagazinesStorage(oldmaga.getMagazinesStorage() + 1);
							iof.seekp(-sizeof(Magazines), ios::cur);
							iof.write((char*)&oldmaga, sizeof(Magazines));
							break;
						}
					}	
					cout << "==========================================================================================" << endl;
					cout << "                               杂志：   书名：" << maga.getMagazinesName() << endl;
					cout << "                               杂志：   条码：" << maga.getMagazinesCode() << endl;
					cout << "                               杂志：   卷号：" << maga.getMagazinesNumber() << endl;
					cout << "                               杂志： 库存量：" << maga.getMagazinesStorage() << endl;
					cout << "==========================================================================================" << endl;
					iof.close();
					iofa.open("MagazinesTeacherLend.txt", ios::in|ios::out);
					iofa.seekg(0, ios::end);
					long poEnda = iofa.tellg();
					iofa.seekg(0, ios::beg);
					while(iofa.tellg() != poEnda) {
						iofa.read((char*)&tea, sizeof(Teacher));
						iofa.read((char*)&maga, sizeof(Magazines));
						if (maga.getMagazinesCode() == magazinesCode && tea.getTeacherNumber() == teacherNumber){ //找到了,存在
							tea.setTeacherNumber(0);
							iofa.seekp(-sizeof(Magazines), ios::cur);
							iofa.seekp(-sizeof(Teacher), ios::cur);
							iofa.write((char*)&tea, sizeof(Teacher));
							iofa.write((char*)&maga, sizeof(Magazines));
							break;
						}
					}
					iofa.close();
					break;
				}
			}
		}
		iofb.close();
	}		
}

void Biz::findByIdMagazinesStudentLend(int studentNumber){ //根据借书证号查找学生借阅信息
	Student stu;
	Magazines maga;
	int tag = 0;//用户不存在
	fstream iof;
	int a = 1;
	iof.open("MagazinesStudentLend.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&stu, sizeof(Student));
		iof.read((char*)&maga, sizeof(Magazines));
		if (studentNumber == 0){
			cout << "                               用户不存在" << endl;
		}
		else{
			if (stu.getStudentNumber() == studentNumber){//找到了,存在
				cout << "                               学生" << stu.getStudentName() << "借阅的第" << a++ << "本杂志" << endl;
				cout << "==============================================================================================" << endl;
				cout << "                               学生：     姓名：" << stu.getStudentName() << endl;
				cout << "                               学生： 借书证号：" << stu.getStudentNumber() << endl;
				cout << "-----------------------------------------------------" << endl;
				cout << "                               杂志：     书名：" << maga.getMagazinesName() << endl;
				cout << "                               杂志：     条码：" << maga.getMagazinesCode() << endl;
				cout << "                               杂志：     卷号：" << maga.getMagazinesNumber() << endl;
				cout << "==============================================================================================" << endl;
			}
		}
	}
	iof.close();
}
void Biz::magazinesTeacherLend(){// 杂志教师借阅
	Biz biz;
	Magazines maga;
	Magazines oldmaga;
	Magazines oldmagab;
	Teacher tea;
	Teacher oldtea;
	int magazinesCode;
	int teacherNumber;
	int number;
	int b = 1;
	cout << "                               请输入要借阅的杂志条码：" ;
	cin >> magazinesCode;
	maga = biz.findByIdMagazines(magazinesCode);
	if(maga.getMagazinesCode() == 0){
		cout << "                               杂志不存在" << endl;
	} 
	else if(maga.getMagazinesStorage() == 0){
		cout << "                               该杂志已被借完" << endl;
	}
	else {
		cout << "-----------------------------------------------------------------------------------------" << endl;
		cout << "                               杂志：   书名：" << maga.getMagazinesName() << endl;
		cout << "                               杂志：   条码：" << maga.getMagazinesCode() << endl;
		cout << "                               杂志：   卷号：" << maga.getMagazinesNumber() << endl;
		cout << "                               杂志： 库存量：" << maga.getMagazinesStorage() << endl;
		cout << "-----------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "                              请输入教师的借书证号：" ;
		cin >> teacherNumber;
		tea = biz.findByIdTeacher(teacherNumber);
		if(tea.getTeacherNumber() == 0){
			cout << "                              用户不存在" << endl;
		} 
		else {
			cout << "-----------------------------------------------------------------------------------------" << endl;
			cout << "                              教师：     姓名：" << tea.getTeacherName() << endl;
			cout << "                              教师： 借书证号：" << tea.getTeacherNumber() << endl;
			cout << "-----------------------------------------------------------------------------------------" << endl; 
			fstream iofc;
			iofc.open("MagazinesTeacherLend.txt", ios::in|ios::out);
			iofc.seekg(0,ios::end);
			long poEnda = iofc.tellg();
			iofc.seekg(0, ios::beg);
			while(iofc.tellg() != poEnda) {
				iofc.read((char*)&oldtea, sizeof(Student));
				iofc.read((char*)&oldmagab, sizeof(Magazines));
				if (oldtea.getTeacherNumber() == teacherNumber){//找到了,存在
					number++;
				}
			}
			iofc.close();
			if(number >= 10){
				cout << "                               已经借10本杂志，达到上限，不可再借" << endl;
			}else{
				fstream iofa;
				fstream iof;
				iofa.open("MagazinesTeacherLend.txt", ios::in|ios::out);
				iofa.seekp(0,ios::end);
				iofa.write((char*)&tea, sizeof(Teacher));
				iofa.write((char*)&maga, sizeof(Magazines));
				cout << "                              借书成功" << endl;
				iof.open("Magazines.txt", ios::in|ios::out);
				iof.seekg(0, ios::end);
				long poEnd = iof.tellg();
				iof.seekg(0, ios::beg);
				while(iof.tellg() != poEnd) {
					iof.read((char*)&oldmaga, sizeof(Magazines));
					if (maga.getMagazinesCode() == magazinesCode){//找到了,存在
						oldmaga.setMagazinesStorage(oldmaga.getMagazinesStorage() - 1);
						iof.seekp(-sizeof(Magazines), ios::cur);
						iof.write((char*)&oldmaga, sizeof(Magazines));
						break;
					}
				}
				iof.close();
				cout << "================================================================================================" << endl;
				cout << "                              教师：     姓名：" << tea.getTeacherName() << endl;
				cout << "                              教师： 借书证号：" << tea.getTeacherNumber() << endl;
				cout << "----------------------------------------------------------------------------------" << endl;
				cout << "                              杂志：   书名：" << maga.getMagazinesName() << endl;
				cout << "                              杂志：   条码：" << maga.getMagazinesCode() << endl;
				cout << "                              杂志：   卷号：" << maga.getMagazinesNumber() << endl;
				cout << "================================================================================================" << endl;
				iofa.close();
			}
		}
	}
}
void Biz::findByIdMagazinesTeacherLend(int teacherNumber){ //根据借书证号查找教师借阅信息
	Teacher tea;
	Magazines maga;
	int tag = 0;//用户不存在
	int a = 1;
	fstream iof;
	iof.open("MagazinesTeacherLend.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&tea, sizeof(Teacher));
		iof.read((char*)&maga, sizeof(Magazines));
		if (teacherNumber == 0){
			cout << "                              用户不存在" << endl;
		}
		else{
			if (tea.getTeacherNumber() == teacherNumber){//找到了,存在
				cout << "                               教师" << tea.getTeacherName() << "借阅的第" << a++ << "本杂志" << endl;
				cout << "=====================================================================================================" << endl;
				cout << "                              教师：姓名     ：" << tea.getTeacherName() << endl;
				cout << "                              教师：借书证号 ：" << tea.getTeacherNumber() << endl;
				cout << "-----------------------------------------------------------------------------------" << endl;
				cout << "                              杂志：书名   ：" << maga.getMagazinesName() << endl;
				cout << "                              杂志：条码   ：" << maga.getMagazinesCode() << endl;
				cout << "                              杂志：卷号   ：" << maga.getMagazinesNumber() << endl;
				cout << "=====================================================================================================" << endl;
			}
		}
	}
	iof.close();
}


int Biz::addStudent(Student &stu){
	fstream iof;
	iof.open("Student.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&stu, sizeof(Student));
	iof.close();
	return 1;
}
int Biz::updateStudent(Student &stu){
	int tag = 0;
	Student old;
	fstream iof;
	iof.open("Student.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(Student));
		if(old.getStudentNumber() == stu.getStudentNumber()){
			iof.seekp(-sizeof(Student), ios::cur);
			iof.write((char*)&stu, sizeof(Student));
			tag = 1;
			break;
		}
	}
	return tag;
}
int Biz::deleteByIdStudent(int studentNumber){
	int tag = 0;
	Student stu;
	fstream iof;
	iof.open("Student.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&stu, sizeof(Student));
		if (stu.getStudentNumber() == studentNumber){//找到了,存在
			stu.setStudentNumber(0);
			iof.seekp(-sizeof(Student), ios::cur);
			iof.write((char*)&stu, sizeof(Student));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
Student Biz::findByIdStudent(int studentNumber){
	Student stu;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("Student.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&stu, sizeof(Student));
		if (stu.getStudentNumber() == studentNumber){//找到了,存在
			tag = 1;//存在
			break;
		}
	}
	//即便是没找到
	if (tag == 0){
		stu.setStudentNumber(0);
	}
	iof.close();
	return stu;
}
void Biz::findAllStudent(){
	Student stu;
	fstream iof;
	int a = 1;
	iof.open("student.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "========================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&stu, sizeof(Student));
		if(stu.getStudentNumber() != 0){
			cout << "                              第" << a++ << "个学生" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			cout << "                              学生：     姓名：" << stu.getStudentName() << endl;
			cout << "                              学生： 借书证号：" << stu.getStudentNumber() << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "========================================================================================================" << endl;
	iof.close();
}



int Biz::addTeacher(Teacher &tea){
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&tea, sizeof(Teacher));
	iof.close();
	return 1;
}
int Biz::updateTeacher(Teacher &tea){
	int tag = 0;
	Teacher old;
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(Teacher));
		if(old.getTeacherNumber() == tea.getTeacherNumber()){
			iof.seekp(-sizeof(Teacher), ios::cur);
			iof.write((char*)&tea, sizeof(Teacher));
			tag = 1;
			break;
		}
	}
	return tag;
}
int Biz::deleteByIdTeacher(int teacherNumber){
	int tag = 0;
	Teacher tea;
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&tea, sizeof(Teacher));
		if (tea.getTeacherNumber() == teacherNumber){//找到了,存在
			tea.setTeacherNumber(0);
			iof.seekp(-sizeof(Teacher), ios::cur);
			iof.write((char*)&tea, sizeof(Teacher));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
Teacher Biz::findByIdTeacher(int teacherNumber){
	Teacher tea;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&tea, sizeof(Teacher));
		if (tea.getTeacherNumber() == teacherNumber){//找到了,存在
			tag = 1;//存在
			break;
		}
	}
	//即便是没找到
	if (tag == 0){
		tea.setTeacherNumber(0);
	}
	iof.close();
	return tea;
}
void Biz::findAllTeacher(){
	Teacher tea;
	fstream iof;
	int a = 1;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "========================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&tea, sizeof(Teacher));
		if(tea.getTeacherNumber() != 0){
			cout << "                              第" << a++ << "个教师" << endl;
			cout << "-----------------------------------------------------------------------------------" << endl;
			cout << "                              教师：     姓名：" << tea.getTeacherName() << endl;
			cout << "                              教师： 借书证号：" << tea.getTeacherNumber() << endl;
			cout << "------------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "========================================================================================================" << endl;
	iof.close();
}

int Biz::addUser(User &user){
	fstream iof;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&user, sizeof(User));
	iof.close();
	return 1;
}
int Biz::updateUser(User &user){
	int tag = 0;
	User old;
	fstream iof;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(User));
		if(old.getId() == user.getId()){
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	return tag;
} 
int Biz::deleteByIdUser(int id){
	int tag = 0;
	User user;
	fstream iof;
	iof.open("user.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//找到了,存在
			user.setId(0);
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
} 
User Biz::findByIdUser(int id){
	User user;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//找到了,存在
			tag = 1;//存在
			break;
		}
	}
	//即便是没找到
	if (tag == 0){
		user.setId(0);
	}
	iof.close();
	return user;
} 
void Biz::findAllUser(){
	User user;
	fstream iof;
	int a = 1;
	iof.open("User.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "====================================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&user, sizeof(User));
		if(user.getId() != 0) {
			cout << "                              第" << a++ << "个管理员" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			cout << "                              用户：   id：" << user.getId() << endl;
			cout << "                              用户： 姓名：" << user.getUserName() << endl;
			cout << "                              用户： 密码：" << user.getPwd() << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "====================================================================================================" << endl;
	iof.close();
}

int Biz::addUserStudent(User &user){
	fstream iof;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&user, sizeof(User));
	iof.close();
	return 1;
} //学生用户 录入和保存
int Biz::updateUserStudent(User &user){
	int tag = 0;
	User old;
	fstream iof;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(User));
		if(old.getId() == user.getId()){
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	return tag;
} //学生用户 修改
int Biz::deleteByIdUserStudent(int id){
	int tag = 0;
	User user;
	fstream iof;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//找到了,存在
			user.setId(0);
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
} //学生用户 删除
User Biz::findByIdUserStudent(int id){
	User user;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//找到了,存在
			tag = 1;//存在
			break;
		}
	}
	//即便是没找到
	if (tag == 0){
		user.setId(0);
	}
	iof.close();
	return user;
}//学生用户 查找  根据编号查找
void Biz::findAllUserStudent(){
	User user;
	fstream iof;
	int b = 1;
	iof.open("UserStudent.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "===============================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&user, sizeof(User));
		if(user.getId() != 0) {
			cout << "                              第" << b++ << "个学生" << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << "                              学生：  id：" << user.getId() << endl;
			cout << "                              学生：姓名：" << user.getUserName() << endl;
			cout << "                              学生：密码：" << user.getPwd() << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "===============================================================================================" << endl;
	iof.close();
}

int Biz::addUserTeacher(User &user){
	fstream iof;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&user, sizeof(User));
	iof.close();
	return 1;
}//教师用户 录入和保存
int Biz::updateUserTeacher(User &user){
	int tag = 0;
	User old;
	fstream iof;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekp(0, ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&old, sizeof(User));
		if(old.getId() == user.getId()){
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	return tag;
}//教师用户 修改
int Biz::deleteByIdUserTeacher(int id){
	int tag = 0;
	User user;
	fstream iof;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//找到了,存在
			user.setId(0);
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
} //教师用户 删除
User Biz::findByIdUserTeacher(int id){
	User user;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//找到了,存在
			tag = 1;//存在
			break;
		}
	}
	//即便是没找到
	if (tag == 0){
		user.setId(0);
	}
	iof.close();
	return user;
} //教师用户 查找  根据编号查找
void Biz::findAllUserTeacher(){
	User user;
	fstream iof;
	int b = 1;
	iof.open("UserTeacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "===============================================================================================" << endl;
	while(iof.tellp() != poEnd){
		iof.read((char*)&user, sizeof(User));
		if(user.getId() != 0) {
			cout << "                              第" << b++ << "个教师" << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << "                              教师：  id：" << user.getId() << endl;
			cout << "                              教师：姓名：" << user.getUserName() << endl;
			cout << "                              教师：密码：" << user.getPwd() << endl;
			cout << "-------------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	}
	cout << "===============================================================================================" << endl;
	iof.close();
}