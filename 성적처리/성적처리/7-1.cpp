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
	Student(int, char*);//������Ÿ���� ������ ������� �ʰ�, �ڷ����� �����.
	static int nCount;
	virtual ~Student()
	{
		cout << "��ȣ : " << --nCount << endl;;
		if (szName != 0)
		{
			cout << szName << "�Ҹ���" << endl;
			delete[] szName;
		}
		else
		{
			cout << "�Ҹ���" << endl;
		}
	}
};
int Student::nCount = 0;
Student::Student()
{
	cout<<"��ȣ : "<<++nCount<<endl;
	cout << "�⺻������" << endl;
	nNo = 0;
	szName = 0;
	//strcpy(this->szName, "�̸�����");

}
Student::Student(int nNo, char* szName)
{
	cout << "��ȣ : " << ++nCount << endl;
	cout << "�Ű����� �ִ� ������" << endl;
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
		cout << "��ȣ" << nNo;
		cout << ", �̸� : " << szName << endl;
	}
}
void a(){ // ���������� ����Ǹ� �Լ��� ����ɶ� �ڵ����� �Ҹ��ڰ� ȣ��ȴ�.
	//cout << "��ȣ : " << ++nCount << endl;
	Student k(3333,"�����");
}
int main()
{
	cout << Student::nCount << endl; //Ŭ���� �����϶� ::��� �ش�.
	int no;
	char name[20];
	Student student;
	cout << student.nCount << endl; //Ŭ���� �����϶� ::��� �ش�.
	cout << sizeof(Student) << endl;

	cout << "�л� ��ȣ �Է� : ";
	cin >> no;
	cout << "�л� �̸� �Է� : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	Student stu(2518, "��û");
	stu.PrintStudent();

	Student* p = new Student();
	cout << p->nCount << endl; // p ������ ����� �̸��� Student:: , student. , p->�� ���� �����ϴ�!
	p->PrintStudent();
	Student* p1 = new Student(1111, "ȫ�浿");
	p1->PrintStudent();
	a();
	delete p;//��������� ������ ������� �Ҹ���.
	delete p1;
	

	return 0;
}