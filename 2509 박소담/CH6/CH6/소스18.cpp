#include <iostream>
#include <fstream>

using namespace std;

int main(void){

	ifstream src("�ҽ�18.cpp", ios_base::in | ios_base::binary);
	if (!src.is_open()) cout << "���� ������ �����ϴ�." << endl;

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
	
	cout << "���� ���簡 �Ϸ�Ǿ����ϴ�" << endl;

	src.close();
	tar.close();

	return 0;
}