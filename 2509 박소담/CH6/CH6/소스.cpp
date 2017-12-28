#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;


class Student
{
public:
	int nNo;
	char* szName;
	static int getCount(){ // static ���� Ŭ���� �̸����� ���� ��� �Լ��� �����ϸ� this�� ����� �� ���� ������ �Ű������� ������ ���� �ʰ� �ȴ�.
	//�׷��� ������ ���� ���̴�. �Ϲ� ����Լ��� ù��° �Ű������� this�� ����. ���� ���� ��� �Լ����� ���� ��� ������ ����. ���� 
		//cout << nNo;
		return nCount;
	}// ���� ��� �Լ� �������� ���� ��� ������ Ȱ���� �� �ִ�. �Ϲ� ��� �Լ��� this�� �����ϴ� ��������� �ִµ� ���� ��� �Լ����� this�� ����.
	//��ü�� �����ؾ� this�� ����� �����̴�.
protected:
	static int nCount;
public:
	void SetStudent(int no, char* pName);
	void PrintStudent();
	Student();
	Student(int, char*);//������Ÿ���� ������ ������� �ʰ�, �ڷ����� �����.
	virtual ~Student()
	{
		cout << --nCount << " ";
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
Student::Student()
{
	cout << ++nCount << " ";
	cout << "�⺻������" << endl;
	nNo = 0;
	szName = 0;
	//strcpy(this->szName, "�̸�����");

}
Student::Student(int nNo, char* szName)
{
	cout << ++nCount << " ";

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
int Student::nCount = 0;

void operator=a()
{
	Student k(3333, "�����");
}
int main()
{
	//cout << Student::nCount << endl;//������������� ::(����������)���.
	cout << Student::getCount() << endl;
	int no;
	char name[20];
	Student student;
	//cout << student.nCount << endl;//�������� ������� ��ü�� .�����ڻ��.
	cout << student.getCount() << endl;//�������� ������� ��ü�� .�����ڻ��.
	//cout << sizeof(Student) << endl;

	/*cout << "�л� ��ȣ �Է� : ";
	cin >> no;
	cout << "�л� �̸� �Է� : ";
	cin >> name;*/

	student.SetStudent(no, name);
	student.PrintStudent();

	Student stu(2518, "��û");
	stu.PrintStudent();

	Student* p = new Student();
	p->PrintStudent();
	//cout << p->nCount << endl;//�������� ������� ��ü�� ������ -> ���. student.nCount, Student::nCount,stu.nCount. ������ ������ ��ü��� nCountȣ�Ⱑ��.
	cout << p->getCount() << endl;
	a();//��ü�� ��������. ���������� �Լ��� ���� �� �Ҹ�. �������� ����ֺ��� ���� �Ҹ�.

	Student* p1 = new Student(1111, "ȫ�浿��");
	p1->PrintStudent();

	delete p;//��������� ������ ������� �Ҹ���.
	delete p1;
	return 0;
}

