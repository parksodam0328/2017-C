#include <iostream>

using namespace std;
int main(){
	int i;
	int *pArray = 0;
	pArray = new int[10];
	for (i = 0; i < 10; i++){
		pArray[i] = 10 + i;
	}
	for (i = 0; i < 10; i++){
		cout<<pArray[i]<<", ";
	}
	cout << "----> 첨자를 이용한 경우" << endl;

	for (i = 0; i < 10; i++){
		*(pArray + i) = 20 + i;
	}
	for (i = 0; i < 10; i++){
		cout << *(pArray + i) << ", ";
	}
	cout << "----> 포인터를 이용한 경우" << endl;

	//delete[] pArray; // new와 delete의 실행 갯수는 똑같다. delete는 pArray보다 아래에 있어야 한다.
	for (i = 0; i < 10; i++){
		if (i % 2 == 0)
			cout << "짝수 "<<pArray[i] << endl;
		else
			cout << "홀수 "<< *(pArray + i) << endl;
	}
	delete[] pArray; // new와 delete의 실행 갯수는 똑같다. delete는 pArray보다 아래에 있어야 한다.
	return 0;
}