#include <iostream>
using namespace std;
int main(void){
	char a;
	cout << "���ĺ� �Է� : ";
	cin >> a;
	if (a >= 'a'){
		for (char i = a; i <= 'z'; i++){
			cout << i << endl;
			if (a == 'z'){
				return 0;
			}
		}
	}
	else if (a >= 'A'){
		for (char i = a; i <= 'Z'; i++){
			cout << i << endl;
			if (a == 'Z'){
				return 0;
			}
		}
	}
	else {
		cout << "����" << endl;
	}
	return 0;
}