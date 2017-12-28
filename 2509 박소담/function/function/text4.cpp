//p.74~75
#include<iostream>
using namespace std;

//ÇÔ¼ö ÇÁ·ÎÅäÅ¸ÀÔ ¼±¾ð
int myCalculator(int type, int value1, int value2);

int myCalculator(int type, int value1, int value2){
	int result = 0;

	switch (type){
	case 0: //µ¡¼À
		result = value1 + value2;
		break;
	case 1: //»¬¼À
		result = value1 - value2;
		break;
	case 2: //°ö¼À
		result = value1*value2;
		break;
	case 3: //³ª´°¼À
		result = value1 / value2;
		break;
	}
	return result;
}

int main(){
	int value = 0;

	value = myCalculator(0, 10, 20);
	cout << "µ¡¼À: " << value << endl;

	value = myCalculator(1, 10, 20);
	cout << "»¬¼À: " << value << endl;

	value = myCalculator(2, 5, 20);
	cout << "°ö¼À: " << value << endl;

	value = myCalculator(3, 20, 5);
	cout << "³ª´°¼À: " << value << endl;

	return 0;

}