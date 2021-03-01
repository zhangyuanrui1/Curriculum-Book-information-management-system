#include"Biz.h"
int Biz::addLibrary(Library &lib){
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	iof.write((char*)&lib, sizeof(Library));
	iof.close();
	return 1;
} 
int Biz::updateLibrary(Library &lib){
	return 0;
}
int Biz::deleteByIdLibrary(int id){
	return 0;
}
void Biz::findByIdLibrary(int id){

}
void Biz::findAllLibrary(){
	Library lib;
	fstream iof;
	iof.open("Library.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "----------------------------------------------------" << endl;
	cout << "书名\t" << "条码\t" << "内部分类号\t" << "作者\t" << "库存量" << endl;
	do{
		iof.read((char*)&lib, sizeof(Library));
		cout << lib.getAuthor() << "\t" 
			 << lib.getLibraryCode() << "\t" 
			 << lib.getLibraryNmae() << "\t" 
			 << lib.getLibrarynumber() << "\t" 
			 << lib.getLibraryStorage() << endl;
	}while(iof.tellp() != poEnd);
	cout << "----------------------------------------------------" << endl;
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
	return 0;
}
int Biz::deleteByIdMagazines(int id){
	return 0;
}
void Biz::findByIdMagazines(int id){

}
void Biz::findAllMagazines(){
	Magazines maga;
	fstream iof;
	iof.open("Magazines.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "----------------------------------------------------" << endl;
	cout << "书名\t" << "条码\t" << "卷号\t" << "库存量\t" << endl;
	do{
		iof.read((char*)&maga, sizeof(Magazines));
		cout << maga.getMagazinesName() << "\t" 
			 << maga.getMagazinesCode() << "\t" 
			 << maga.getMagazinesNumber() << "\t" 
			 << maga.getMagazinesStorage() << endl;
	}while(iof.tellp() != poEnd);
	cout << "----------------------------------------------------" << endl;
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
	return 0;
}
int Biz::deleteByIdStudent(int id){
	return 0;
}
void Biz::findByIdStudent(int id){

}
void Biz::findAllStudent(){
	Student stu;
	fstream iof;
	iof.open("student.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "----------------------------------------------------" << endl;
	cout << "姓名\t" << "借书编号\t" << endl;
	do{
		iof.read((char*)&stu, sizeof(Student));
		cout << stu.getStudentName() << "\t" 
			 << stu.getStudentNumber() <<  endl;
	}while(iof.tellp() != poEnd);
	cout << "----------------------------------------------------" << endl;
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
	return 0;
}
int Biz::deleteByIdTeacher(int id){
	return 0;
}
void Biz::findByIdTeacher(int id){

}
void Biz::findAllTeacher(){
	Teacher tea;
	fstream iof;
	iof.open("Teacher.txt", ios::in|ios::out);
	iof.seekp(0,ios::end);
	long poEnd = iof.tellp();
	iof.seekp(0,ios::beg);
	cout << "----------------------------------------------------" << endl;
	cout << "姓名\t" << "借书编号\t" << endl;
	do{
		iof.read((char*)&tea, sizeof(Teacher));
		cout << tea.getTeacherName() << "\t" 
			 << tea.getTeacherNumber() << endl;
	}while(iof.tellp() != poEnd);
	cout << "----------------------------------------------------" << endl;
	iof.close();


}