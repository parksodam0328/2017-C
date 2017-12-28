#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int value;

	cout << "정수 입력 : ";
	cin >> value;
	cout << "정수 출력 : " << value << endl;

	char buffer[4]; 
	cout << "문자열 입력 : ";
	cin >> buffer;
	cout << "문자열 출력 : " << buffer << endl;

	return 0;

}