void myFunc(){
	cout << "����ڰ� ���� �Լ��Դϴ�." << endl;
}
#include <iostream>

using namespace std;

void PlusOne(int* pValue){
	*pValue = *pValue + 1;
	cout << "PlusOne �Լ� : *pValue = " << *pValue << endl;
}

int main(void){
	int nValue = 10;
	cout << "1) nValue = " << nValue << endl;
	PlusOne(&nValue);
	cout << "2) nValue = " << nValue << endl;

	return 0;
}