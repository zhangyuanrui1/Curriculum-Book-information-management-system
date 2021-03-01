#include "BaseBook.h"
class BookInfo : public BaseBook {
private:
	char author[20];
	int innerTypeCode;
public:
	BookInfo();
	BookInfo(int code, char *bookName, int count, char *author, 
		int innerTypeCode);
	void setAuthor(char *author);
	char* getAuthor();
	void setInnerTypeCode(int innerTypeCode);
	int getInnerTypeCode();
};
