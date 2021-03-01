#include"Method.h"
void control();//管理员控制界面
void enterInterface(); //登录界面
void LoginInterface(); //注册界面
void main(){
	//control();//管理员界面
	int aa = 0;
	int bb = 0;
	do{
		system("cls");
		cout << "--------------------------图书馆借阅管理系统--------------------------" << endl;
		cout << "                               1 登录" << endl;
		cout << "                               2 注册" << endl;
		cout << "                               0 退出" << endl;
		cout << "----------------------------------------------------------------------" << endl;
		cout << "                               输入要进行的操作：" ;
		cin >> aa;
		switch(aa) {
		case 0:
			break;	
		case 1:
			system("pause");
			system("cls");
			enterInterface();
			system("pause");
			break;
		case 2:
			system("cls");
			LoginInterface();
			system("pause");
			break;
		default:
			cout << "                               输入错误！请重新输入" << endl;
			system("pause");
			system("cls");
		}
	}while(aa != 0); 
}

