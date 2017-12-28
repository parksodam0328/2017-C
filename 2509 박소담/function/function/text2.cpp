//p.70
#include<iostream>
using namespace std;

void myFunc(); //myFunc()함수의 프로토타입

int main(){
	myFunc();
}
void myFunc(){
	cout << "사용자가 만든 함수입니다" << endl;
}