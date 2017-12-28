//p.82
#include<iostream>
using namespace std;

void PlusOne(int *pValue){
	*pValue = *pValue + 1;

	cout << "PlusOne ÇÔ¼ö: *pValue=" << *pValue << endl;
}
int main()
{
	int nValue = 10;
	cout << "1)nValue=" << nValue << endl;
	PlusOne(&nValue);
	cout << "2)nValue=" << nValue << endl;
	return 0;
}