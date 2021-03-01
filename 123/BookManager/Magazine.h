#include "BaseBook.h"

class Magazine : public BaseBook {
private:
	int volumeCode;
public:
	Magazine();
	Magazine(int code, char *bookName, int count, int volumeCode);
	void setVolumeCode(int volumeCode);
	int getVolumeCode();
};
