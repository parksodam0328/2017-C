#include <iostream>
using namespace std;

int main(){
	char alp;
	cout << "���ĺ� �Է� : ";
	cin >> alp;
	if (isalpha(alp)){
		switch (alp){
		case 65:
		case 97:
			cout << "Ameriac" << endl;
		case 66:
		case 98:
			cout << "Britaim" << endl;
		case 67:
		case 99:
			cout << "Canada" << endl;
		case 68:
		case 100:
			cout << "Denmark" << endl;
		case 69:
		case 101:
			cout << "England" << endl;
		default: cout << "Korea" << endl;
		}
		cout << "����" << endl;
	}
	return 0;
}