#include <iostream>

using namespace std;
int main(void){
	char szMessage[2][20] = { "Hello arrary", "�ȳ��ϼ���" };
	char *p1 = szMessage[0];
	cout <<p1<<endl;
	cout << szMessage << endl;
	cout << &szMessage[0]<<endl;
	cout << szMessage[0]<<endl;
	cout << &szMessage[0][0]<<endl;
	cout << szMessage[1] << endl;

	char a[2][3][10] = {
		{ { "�����ٶ�" },
		{ "�󸶹�" },
		{ "�����" } },
		{ { "��īŸ" }, { "���Ͼ�" }, { "�߾" } } };
	cout << a[0][2] << endl;
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a << endl;
	cout << a[0] << endl;
	cout << &a[0] << endl;
	cout << a[0][0] << endl;

	return 0;
}