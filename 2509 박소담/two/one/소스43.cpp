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
	cout << "----> ÷�ڸ� �̿��� ���" << endl;

	for (i = 0; i < 10; i++){
		*(pArray + i) = 20 + i;
	}
	for (i = 0; i < 10; i++){
		cout << *(pArray + i) << ", ";
	}
	cout << "----> �����͸� �̿��� ���" << endl;

	//delete[] pArray; // new�� delete�� ���� ������ �Ȱ���. delete�� pArray���� �Ʒ��� �־�� �Ѵ�.
	for (i = 0; i < 10; i++){
		if (i % 2 == 0)
			cout << "¦�� "<<pArray[i] << endl;
		else
			cout << "Ȧ�� "<< *(pArray + i) << endl;
	}
	delete[] pArray; // new�� delete�� ���� ������ �Ȱ���. delete�� pArray���� �Ʒ��� �־�� �Ѵ�.
	return 0;
}