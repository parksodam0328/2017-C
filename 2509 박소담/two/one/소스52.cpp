
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand((unsigned)time(0));
	int value;
	for (int i = 0; i < 10; i++){ // ����ε� �������� Ȯ���ϱ� ���� for�� �ȿ� if���� �־� ����� ������ �� �̻��� ���ڸ� �ﵵ�� �ϸ� �Ѵ��� ������ üũ ���� (�ٿ���� üũ)
		value = 50 + (rand() % 50);
		cout << i << " : ������ : " << value << endl;
	}
}