//p.76~77
#include<iostream>
using namespace std;

//인라인 함수 선언
inline int Add(int a, int b) { return a + b; };
int main(){
	int value1 = 10;
	int value2 = 20;
	int sum = 0;

	sum = Add(value1, value2);	//sum=value1+value2

	cout << value1 << "+" << value2 << "=" << sum << endl;

	return 0;
}