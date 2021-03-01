#include"User.h"

User::User(){

}
User::~User(){

}
User::User(int id, char userName[], char pwd[]):id(id){
	strcpy(this->userName, userName);
	strcpy(this->pwd, pwd);
}
void User::setId(int id){
	this->id = id;
}
int User::getId(){
	return id;
}
void User::setUserName(char userName[]){
	strcpy(this->userName, userName);
}
char* User::getUserName(){
	return userName;
}
void User::setIPwd(char pwd[]){
	strcpy(this->pwd, pwd);
}
char* User::getPwd(){
	return pwd;
}