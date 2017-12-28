#include <iostream>

using namespace std;

//void print(){ cout << "아무것도 없는 함수지롱!!" << endl; }
void print(int a = 1, int b = 2, int c = 3){ cout << a << " " << b << " " << c << endl; }
int main(void){

	print();

	return 0;
}