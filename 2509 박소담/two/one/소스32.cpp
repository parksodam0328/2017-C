#include <iostream>

using namespace std;

int main(void){
	int a[5] = { 1, 2, 3, 4, 5 };
	const int *p1=a; // ���� �ٲ� �� ����
	cout << p1 << endl;
	p1++;
	cout << p1 << endl; //���� *p1 = 2
	// *p1 = 0; ����
	a[1] = 0;
	cout << *p1 << endl; //�����ͷδ� �ٲ� �� ���� ������ �ٸ� ����� �̿�, a[0]�� ���� �ٲ�
	// const int c; // ���ȭ �������Ƿ� �ʱ�ȭ�� �ʿ���

	int * const p2 = a; // �ּҰ��� �ٲ� �� ����
	cout << p2 << endl;
	// p2++; ����
	// cout << p2 << endl;
	cout << *p2 << endl;
	*p2 = 0;
	cout << *p2 << endl;

	const int * const p3 = a; // �ּҰ��� �ٲ� �� ����
	cout << p3 << endl;
	cout << *p3 << endl;
	*p2 = 0;
	cout << *p3 << endl;
	//p2++; ����

	return 0;
}