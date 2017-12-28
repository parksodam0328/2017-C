#include <iostream>

using namespace std;

int main(){
	int a;
	cout << "절댓값을 출력하는 프로그램"<<endl;
	cout << "숫자를 입력해주세요 : ";
	cin >> a;
	if (a < 0){
		a = a*-1;
	}
		cout << a << "의 절댓값 : " << a << endl;
	return 0;
}