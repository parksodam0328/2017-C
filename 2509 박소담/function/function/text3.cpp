//p.72
#include<iostream>
using namespace std;

//함수 프로토타입 선언
void myFirstFunc();
void mySecondFunc();

void myFirstFunc(){
	cout << "2)    ->myFirstFunc 입니다" << endl;
	mySecondFunc();
	cout << "4)    ->myFirstFunc 입니다" << endl;
}

void mySecondFunc(){
	cout << "3)    ->mySecondFunc 입니다" << endl;
}

int main(){
	cout << "1)->main 입니다" << endl;
	myFirstFunc();
	cout << "5)->main 입니다" << endl;

	return 0;
}