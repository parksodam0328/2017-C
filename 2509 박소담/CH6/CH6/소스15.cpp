#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int nCount = 10;
	int nNo;
	char szName[20];
	ofstream outfile("out2.dat");
	for (int i = 0; i < nCount; i++){
		nNo = i + 1;
		sprintf(szName, "ÀÌ¸§_%d", nNo);
		outfile << nNo << szName<< endl;
	}
	outfile.close();
	ifstream infile("out2.dat");
	for (int i = 0; i < nCount; i++){
		infile >> nNo;
		infile >> szName;
		cout << i << " : " << nNo << ", " << szName << endl;
	}
	infile.close();

	return 0;
}