#include <iostream>
using namespace std;
int main(){
	char a;
	cout << "���ĺ��� �Է��ϼ��� : ";
	cin >> a;
	if (isalpha(a)){
		if (isupper(a))
			cout << (char)(a + ('a'-'A')) << endl;
		else if (islower(a))
			cout << (char)(a - ('a' - 'A')) << endl;
	}
	else cout << "����"<< endl;
	return 0;
}