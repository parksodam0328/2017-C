#include <iostream>
using namespace std;

int main()
{
	int in = 2100000000;
	short sh = 20;
	char ch = 'a';
	long lo = 30;
	float fl = 3.4f; // 기본으로 실수는 double형이다. 그래서 f를 써주어야 한다. 
	double dou = 5.6;
	sh = ch;
	in = sh;
	lo = in;
	fl = (float)lo; //
	dou = fl;
	fl = (float)dou; //
	lo = (long)fl; //
	in = lo;
	sh = in;
	cout << sh << endl;
	ch = (char)sh; //

	return 0;
}