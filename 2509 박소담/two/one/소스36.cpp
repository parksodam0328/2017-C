#include <iostream>

using namespace std;

int main(void){
	double nArray[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	double *pArray = nArray;
	double count = sizeof(nArray) / sizeof(double);
	//short nArray[]={0,1,2,3,4,5,6,7,8,9};
	//short *pArray=nArray;
	//short count=sizeof(nArray)/sizeof(short);
	for (int i = 0; i < count; i++){
		cout << i << " : ÁÖ¼Ò : " << (pArray + i) << ", °ª : " << *(pArray + i) << endl;
	}
	cout << sizeof(nArray) << endl;

	return 0;
}