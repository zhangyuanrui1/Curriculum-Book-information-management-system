#include"Teacher.h"
Teacher::Teacher(){
}
Teacher::Teacher(char teacherName[30], int teacherNumber):teacherNumber(teacherNumber){
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