#include <iostream>
using namespace std; // �̸��� �浹�ϴ� ��츦 ���� ���� ���ӽ����̽���� ������ ����� ������� �����ϰ� �ĺ����� ������ �����ϴ� ���
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