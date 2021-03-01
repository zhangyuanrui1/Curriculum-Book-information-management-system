#include <iostream.h>
#include <string.h>
class User{
private://私有的属性
	int id;
	char userName[20];
	char pwd[20];
public://公有的构造方法
	User();
	User(int id, char *userName, char *pwd);
	//公有的访问器
	void setId(int id);
	int getId();
	void setUserName(char *userName);
	char* getUserName();
	void setPwd(char *pwd);
	char* getPwd();
};

