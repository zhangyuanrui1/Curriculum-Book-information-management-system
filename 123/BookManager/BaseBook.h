
class BaseBook{
private:
	int code;//10001
	char bookName[20];
	int count;
public:
	BaseBook();
	BaseBook(int code, char *bookName, int count);
	void setCode(int code);
	int getCode();
	void setBookName(char *bookName);
	char* getBookName();
	void setCount(int count);
	int getCount();
};
