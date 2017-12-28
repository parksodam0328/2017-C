#include <iostream>

using namespace std;

void CallByValue(int value){
	value = value + 1;
	cout << "Call By Value \t: 주소 = " << &value;
}

void CallByPointer(int* pValue){
	*pValue = *pValue + 1;
	cout << "Call By Pointer \t: 주소 = " << pValue;
}

void CallByReference(int &value){
	value = value + 1;
	cout << "Call By Reference \t: 주소 = " << &value;
}

int main(void){
	int value = 10;
	cout << "함수 호출 전 원본 값 : 주소\t: " << &value << ", 값 : " << value << endl;
	CallByValue(value);
	cout << ", 값 : " << value << endl;
	CallByPointer(&value);
	cout << ", 값 : " << value << endl;
	CallByReference(value);
	cout << ", 값 : " << value << endl;

	return 0;
}