#include <iostream>
using namespace std;
int main()
{
	cout << "char�� ũ�� : " << sizeof(char) << "����Ʈ\n";
	cout << "unsigned char�� ũ�� : " << sizeof(unsigned char) << "����Ʈ\n";
	cout << "short int�� ũ�� : " << sizeof(short int) << "����Ʈ\n";
	cout << "unsigned short int�� ũ�� : " << sizeof(unsigned short int) << "����Ʈ\n";
	cout << "int�� ũ�� : " << sizeof(int) << "����Ʈ\n";
	cout << "unsigned int�� ũ�� : " << sizeof(unsigned int) << "����Ʈ\n";
	cout << "long�� ũ�� : " << sizeof(long) << "����Ʈ\n";
	cout << "usigned long�� ũ�� : " << sizeof(unsigned long) << "����Ʈ\n";
	cout << "float�� ũ�� : " << sizeof(float) << "����Ʈ\n";
	cout << "double�� ũ�� : " << sizeof(double) << "����Ʈ\n";
	cout << "������ ���� ũ�� : " << sizeof(void*) << "����Ʈ\n";

	return 0;
}