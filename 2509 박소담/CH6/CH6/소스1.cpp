#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Student{
public:
	int nNo;
	char *szName;
	Student(){
		nNo = 0;
		szName = 0;
		cout << "�⺻ ������" << endl;
		//cout <<  << endl;
	}
	Student(int no, char* pName){
		nNo = no;
		szName = new char[(strlen(pName)) + 1];
		strcpy(szName, pName);
		cout << "�Ű����� �ִ� ������" << endl;
		//cout << szName << endl;
	}
	Student(Student& st){ // call by reference�� �ҷ��;� �Ѵ�. ���������
		nNo = st.nNo;
		this->szName = new char[20];
		strcpy(szName, st.szName);
		cout << "�Ű����� �ִ� ������" << endl;
		//cout << szName << endl;
	}

	~Student(){
		cout << szName << "�Ҹ���" << endl;
		delete szName;
	}
	void PrintStudent(){
		if (szName == 0) cout << "�̸�����" << endl;
		else cout << nNo << "   " << szName << endl;
	}
	void copy(Student &st){
		if (this != &st){
			this->nNo = st.nNo;
			if (szName != 0) delete[] szName;
			this->szName = new char[(strlen(st.szName)) + 1];
			strcpy(this->szName, st.szName);
		}
		else {
			return;
		}
	}
	Student& operator=(Student &st){
		copy(st);
		return *this; //return st; �� ����
	}
};

int main(){
	Student st1(10, "ȫ�浿");
	Student st2;
	st1.PrintStudent();
	st2.PrintStudent();
	st2 = st1;
	st1.PrintStudent();
	st2.PrintStudent();
	strcpy(st2.szName, "������");
	Student st3(20, "�����");
	st1.PrintStudent();
	st2.PrintStudent();
	st3.PrintStudent();
	st1 = st1;
	st3 = st2 = st1;
	Student st4=st1;
}