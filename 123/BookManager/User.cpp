#include "User.h"
User::User(){
}
User::User(int id, char *userName, char *pwd):id(id){
	strcpy(this->userName, userName);
	strcpy(this->pwd, pwd);
}
//公有的访问器
void User::setId(int id){
	this->id = id;
}
int User::getId(){
	return id;
}
void User::setUserName(char *userName) {
	strcpy(this->userName, userName);
}
char* User::getUserName() {
	return this->userName;
}
void User::setPwd(char *pwd) {
	strcpy(this->pwd, pwd);
}
char* User::getPwd() {
	return this->pwd;
}