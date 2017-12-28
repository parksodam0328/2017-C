#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;


class Student
{
public:
	int nNo;
	char* szName;
	static int getCount(){ // static 없이 클래스 이름으로 정적 멤버 함수를 접근하면 this를 사용할 수 없기 때문에 매개변수의 갯수가 맞지 않게 된다.
	//그래서 오류가 나는 것이다. 일반 멤버함수는 첫번째 매개변수에 this가 들어간다. 또한 정적 멤버 함수에는 정적 멤버 변수만 들어간다. 또한 
		//cout << nNo;
		return nCount;
	}// 정적 멤버 함수 내에서는 정적 멤버 변수만 활동할 수 있다. 일반 멤버 함수는 this로 접근하는 멤버변수가 있는데 정적 멤버 함수에는 this가 없다.
	//객체를 생성해야 this가 생기기 때문이다.
protected:
	static int nCount;
public:
	void SetStudent(int no, char* pName);
	void PrintStudent();
	Student();
	Student(int, char*);//프로토타입은 변수는 고려하지 않고, 자료형만 고려함.
	virtual ~Student()
	{
		cout << --nCount << " ";
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
Student::Student()
{
	cout << ++nCount << " ";
	cout << "기본생성자" << endl;
	nNo = 0;
	szName = 0;
	//strcpy(this->szName, "이름없음");

}
Student::Student(int nNo, char* szName)
{
	cout << ++nCount << " ";

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
int Student::nCount = 0;

void operator=a()
{
	Student k(3333, "연흥부");
}
int main()
{
	//cout << Student::nCount << endl;//정적멤버변수는 ::(범위연산자)사용.
	cout << Student::getCount() << endl;
	int no;
	char name[20];
	Student student;
	//cout << student.nCount << endl;//정적으로 만들어진 객체는 .연산자사용.
	cout << student.getCount() << endl;//정적으로 만들어진 객체는 .연산자사용.
	//cout << sizeof(Student) << endl;

	/*cout << "학생 번호 입력 : ";
	cin >> no;
	cout << "학생 이름 입력 : ";
	cin >> name;*/

	student.SetStudent(no, name);
	student.PrintStudent();

	Student stu(2518, "임청");
	stu.PrintStudent();

	Student* p = new Student();
	p->PrintStudent();
	//cout << p->nCount << endl;//동적으로 만들어진 객체는 포인터 -> 사용. student.nCount, Student::nCount,stu.nCount. 이전에 선언한 객체들로 nCount호출가능.
	cout << p->getCount() << endl;
	a();//객체가 지역변수. 지역변수는 함수가 끝날 때 소멸. 동적으로 만든애보다 먼저 소멸.

	Student* p1 = new Student(1111, "홍길동이");
	p1->PrintStudent();

	delete p;//만들어지는 순서와 상관없이 소멸함.
	delete p1;
	return 0;
}

