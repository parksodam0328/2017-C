#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>


using namespace std;
class Student
{
private:
	int nNo;
	char* szName;
	
public:
	void SetStudent(int no, char* pName);
	void PrintStudent();
	Student();
	Student(int, char*);//프로토타입은 변수는 고려하지 않고, 자료형만 고려함.
	static int nCount;
	virtual ~Student()
	{
		cout << "번호 : " << --nCount << endl;;
		if (szName != 0)
		{
			cout << szName << "소멸자" << endl;
			delete[] szName;
		}
		else
		{
			cout << "소멸자" << endl;
		}
	}
};
int Student::nCount = 0;
Student::Student()
{
	cout<<"번호 : "<<++nCount<<endl;
	cout << "기본생성자" << endl;
	nNo = 0;
	szName = 0;
	//strcpy(this->szName, "이름없음");

}
Student::Student(int nNo, char* szName)
{
	cout << "번호 : " << ++nCount << endl;
	cout << "매개변수 있는 생성자" << endl;
	this->nNo = nNo;
	this->szName = new char[strlen(szName) + 1];
	strcpy(this->szName, szName);
	
}
void Student::SetStudent(int no, char* szName)
{
	(*this).nNo = no;
	this->szName = new char[strlen(szName) + 1];
	//this->szName = szName;
	strcpy((*this).szName, szName);
}
void Student::PrintStudent()
{
	if (szName != 0)
	{
		cout << "번호" << nNo;
		cout << ", 이름 : " << szName << endl;
	}
}
void a(){ // 지역변수로 선언되면 함수가 종료될때 자동으로 소멸자가 호출된다.
	//cout << "번호 : " << ++nCount << endl;
	Student k(3333,"연흥부");
}
int main()
{
	cout << Student::nCount << endl; //클래스 네임일때 ::찍어 준다.
	int no;
	char name[20];
	Student student;
	cout << student.nCount << endl; //클래스 네임일때 ::찍어 준다.
	cout << sizeof(Student) << endl;

	cout << "학생 번호 입력 : ";
	cin >> no;
	cout << "학생 이름 입력 : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	Student stu(2518, "임청");
	stu.PrintStudent();

	Student* p = new Student();
	cout << p->nCount << endl; // p 이전에 선언된 이름들 Student:: , student. , p->로 접근 가능하다!
	p->PrintStudent();
	Student* p1 = new Student(1111, "홍길동");
	p1->PrintStudent();
	a();
	delete p;//만들어지는 순서와 상관없이 소멸함.
	delete p1;
	

	return 0;
}