#include <iostream>
#include <fstream>

using namespace std;

int main(void){

	ifstream src("소스18.cpp", ios_base::in | ios_base::binary);
	if (!src.is_open()) cout << "원본 파일이 없습니다." << endl;

	ofstream tar("target.txt", ios_base::out | ios_base::trunc | ios_base::binary);
	char szBuf[1024];
	int nRead;

	for (;;){
		src.seekg(0, ios_base::end);
		cout << src.tellg()<<endl;
		src.read(szBuf, 1024);
		nRead = src.gcount();
		if (nRead == 0)break;
		tar.write(szBuf, nRead);
	}
	
	cout << "파일 복사가 완료되었습니다" << endl;

	src.close();
	tar.close();

	return 0;
}