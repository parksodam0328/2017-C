#include <iostream>

using namespace std;

int main(void){
	const char *p1 = "abcd";
	cout << p1 << endl; //abcd ���
	p1++;
	cout << p1 << endl; //bcd ���
	p1--;
	cout << p1 << endl; //bcd ���
	p1 = "kbcd"; // �ּҰ� �ٲ� �׷��� ������ �ȳ�, ������ �ٲ� �� ����
	cout << p1 << endl;
	//*p1 = 'k'; ����, �� �ٲ� �� ����

	char * const p2 = "abcd";
	cout << p2 << endl; //abcd ���
	//p2++;
	cout << p2 << endl; //bcd ���
	//p2--;
	cout << p2 << endl; //bcd ���
	//p2 = "kbcd"; // �ּҰ� �ٲ� �׷��� ������ �ȳ�, ������ �ٲ� �� ����
	cout << p2 << endl;
	//*p2 = 'k'; // ����� ������ ���� ����, �� �ּ��� ������ �ٲٴ� �͵� ����� ������ ����.
	char *p3 = p2;
	//*p3 = 'k'; // ����� ������ ���� ����, p2�� ���� ���ȭ �Ǿ��� ������ ���Ƽ� ���� ������ ���� ���̴�.
	const char * const p4 = "abcd";
	//p4++; *p4++; ����
	return 0;
}