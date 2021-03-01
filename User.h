#include<iostream>
#include<string.h>
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