#include <iostream>

using namespace std;

int myCalculator(int type, int value1, int value2);

int myCalculator(int type, int value1, int value2){
	int result = 0;

	switch (type){
	case 0:
		result = value1 + value2;
		break;

	case 1:
		result = value1 - value2;
		break;

	case 2:
		result = value1 * value2;
		break;

	case 3:
		if (value2 == 0) {
			cout << "0���� ���� �� �����ϴ�." << endl;
			value2 = 5;
			result = value1 / value2;
		}
		else{
			result = value1 / value2;
		}
		break;

	}
	return result;

}

int main(){
	int value = 0;
	value = myCalculator(0, 10, 20);
	cout << "���� : " << value << endl;

	value = myCalculator(1, 10, 20);
	cout << "���� : " << value << endl;

	value = myCalculator(2, 5, 20);
	cout << "���� : " << value << endl;

	value = myCalculator(3, 20, 0);
	cout << "������ : " << value << endl;

	return 0;
}
