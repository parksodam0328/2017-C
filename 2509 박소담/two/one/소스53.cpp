#include <iostream>
using namespace std;

void PlusOne(int value){
	value = value + 1;
	cout << "PlusOne ÇÔ¼ö : value = " << value << endl;
}

int main(void){
	int nValue = 10;
	cout << "1) nValue = " << nValue << endl;
	PlusOne(nValue);
	cout << "2) nValue = " << nValue << endl;

	return 0;
}