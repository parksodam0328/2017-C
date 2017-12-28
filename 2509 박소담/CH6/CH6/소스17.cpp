#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

class Student{
	int nNo; //번호
	char szName[20]; //이름

public:
	Student() {}
	Student(int no, char *name){
		SetData(no, name);
	}
	void SetData(int no, char*name){
		nNo = no;
		strcpy(szName, name);
	}
	//파일에 저장하는 함수
	void Save(ofstream& ofs){
		ofs << nNo << szName << endl;
		cout << "SAVE: " << nNo << ", " << szName << endl;
	}
	//파일에서 읽어오는 함수
	void Read(ifstream& ifs){
		ifs >> nNo >> szName;
		cout << "READ: " << nNo << ", " << szName << endl;
	}
	//파일에 저장하기 위한 << 연산자 중복 정의
	friend ofstream& operator<<(ofstream& ofs, Student& student){
		cout << "<<";
		student.Save(ofs);
		return ofs;
	}
	//파일에서 읽어오기 위한 >> 연산자 중복 정의
	friend ifstream& operator>>(ifstream& ifs, Student& student){
		cout << ">>";
		student.Read(ifs);
		return ifs;
	}

};
void SaveStudent(char *pfName){
	Student students[7]; // 학생 객체 생성
	students[0].SetData(1, "김하나"); // 객체 초기값 지정
	students[1].SetData(2, "김두리");
	students[2].SetData(3, "김세나");
	students[3].SetData(4, "김네모");
	students[4].SetData(5, "김다리");
	students[5].SetData(6, "김여설");
	students[6].SetData(7, "김일고");
	int nCount = sizeof(students) / sizeof(Student); // 배열 개수 계산
	cout << "COUNT: " << nCount << endl;
	cout << "저장된 객체 개수 : " << nCount << endl;
	ofstream outfile("out4.dat"); //파일 생성
	outfile << "SFX" << endl;
	outfile << nCount << endl;
	for (int i = 0; i < nCount; i++){
		//students[i].Save(outfile); // 함수 호출로 저장
		outfile << students[i]; // 중복정의된 << 연산자로 저장
	}
	outfile.close(); // 파일 닫기
}
void ReadStudent(char *pfName){
	Student* pStudents;
	ifstream infile(pfName); // 파일 열기
	/*if (infile == 0){
		if (infile.bad() == false) cout << "파일이 존재하지 않습니다." << endl;
		return;
	}*/
	int nCount = 0;
	char szSFX[4];
	infile >> szSFX;
	cout << "File Perfix: " << szSFX << endl;
	infile >> nCount;
	pStudents = new Student[nCount];
	cout << "생성된 객체 개수 : " << nCount << endl;
	for (int i = 0; i < nCount; i++){
		//pStudents[i].Read(infile); // 함수 호출로 읽기
		infile >> pStudents[i]; // 중복 정의된 >> 연산자로 읽기
	}
	infile.close(); // 파일 닫기
	delete[] pStudents;
}

int main(void){
	SaveStudent("out4.dat");
	
	cout << "===============================================================" << endl;
	ReadStudent("out4.dat");
	return 0;
}