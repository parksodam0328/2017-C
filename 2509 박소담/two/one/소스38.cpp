#include<iostream>
using namespace std;
int main(void){
	int a[5];
	int b[5];
	int c[10];
	for (int i = 0; i < 5; i++){
		cout << "1. 정수를 입력해주세요 : ";
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++){
		cout << "2. 정수를 입력해주세요 : ";
		cin >> b[i];
	}
	int i = 0, j = 0, k = 0;
	while (!(i == 5 && j == 5)){
		if (i == 5) for (; j < 5; j++, k++) c[k] = b[j];
		else if (j == 5) for (; i < 5; i++, k++) c[k] = a[i];
		else{
			if (a[i] < b[j]) c[k] = a[i++];
			else if (a[i] > b[j]) c[k] = b[j++];
			else { c[k] = a[i++]; j++; }
			k++;
		}
	}
	for (int i = 0; i < k; i++) cout << c[i] << " ";
	cout << endl;
	return 0;
}