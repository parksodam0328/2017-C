#include <iostream>
using namespace std;
int main(){
	int dan;

	for (;;){
		cout << "���ѷ����� �̿��� ������ ��� ���α׷��Դϴ�." << endl;
		cout << "0�� �Է��ϸ� ���� �մϴ�." << endl;
		cout << "����� ���� �Է��ϼ��� : ";
		cin >> dan;
		if (dan == 0){
			cout << "������ ����� ���� �մϴ�." << endl;
			break;
		}
		if (dan < 1 || dan >= 19){
			cout << "�ٽ� �Է��ϼ���" << endl;
			continue;
		}
			cout << dan << "�� ����մϴ�." << endl;

			for (int i = 1; i <= 19; i++){
				cout << "    " << dan << "*" << i << "=" << (dan*i) << endl;
			}
	}
	return 0;
}