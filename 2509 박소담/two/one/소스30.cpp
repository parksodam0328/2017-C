#include <iostream>

using namespace std;

int main(){
	char* pMessage = "welcome to korea"; 
	cout << sizeof(pMessage) << endl;  //4출력 주소값이므로

	cout << pMessage << endl;

	//cout << *pMessage << endl;
	cout << *(pMessage+11) << endl;
	cout << *(pMessage+12) << endl;
	cout << *(pMessage+13) << endl;
	cout << *(pMessage+14) << endl;
	cout << *(pMessage+15) << endl;

	return 0;
}