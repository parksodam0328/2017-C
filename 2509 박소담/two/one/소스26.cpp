#include <iostream>
using namespace std;
int main(){
	cout << "1���� 1000���� �Ҽ� ���ϴ� ���α׷�" << endl;
	for (int i = 1; i <= 100; i++){
		int cnt = 0;
		for (int j = 1; j <= i / 2; j++){
			if (i%j == 0){
				cnt++; // ���
				if (cnt == 1) cout << i << " ";
			}
		}
	}
	cout << endl;
	return 0;
}
