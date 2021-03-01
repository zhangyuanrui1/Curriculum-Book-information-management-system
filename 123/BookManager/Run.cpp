#include <iostream.h>
#include "UserBiz.h"
#include "BookInfo.h"
User inputUserInfo() {
	int id;
	char userName[20];
	char pwd[20];
	cout << "input id:";
	cin >> id;
	cout << "input userName:";
	cin >> userName;
	cout << "input pwd:";
	cin >> pwd;
	/*
	User user;
	user.setId(id);
	user.setUserName(userName);
	user.setPwd(pwd);
	*/
	User user(id, userName, pwd);
	return user;
}
void main() {
	int type = 0;
	User user;
	UserBiz userBiz;
	int ok;
	int id;
	do 
	{
		cout << "------------用户管理-----------------" << endl;
		cout << "------------1 新增-----------------" << endl;
		cout << "------------2 修改-----------------" << endl;
		cout << "------------3 删除-----------------" << endl;
		cout << "------------4 查找-----------------" << endl;
		cout << "------------5 显式-----------------" << endl;
		cout << "------------0 退出-----------------" << endl;
		cout << "请选择:" ;
		cin >> type;
		switch (type){
		case 1:
			cout << "用户管理 -> 新增:" << endl;
			user = inputUserInfo();
			ok = userBiz.add(user);
			if(ok) {
				cout << "新增用户信息成功!" << endl;
			} else {
				cout << "新增用户信息失败!" << endl;
			}
			break;
		case 2:
			cout << "用户管理 -> 修改:" << endl;
			user = inputUserInfo();
			ok = userBiz.update(user);
			if(ok) {
				cout << "修改用户信息成功!" << endl;
			} else {
				cout << "修改用户信息失败!" << endl;
			}
			break;
		case 3:
			cout << "用户管理 -> 删除:" << endl;
			cout << "请输入要删除的编号:";
			cin >> id;
			ok = userBiz.deleteById(id);
			if(ok) {
				cout << "删除用户信息成功!" << endl;
			} else {
				cout << "删除用户信息失败!" << endl;
			}
			break;
		case 4:
			cout << "用户管理 -> 查询:" << endl;
			cout << "请输入要查询的用户编号:";
			cin >> id;
			user = userBiz.findById(id);
			if(user.getId() == 0){
				cout << "用户不存在" << endl;
			} else {
				cout << user.getId() << ", " << user.getUserName() << ", " << user.getPwd() << endl;
			}
			break;
		case 5:
			cout << "用户管理 -> 显式:" << endl;
			userBiz.findAll();
			break;
		}
	} while (type != 0);	
}











void testUser() {
/*
	User user;
	user.setId(1);
	user.setUserName("zhangsan");
	user.setPwd("meiyou");
	*/
	User user(2, "lisi", "meiyou");
	cout << "id = " << user.getId() << endl;
	cout << "userName = " << user.getUserName() << endl;
	cout << "pwd = " << user.getPwd() << endl;
}
void testBaseBook() {
	BaseBook baseBook(1001, "《平凡的世界》", 100);
	cout << "code = " << baseBook.getCode() << endl;
	cout << "bookName = " << baseBook.getBookName() << endl;
	cout << "count = " << baseBook.getCount() << endl;
}
void testBookInfo() {
	BookInfo bookInfo(1001, "《平凡的世界》", 100, "路遥", 1);
	//bookInfo.setCode()
	cout << "code = " << bookInfo.getCode() << endl;
	cout << "bookName = " << bookInfo.getBookName() << endl;
	cout << "count = " << bookInfo.getCount() << endl;
	cout << "author = " << bookInfo.getAuthor() << endl;
	cout << "innerTypeCode = " << bookInfo.getInnerTypeCode() << endl;

}
