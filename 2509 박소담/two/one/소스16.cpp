#include <iostream>
using namespace std;
int main(){
	int dan;

	for (;;){
		cout << "무한루프를 이용한 구구단 출력 프로그램입니다." << endl;
		cout << "0을 입력하면 종료 합니다." << endl;
		cout << "출력할 단을 입력하세요 : ";
		cin >> dan;
		if (dan == 0){
			cout << "구구단 출력을 종료 합니다." << endl;
			break;
		}
		if (dan < 1 || dan >= 19){
			cout << "다시 입력하세요" << endl;
			continue;
		}
			cout << dan << "을 출력합니다." << endl;

			for (int i = 1; i <= 19; i++){
				cout << "    " << dan << "*" << i << "=" << (dan*i) << endl;
			}
	}
	return 0;
}