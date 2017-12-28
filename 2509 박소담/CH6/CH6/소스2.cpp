#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


class Student{
public:
	int nNo;
	char *szName;
	Student(){
		cout << "기본 생성자"<<endl;
		nNo = 0;
		szName = NULL;
	}
	Student(int no, char*name){
		cout << "매개 변수 있는 생성자" << endl;
		szName = new char[20];
		nNo = no;
		strcpy(szName, name);
	}
	Student(Student & st){
		cout << "복사 생성자" << endl;
		this->nNo = st.nNo;
		this->szName = new char[20];
		strcpy(this->szName, st.szName);
	}
	~Student(){
		if (szName !=NULL){
			cout << szName << " 소멸자" << endl;
			delete[] szName;
		}
		else cout <<"소멸자" << endl;
	}
	void PrintStudent(){
		if (szName!=NULL)
		cout << "번호 : " << nNo << ", "<<"이름 : " <<szName << endl;
		else cout << "번호 : " << nNo << endl;
	}
		Student& operator=(Student& st){ // 연산자 중복 정의, call by reference로 매개변수를 넘겨주어야 한다!
			if (this != &st){
				this->nNo = st.nNo;
				this->szName = new char[20];
				strcpy(this->szName, st.szName);
			}
		return *this; // 혹은 st를 리턴한다.
	}
};

int main(void){
	Student s1(5, "강아지"); //매개변수 있는 생성자
	Student s2; //기본생성자는 ()를 붙이지 않는다.
	s1.PrintStudent();
	s2.PrintStudent();
	s2 = s1;
	s1.PrintStudent();
	s2.PrintStudent();
	strcpy(s2.szName, "고양이");
	s1.PrintStudent();
	s2.PrintStudent();
	Student s3;
	s3.PrintStudent();
	s3 = s2 = s1;
	Student s4(3, "망아지");
	s4 = s4;
	Student s5(s4); // s5는 메모리가 아직 만들어지지 않음, 객체가 만들어지지 않음 따라서 생성자를 갔다오지 않음, 따라서 디버깅 에러가 일어남
	return 0;
}