
#include"Library.h"

Library::Library(){
}
Library::Library(char libraryNmae[], int libraryCode, int librarynumber, char author[], int libraryStorage):libraryCode(libraryCode), librarynumber(librarynumber), libraryStorage(libraryStorage){
	strcpy(this->libraryNmae, libraryNmae);
	strcpy(this->author, author);
}
Library::~Library(){
}
void Library::setLibraryNmae(char libraryNmae[]){
	strcpy(this->libraryNmae, libraryNmae);
}
char* Library::getLibraryNmae(){
	return libraryNmae;
}
void Library::setLibraryCode(int libraryCode){
	this->libraryCode = libraryCode;
}
int Library::getLibraryCode(){
	return libraryCode;
}
void Library::setLibrarynumber(int librarynumber){
	this->librarynumber = librarynumber;
}
int Library::getLibrarynumber(){
	return librarynumber;
}
void Library::setAuthor(char author[]){
	strcpy(this->author, author);
}
char* Library::getAuthor(){
	return author;
}
void Library::setLibraryStorage(int libraryStorage){
	this->libraryStorage =libraryStorage;
}
int Library::getLibraryStorage(){
	return libraryStorage;
}