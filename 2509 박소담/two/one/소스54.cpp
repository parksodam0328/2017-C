void myFunc(){
	cout << "사용자가 만든 함수입니다." << endl;
}
#include <iostream>

using namespace std;

void PlusOne(int* pValue){
	*pValue = *pValue + 1;
	cout << "PlusOne 함수 : *pValue = " << *pValue << endl;
}

int main(void){
	int nValue = 10;
	cout << "1) nValue = " << nValue << endl;
	PlusOne(&nValue);
	cout << "2) nValue = " << nValue << endl;

	return 0;
}