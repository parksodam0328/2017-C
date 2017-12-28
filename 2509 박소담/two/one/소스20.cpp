#include <iostream>
using namespace std;
int main(){

	char answer;
	do{
		cout << "계속 진행하시겠습니까?" << endl;
		cout << "계속하려면 'Y'를 중지하려면 'N'을 누르세요" << endl;
		cin >> answer;
	} while ((answer != 'Y') && (answer != 'N') && (answer != 'y') && (answer != 'n'));
	if ((answer != 'Y') || (answer != 'y')) {
		cout << "계속 진행 합니다." << endl;
	}
	else{
		cout << "중지합니다." << endl;
	}
	return 0;
}