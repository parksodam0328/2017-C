#include<iostream>
using namespace std;
int main(void){
	int a[10];
	int sum = 0;
	for (int i = 0; i < 10; i++){
		cout << "정수를 입력해주세요 : ";
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++){
		if (a[i] % 2 == 0){
			sum += a[i];
			cout << "짝수 : " << a[i] << endl;
		}
	}
	cout << "합 : " << sum<<endl;
	return 0;
}