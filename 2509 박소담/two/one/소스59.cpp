#include <iostream>
#include <string.h> // strcpy()

using namespace std;

struct Student{
	int nNo; //��ȣ
	char szName[20]; //�̸�

	void SetStudent(int no, char *pName){
		nNo = no;
		strcpy(szName, pName);
	}

	void PrintStudent(){
		cout << "��ȣ: " << nNo << ", �̸� : " << szName << endl;
	}

};


int main(void){
	int no;
	char name[20];
	Student student;

	cout << "�л� ��ȣ �Է� : ";
	cin >> no;
	cout << "�л� �̸� �Է� : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	return 0;
}