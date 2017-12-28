#include <iostream>

using namespace std;

int main(){
	char value = 'A';
	void *pValue = 0;
	pValue = &value;
	cout << "pValue=" << pValue << endl;
	cout << "*pValue=" << *(char *)pValue << endl; // void형이므로 int형으로 캐스팅이 일어나지 않으면 오류!!
	cout << "value=" << value << endl;

	*(char *)pValue = 'B';
	cout << "pValue=" << pValue << endl;
	cout << "*pValue=" << *(char *)pValue << endl;
	cout << "value=" << value << endl;
	cout << (char *)pValue << endl;
	return 0;
}