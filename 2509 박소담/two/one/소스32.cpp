#include <iostream>

using namespace std;

int main(void){
	int a[5] = { 1, 2, 3, 4, 5 };
	const int *p1=a; // 값을 바꿀 수 없음
	cout << p1 << endl;
	p1++;
	cout << p1 << endl; //현재 *p1 = 2
	// *p1 = 0; 오류
	a[1] = 0;
	cout << *p1 << endl; //포인터로는 바꿀 수 없기 때문에 다른 방법을 이용, a[0]의 값을 바꿈
	// const int c; // 상수화 시켰으므로 초기화가 필요함

	int * const p2 = a; // 주소값을 바꿀 수 없음
	cout << p2 << endl;
	// p2++; 오류
	// cout << p2 << endl;
	cout << *p2 << endl;
	*p2 = 0;
	cout << *p2 << endl;

	const int * const p3 = a; // 주소값을 바꿀 수 없음
	cout << p3 << endl;
	cout << *p3 << endl;
	*p2 = 0;
	cout << *p3 << endl;
	//p2++; 오류

	return 0;
}