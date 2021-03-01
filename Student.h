#include<iostream.h>
#include<string.h>
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