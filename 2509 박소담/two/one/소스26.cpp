#include <iostream>
using namespace std;
int main(){
	cout << "1부터 1000까지 소수 구하는 프로그램" << endl;
	for (int i = 1; i <= 100; i++){
		int cnt = 0;
		for (int j = 1; j <= i / 2; j++){
			if (i%j == 0){
				cnt++; // 약수
				if (cnt == 1) cout << i << " ";
			}
		}
	}
	cout << endl;
	return 0;
}
