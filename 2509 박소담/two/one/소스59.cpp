#include <iostream>
#include <string.h> // strcpy()

using namespace std;

struct Student{
	int nNo; //번호
	char szName[20]; //이름

	void SetStudent(int no, char *pName){
		nNo = no;
		strcpy(szName, pName);
	}

	void PrintStudent(){
		cout << "번호: " << nNo << ", 이름 : " << szName << endl;
	}

};


int main(void){
	int no;
	char name[20];
	Student student;

	cout << "학생 번호 입력 : ";
	cin >> no;
	cout << "학생 이름 입력 : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	return 0;
}