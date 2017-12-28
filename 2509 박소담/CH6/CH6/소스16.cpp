#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int nCount = 10;
	int nNo;
	char szName[20];
	fstream datafile("out3.dat",ios_base::out | ios_base::in | ios_base::trunc); //ios_base::trunc -> 파일이 없을 때는 만들어 준다.
	if (datafile.is_open()) cout << "open" << endl;
	else cout << "not open" << endl;
	for (int i = 0; i < nCount; i++){
		nNo = i + 1;
		sprintf(szName, "이름_%d", nNo);
		datafile << nNo << szName << endl;
	}
	datafile.seekg(0,ios_base::beg);
	for (int i = 0; i < nCount; i++){
		datafile >> nNo;
		datafile >> szName;
		cout << i << " : " << nNo << ", " << szName << endl;
	}
	datafile.close();

	return 0;
}