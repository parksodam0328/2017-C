#include <iostream>

using namespace std;

int main(){
	char value = 'A';
	void *pValue = 0;
	pValue = &value;
	cout << "pValue=" << pValue << endl;
	cout << "*pValue=" << *(char *)pValue << endl; // void���̹Ƿ� int������ ĳ������ �Ͼ�� ������ ����!!
	cout << "value=" << value << endl;

	*(char *)pValue = 'B';
	cout << "pValue=" << pValue << endl;
	cout << "*pValue=" << *(char *)pValue << endl;
	cout << "value=" << value << endl;
	cout << (char *)pValue << endl;
	return 0;
}