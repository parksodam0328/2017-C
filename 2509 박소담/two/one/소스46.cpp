#include<iostream>

using namespace std;

void myFunc();

int main(){
	myFunc();

	return 0;
}

void myFunc(){
	cout << "사용자가 만든 함수입니다." << endl;
}