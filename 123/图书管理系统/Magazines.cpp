#include<iostream.h>
#include"Magazines.h"
Magazines::Magazines(){
}
Magazines::Magazines(char magazinesName[30], int magazinesCode, int magazinesNumber, int magazinesStorage):magazinesCode(magazinesCode), magazinesNumber(magazinesNumber), magazinesStorage(magazinesStorage){
	strcpy(this->magazinesName, magazinesName);
}
Magazines::~Magazines(){
}
void Magazines::setMagazinesName(char magazinesName[]){
	strcpy(this->magazinesName, magazinesName);
}
char* Magazines::getMagazinesName(){
	return magazinesName;
}
void Magazines::setMagazinesCode(int magazinesCode){
	this->magazinesCode = magazinesCode;
}
int Magazines::getMagazinesCode(){
	return magazinesCode;
}
void Magazines::setMagazinesNumber(int magazinesNumber){
	this->magazinesNumber = magazinesNumber;
}
int Magazines::getMagazinesNumber(){
	return magazinesNumber;
}
void Magazines::setMagazinesName(int magazinesStorage){
	this->magazinesStorage = magazinesStorage;
}
int Magazines::getMagazinesStorage(){
	return magazinesStorage;
}