#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<windows.h>
#include"Library.h"
#include"Magazines.h"
#include"Teacher.h"
#include"Student.h"
#include"User.h"

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