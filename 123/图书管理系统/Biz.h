#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include"Library.h"
#include"Magazines.h"
#include"Teacher.h"
#include"Student.h"

class Biz{
public:
	int addLibrary(Library &lib); //图书 录入和保存
	int updateLibrary(Library &lib); //图书 修改
	int deleteByIdLibrary(int id); //图书 删除
	void findByIdLibrary(int id); //图书 查找  根据编号查找
	void findAllLibrary(); // 图书 查找所有

	int addMagazines(Magazines &maga); //杂志 录入和保存
	int updateMagazines(Magazines &maga); //杂志 修改
	int deleteByIdMagazines(int id); //杂志 删除
	void findByIdMagazines(int id); // 杂志 查找  根据编号查找
	void findAllMagazines(); //杂志 查找所有

	int addStudent(Student &stu); //学生 录入和保存
	int updateStudent(Student &stu); // 学生 修改
	int deleteByIdStudent(int id); //学生 删除
	void findByIdStudent(int id); //学生 查找  根据编号查找
	void findAllStudent(); //学生 查找所有

	int addTeacher(Teacher &tea); //教师 录入和保存
	int updateTeacher(Teacher &tea); //教师 修改
	int deleteByIdTeacher(int id); //教师 删除
	void findByIdTeacher(int id); //教师 查找  根据编号查找
	void findAllTeacher(); //教师 查找所有

};