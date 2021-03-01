#include<iostream.h>
#include<string.h>
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