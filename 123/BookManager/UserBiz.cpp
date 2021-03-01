#include <string.h>
#include <iostream.h>
#include <fstream.h>

#include "UserBiz.h"

int UserBiz::add(User &user){
	/*
	cout << "要新增的用户信息是:";
	cout << user.getId() << ", " << user.getUserName() << ", " << user.getPwd() << endl;
	*/
	fstream iof;
	//打开文件
	iof.open("user.dat", ios::in|ios::out);
	//把文件指针移动到末尾
	iof.seekp(0, ios::end);
	//写入内容
	iof.write((char*)&user, sizeof(User));
	//关闭
	iof.close();
	return 1;
}
//修改  1成功 0失败
int UserBiz::update(User &user){
	/*
	cout << "要修改的用户信息是:";
	cout << user.getId() << ", " << user.getUserName() << ", " << user.getPwd() << endl;
	*/
	int tag = 0;
	User oldUser;
	fstream iof;
	//打开文件
	iof.open("user.dat", ios::in|ios::out);
	//把文件指针移动到末尾
	iof.seekp(0, ios::end);
	//记录末尾位置
	long poEnd = iof.tellp();
	//移动到开始
	iof.seekp(0, ios::beg);
	while (iof.tellp() != poEnd){
		iof.read((char*)&oldUser, sizeof(User));
		//如果当前用户是要修改的用户
		if(oldUser.getId() == user.getId()) {
			//移动到前一个对象位置
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
//删除  1成功 0失败
int UserBiz::deleteById(int id){
	int tag = 0;
	User user;
	fstream iof;
	iof.open("user.dat", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//找到了,存在
			user.setId(0);
			//前移
			iof.seekp(-sizeof(User), ios::cur);
			iof.write((char*)&user, sizeof(User));
			tag = 1;
			break;
		}
	}
	iof.close();
	return tag;
}
//根据编号查找某个信息 4
User UserBiz::findById(int id){
	User user;
	int tag = 0;//用户不存在
	fstream iof;
	iof.open("user.dat", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if (user.getId() == id){//找到了,存在
			tag = 1;//存在
			break;
		}
	}
	//即便是没找到
	if (tag == 0){
		user.setId(0);
	}
	iof.close();
	return user;
}
//找出所有信息
void UserBiz::findAll(){
	User user;
	fstream iof;
	iof.open("user.dat", ios::in|ios::out);
	iof.seekg(0, ios::end);
	long poEnd = iof.tellg();
	iof.seekg(0, ios::beg);
	//如果当前位置不在末尾
	cout << "====================================" << endl;
	cout << "编号\t 姓名\t 密码" << endl; 
	while(iof.tellg() != poEnd) {
		iof.read((char*)&user, sizeof(User));
		if(user.getId() != 0) {
			cout << user.getId() << "\t" << user.getUserName() << "\t" << user.getPwd() << endl;
		}
	}
	cout << "====================================" << endl;
	iof.close();
}
