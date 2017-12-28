#include<iostream>
using namespace std;

void test1(int*);

int main(){
	int x = 10;
	cout << "Before test1: " << x << endl;
	test1(&x);
	cout << "After test1: " << x << endl;
	return 0;
}
void test1(int* x){
	*x++;		//후위연산자가 우선, 그래서 쓰레기값이 나온다!
	cout << "In test1: " << *x << endl;
}