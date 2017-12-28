#include <iostream>

using namespace std;
int main(void){
	int nArray[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int *p = nArray[0];
	cout << nArray[0][0] << ", " << nArray[0][1] << ", " << nArray[0][2] << endl;
	cout << nArray[1][0] << ", " << nArray[1][1] << ", " << nArray[1][2] << endl;

	return 0;
}