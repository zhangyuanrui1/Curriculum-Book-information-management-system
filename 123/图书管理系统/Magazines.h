#include<iostream.h>
#include<string.h>
class Magazines {
private:
	char magazinesName[30]; //书名
	int magazinesCode; //条码
	int magazinesNumber; //卷号
	int magazinesStorage; //库存量
public:
	Magazines();
	Magazines(char magazinesName[30], int magazinesCode, int magazinesNumber, int magazinesStorage);
	~Magazines();
	void setMagazinesName(char magazinesName[]);
	char* getMagazinesName();
	void setMagazinesCode(int magazinesCode);
	int getMagazinesCode();
	void setMagazinesNumber(int magazinesNumber);
	int getMagazinesNumber();
	void setMagazinesName(int magazinesStorage);
	int getMagazinesStorage();


};