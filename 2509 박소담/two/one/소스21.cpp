#include <iostream>
using namespace std;
int main(){
	char a;
	cout << "알파벳을 입력하세요 : ";
	cin >> a;
	if (isalpha(a)){
		if (isupper(a))
			cout << (char)(a + ('a'-'A')) << endl;
		else if (islower(a))
			cout << (char)(a - ('a' - 'A')) << endl;
	}
	else cout << "오류"<< endl;
	return 0;
}