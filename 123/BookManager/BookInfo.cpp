#include <string.h>
#include "BookInfo.h"
BookInfo::BookInfo(){
}
BookInfo::BookInfo(int code, char *bookName, int count, char *author, 
				   int innerTypeCode):BaseBook(code, bookName, count),innerTypeCode(innerTypeCode){
	strcpy(this->author, author);
}
void BookInfo::setAuthor(char *author){
	strcpy(this->author, author);
}
char* BookInfo::getAuthor(){
	return this->author;
}
void BookInfo::setInnerTypeCode(int innerTypeCode){
	this->innerTypeCode = innerTypeCode;
}
int BookInfo::getInnerTypeCode(){
	return innerTypeCode;
}