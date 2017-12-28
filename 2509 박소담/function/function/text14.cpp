#include <iostream>

using namespace std;

int Add(int a, int b){
	cout << "int 형 더하기 함수" << endl;
	return a + b;
}

double Add(double a, double b){
	cout << "double 형 더하기 함수" << endl;
	return a + b;
}

char Add(char a, char b){
	cout << "char 형 더하기 함수" << endl;
	return a + b;
}

int main(void){
	cout << " 10 + 20 = " << Add(10, 20) << endl;
	cout << " 10.25 + 20.5 = " << Add(10.25, 20.5) << endl;
	cout << " 30 + 35 = " << Add((char)30, (char)35) << endl;

	return 0;
}