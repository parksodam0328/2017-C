#include <iostream>

using namespace std;

void subFuncA()
{
	int nVal = 10;
	cout << "subFuncA::nVal = " << nVal << endl;
	nVal++; //지역변수이므로 함수가 종료되면 이 변수도 제거된다.
}
void subFuncB()
{
	static int nVal = 10;
	cout << "subFuncB::nVal = " << nVal << endl;
	//정적 변수 이므로 함수가 종료되더라도 이 변수는
	//제거되지 않고 남아있게 된다.
	nVal++;
}
int main()
{
	subFuncA();
	subFuncA();
	subFuncA();

	subFuncB();
	subFuncB();
	subFuncB();

    return 0;
}
