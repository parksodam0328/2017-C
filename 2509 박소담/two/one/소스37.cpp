#include<iostream>
using namespace std;
int main(void){
	int a[10];
	int sum = 0;
	for (int i = 0; i < 10; i++){
		cout << "������ �Է����ּ��� : ";
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++){
		if (a[i] % 2 == 0){
			sum += a[i];
			cout << "¦�� : " << a[i] << endl;
		}
	}
	cout << "�� : " << sum<<endl;
	return 0;
}