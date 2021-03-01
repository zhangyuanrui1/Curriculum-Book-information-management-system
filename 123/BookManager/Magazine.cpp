#include "Magazine.h"
Magazine::Magazine(){
	
}
Magazine::Magazine(int code, char *bookName, int count, 
				   int volumeCode):BaseBook(code, bookName, count), volumeCode(volumeCode){
}
void Magazine::setVolumeCode(int volumeCode){
	this->volumeCode = volumeCode;
}
int Magazine::getVolumeCode(){
	return volumeCode;
}