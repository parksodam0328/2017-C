#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char szBuf[100];
	strcpy(szBuf, "Hello File");

	// ofstream outfile("out.dat"); // ������ ���� �� ����
	ofstream outfile; //�������� ��ü ���� 1�ܰ�
	outfile.open("out.dat",ios_base::app); // ���� ���� 2�ܰ� (������)
	//outfile.open("out.dat"); (�����)
	outfile << szBuf << endl; // ���Ͽ� ���� 3�ܰ�
	outfile.close(); // ���� �ݱ� 4�ܰ�

	ifstream infile("d://out.dat"); // ���� ����
	infile.getline(szBuf, 100); // ���� �б�
	infile.close();

	cout << "Read File : " << szBuf << endl; // ���� ���� ���� ���

	return 0;
}