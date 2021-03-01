#include <iostream.h>
#include <string.h>
#include "BaseBook.h"
BaseBook::BaseBook(){
	
}
BaseBook::BaseBook(int code, char *bookName, int count) : code(code), count(count){
	strcpy(this->bookName, bookName);
}
void BaseBook::setCode(int code) {
	this->code = code;
}
int BaseBook::getCode() {
	return code;
}
void BaseBook::setBookName(char *bookName){
	strcpy(this->bookName, bookName);
}
char* BaseBook::getBookName() {
	return bookName;
}
void BaseBook::setCount(int count) {
	this->count = count;
}
int BaseBook::getCount() {
	return count;
}