#include"Student.h"
Student::Student(){
}
Student::Student(char studentName[30], int studentNumber):studentNumber(studentNumber){
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
