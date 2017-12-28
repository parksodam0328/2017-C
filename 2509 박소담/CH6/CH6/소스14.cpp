#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char szBuf[100];
	strcpy(szBuf, "Hello File");

	// ofstream outfile("out.dat"); // 파일을 생성 및 열기
	ofstream outfile; //정적으로 객체 생성 1단계
	outfile.open("out.dat",ios_base::app); // 파일 열기 2단계 (절대경로)
	//outfile.open("out.dat"); (상대경로)
	outfile << szBuf << endl; // 파일에 저장 3단계
	outfile.close(); // 파일 닫기 4단계

	ifstream infile("d://out.dat"); // 파일 열기
	infile.getline(szBuf, 100); // 파일 읽기
	infile.close();

	cout << "Read File : " << szBuf << endl; // 읽은 파일 내용 출력

	return 0;
}