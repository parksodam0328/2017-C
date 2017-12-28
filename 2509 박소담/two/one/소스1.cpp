#include <iostream>
using namespace std; // 이름이 충돌하는 경우를 막기 위해 네임스페이스라는 공간을 만들어 놀리적으로 분할하고 식별자의 범위를 제한하는 기능
namespace ban5 { 
	int a = 10;
	void print() {
		cout << "ban5" << endl;
	}
}
namespace ban6 {
	int a = 20;
	void print() {
		cout << "ban6" << endl;
	}
}
int main()
{
	cout << ban5::a << endl;
	ban5::print();
	return 0;
}