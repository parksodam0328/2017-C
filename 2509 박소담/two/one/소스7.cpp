#include <iostream>
using namespace std;

int main()
{
	int in = 2100000000;
	short sh = 20;
	char ch = 'a';
	long lo = 30;
	float fl = 3.4f; // �⺻���� �Ǽ��� double���̴�. �׷��� f�� ���־�� �Ѵ�. 
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