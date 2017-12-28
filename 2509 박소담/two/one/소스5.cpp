#include <iostream>
using namespace std;

int main()
{
	// char형 범위 구하기 - 1바이트

	char cMaxVal = 0x7F; // 127
	unsigned char ucMaxVal = 0xFF; // 255
	cout << "char 형의 범위(1바이트) : " << (int)(char)(cMaxVal + 1) << "~" << (int)cMaxVal << endl; 
	cout << "unsigned char 형의 범위(1바이트) : " << (int)(char)(ucMaxVal + 1) << "~" << (int)ucMaxVal << endl;

	// short int형 범위 구하기 - 2바이트

	short sMaxVal = 0x7FFF;
	unsigned short usMaxVal = 0xFFFF;
	cout << "short 형의 범위(2바이트) : " << (int)(short)(sMaxVal + 1) << "~" << sMaxVal << endl;
	cout << "unsigned short 형의 범위(2바이트) : " << (int)(unsigned short)(usMaxVal + 1) << "~" << usMaxVal << endl;	

	// int형 범위 구하기 - 4바이트

	int iMaxVal = 0x7FFFFFFF;
	unsigned int uiMaxVal = 0xFFFFFFFF;
	cout << "int 형의 범위(4바이트) : " << (iMaxVal + 1) << "~" << iMaxVal << endl;
	cout << "unsigned int 형의 범위(4바이트) : " << (uiMaxVal + 1) << "~" << uiMaxVal << endl;

	// long형 범위 구하기 - 4바이트

	long lMaxVal = 0x7FFFFFFF;
	unsigned long ulMaxVal = 0xFFFFFFFF;
	cout << "int 형의 범위(4바이트) : " << (lMaxVal + 1) << "~" << lMaxVal << endl;
	cout << "unsigned int 형의 범위(4바이트) : " << (ulMaxVal + 1) << "~" << ulMaxVal << endl;

	return 0;
}