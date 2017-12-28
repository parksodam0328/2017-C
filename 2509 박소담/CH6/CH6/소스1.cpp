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
		cout << "기본 생성자" << endl;
		//cout <<  << endl;
	}
	Student(int no, char* pName){
		nNo = no;
		szName = new char[(strlen(pName)) + 1];
		strcpy(szName, pName);
		cout << "매개변수 있는 생성자" << endl;
		//cout << szName << endl;
	}
	Student(Student& st){ // call by reference로 불러와야 한다. 복사생성자
		nNo = st.nNo;
		this->szName = new char[20];
		strcpy(szName, st.szName);
		cout << "매개변수 있는 생성자" << endl;
		//cout << szName << endl;
	}

	~Student(){
		cout << szName << "소멸자" << endl;
		delete szName;
	}
	void PrintStudent(){
		if (szName == 0) cout << "이름없음" << endl;
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
		return *this; //return st; 도 가능
	}
};

int main(){
	Student st1(10, "홍길동");
	Student st2;
	st1.PrintStudent();
	st2.PrintStudent();
	st2 = st1;
	st1.PrintStudent();
	st2.PrintStudent();
	strcpy(st2.szName, "강아지");
	Student st3(20, "고양이");
	st1.PrintStudent();
	st2.PrintStudent();
	st3.PrintStudent();
	st1 = st1;
	st3 = st2 = st1;
	Student st4=st1;
}