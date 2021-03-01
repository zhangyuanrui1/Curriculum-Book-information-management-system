#include<iostream>
#include<string.h>
#include<fstream.h>
#include<windows.h>
class User{
private:
	int id; 
	char userName[30];
	char pwd[30];
public:
	User();
	User(int id, char userName[], char pwd[]);
	~User();
	void setId(int id);
	int getId();
	void setUserName(char userName[]);
	char* getUserName();
	void setIPwd(char pwd[]);
	char* getPwd();
};
//#include"User.h"

User::User(){
	
}
User::~User(){
	
}
User::User(int id, char userName[], char pwd[]):id(id){
	strcpy(this->userName, userName);
	strcpy(this->pwd, pwd);
}
void User::setId(int id){
	this->id = id;
}
int User::getId(){
	return id;
}
void User::setUserName(char userName[]){
	strcpy(this->userName, userName);
}
char* User::getUserName(){
	return userName;
}
void User::setIPwd(char pwd[]){
	strcpy(this->pwd, pwd);
}
char* User::getPwd(){
	return pwd;
}

//#include<iostream.h>
//#include<string.h>
class Teacher {
private:
	char teacherName[30]; //老师姓名
	int teacherNumber; //教师借书证号
public:
	Teacher();
	Teacher(char teacherName[], int teacherNumber);
	~Teacher();
	void setTeacherName(char teacherName[]);
	char* getTeacherName();
	void setTeacherNumber(int teacherNumber);
	int getTeacherNumber();
};
//#include"Teacher.h"
Teacher::Teacher(){
}
Teacher::Teacher(char teacherName[], int teacherNumber):teacherNumber(teacherNumber){
	strcpy(this->teacherName, teacherName);
}
Teacher::~Teacher(){
}
void Teacher::setTeacherName(char teacherName[]){
	strcpy(this->teacherName, teacherName);
}
char* Teacher::getTeacherName(){
	return teacherName;
}
void Teacher::setTeacherNumber(int teacherNumber){
	this->teacherNumber = teacherNumber;
}
int Teacher::getTeacherNumber(){
	return teacherNumber;
}
//#include<iostream.h>
//#include<string.h>
class Student {
private:
	char studentName[30]; //学生姓名
	int studentNumber; //学生借书证号90001
public:
	Student();
	Student(char studentName[], int studentNumber);
	~Student();
	void setStudentName(char studentName[]);
	char* getStudentName();
	void setStudentNumber(int studentNumber);
	int getStudentNumber();
};

//#include"Student.h"
Student::Student(){
}
Student::Student(char studentName[], int studentNumber):studentNumber(studentNumber){
	strcpy(this->studentName, studentName);
}
Student::~Student(){
}
void Student::setStudentName(char studentName[]){
	strcpy(this->studentName, studentName);
}
char* Student::getStudentName(){
	return studentName;
}
void Student::setStudentNumber(int studentNumber){
	this->studentNumber = studentNumber;
}
int Student::getStudentNumber(){
	return studentNumber;
}
//#include<iostream.h>
//#include<string.h>
class Magazines {
private:
	char magazinesName[30]; //书名
	int magazinesCode; //条码
	int magazinesNumber; //卷号
	int magazinesStorage; //库存量
public:
	Magazines();
	Magazines(char magazinesName[], int magazinesCode, int magazinesNumber, int magazinesStorage);
	~Magazines();
	void setMagazinesName(char magazinesName[]);
	char* getMagazinesName();
	void setMagazinesCode(int magazinesCode);
	int getMagazinesCode();
	void setMagazinesNumber(int magazinesNumber);
	int getMagazinesNumber();
	void setMagazinesStorage(int magazinesStorage);
	int getMagazinesStorage();
};

//#include"Magazines.h"
Magazines::Magazines(){
}
Magazines::Magazines(char magazinesName[], int magazinesCode, int magazinesNumber, int magazinesStorage):magazinesCode(magazinesCode), magazinesNumber(magazinesNumber), magazinesStorage(magazinesStorage){
	strcpy(this->magazinesName, magazinesName);
}
Magazines::~Magazines(){
}
void Magazines::setMagazinesName(char magazinesName[]){
	strcpy(this->magazinesName, magazinesName);
}
char* Magazines::getMagazinesName(){
	return magazinesName;
}
void Magazines::setMagazinesCode(int magazinesCode){
	this->magazinesCode = magazinesCode;
}
int Magazines::getMagazinesCode(){
	return magazinesCode;
}
void Magazines::setMagazinesNumber(int magazinesNumber){
	this->magazinesNumber = magazinesNumber;
}
int Magazines::getMagazinesNumber(){
	return magazinesNumber;
}
void Magazines::setMagazinesStorage(int magazinesStorage){
	this->magazinesStorage = magazinesStorage;
}
int Magazines::getMagazinesStorage(){
	return magazinesStorage;
}

//#include<iostream.h>
//#include<string.h>
class Library {
private:
	char libraryNmae[30]; //书名
	int libraryCode; //条码
	int librarynumber; //内部分类号
	char author[30]; //作者
	int libraryStorage; //库存量
public:
	Library();
	Library(char libraryNmae[], int libraryCode, int librarynumber, char author[], int libraryStorage);
	~Library();
	void setLibraryNmae(char libraryNmae[]);
	char* getLibraryNmae();
	void setLibraryCode(int libraryCode);
	int getLibraryCode();
	void setLibrarynumber(int librarynumber);
	int getLibrarynumber();
	void setAuthor(char author[]);
	char* getAuthor();
	void setLibraryStorage(int libraryStorage);
	int getLibraryStorage();
};

//#include"Library.h"

Library::Library(){
}
Library::Library(char libraryNmae[], int libraryCode, int librarynumber, char author[], int libraryStorage):libraryCode(libraryCode), librarynumber(librarynumber), libraryStorage(libraryStorage){
	strcpy(this->libraryNmae, libraryNmae);
	strcpy(this->author, author);
}
Library::~Library(){
}
void Library::setLibraryNmae(char libraryNmae[]){
	strcpy(this->libraryNmae, libraryNmae);
}
char* Library::getLibraryNmae(){
	return libraryNmae;
}
void Library::setLibraryCode(int libraryCode){
	this->libraryCode = libraryCode;
}
int Library::getLibraryCode(){
	return libraryCode;
}
void Library::setLibrarynumber(int librarynumber){
	this->librarynumber = librarynumber;
}
int Library::getLibrarynumber(){
	return librarynumber;
}
void Library::setAuthor(char author[]){
	strcpy(this->author, author);
}
char* Library::getAuthor(){
	return author;
}
void Library::setLibraryStorage(int libraryStorage){
	this->libraryStorage =libraryStorage;
}
int Library::getLibraryStorage(){
	return libraryStorage;
}
/*#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<windows.h>
#include"Library.h"
#include"Magazines.h"
#include"Teacher.h"
#include"Student.h"
#include"User.h"*/

class Biz{
	//47个方法
public:
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
	void magazinesStudentReturn();// 图书学生归还
	void magazinesTeacherReturn();// 图书教师归还
	
	
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
};
//#include"Biz.h"
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
//#include"Biz.h"

/*void studentInterface(); //学生界面
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
*/
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
			cout << "                               请输入要修改的用户账号：" ;
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
					cout << "                               修改管理员信息成功!" << endl;
					cout << "-----------------------------------------------------------------" << endl;
					cout << "                               用户：  id：" << user.getId() << endl;
					cout << "                               用户：姓名：" << user.getUserName() << endl;
					cout << "                               用户：密码：" << user.getPwd() << endl;
					cout << "-----------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改管理员信息失败!" << endl;
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
					cout << "                               修改学生信息成功!" << endl;
					cout << "-------------------------------------------------------------------" << endl;
					cout << "                               用户：  id：" << user.getId() << endl;
					cout << "                               用户：姓名：" << user.getUserName() << endl;
					cout << "                               用户：密码：" << user.getPwd() << endl;
					cout << "-------------------------------------------------------------------" << endl;
				} else {
					cout << "                               修改学生信息失败!" << endl;
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



/*#include"Method.h"
void control();//管理员控制界面
void enterInterface(); //登录界面
void LoginInterface(); //注册界面*/
void main(){
	//control();//管理员界面
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "--------------------------图书馆借阅管理系统--------------------------" << endl;
		cout << "                               1 登录" << endl;
		cout << "                               2 注册" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               输入要进行的操作：" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;	
		case 1:
			system("pause");
			system("cls");
			enterInterface();
			system("pause");
			break;
		case 2:
			system("cls");
			LoginInterface();
			system("pause");
			break;
		default:
			cout << "                               输入错误！请重新输入" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0); 
}

