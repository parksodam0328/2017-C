#include <iostream>

using namespace std;

void Swap_CallByValue(int value1, int value2){
	int temp = value1;
	value1 = value2;
	value2 = temp;

}

void Swap_CallByPointer(int* pValue1, int *pValue2){
	int temp = *pValue1;
	*pValue1 = *pValue2;
	*pValue2 = temp;
}

void Swap_CallByReference(int &value1, int &value2){
	int temp = value1;
	value1 = value2;
	value2 = value1;
}

int main(void){
	int value1, value2;
	value1 = 10;
	value2 = 20;
	cout << value1 << ", " << value2 << " swap(call by value)\t" << endl;
	Swap_CallByValue(value1, value2);
	value1 = 10;
	value2 = 20;
	cout << value1 << ", " << value2 << " swap(call by pointer)\t" << endl;
	Swap_CallByPointer(&value1, &value2);
	value1 = 10;
	value2 = 20;
	cout << value1 << ", " << value2 << " swap(call by reference)\t" << endl;
	Swap_CallByReference(value1, value2);

	return 0;
}