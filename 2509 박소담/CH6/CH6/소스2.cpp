#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


class Student{
public:
	int nNo;
	char *szName;
	Student(){
		cout << "�⺻ ������"<<endl;
		nNo = 0;
		szName = NULL;
	}
	Student(int no, char*name){
		cout << "�Ű� ���� �ִ� ������" << endl;
		szName = new char[20];
		nNo = no;
		strcpy(szName, name);
	}
	Student(Student & st){
		cout << "���� ������" << endl;
		this->nNo = st.nNo;
		this->szName = new char[20];
		strcpy(this->szName, st.szName);
	}
	~Student(){
		if (szName !=NULL){
			cout << szName << " �Ҹ���" << endl;
			delete[] szName;
		}
		else cout <<"�Ҹ���" << endl;
	}
	void PrintStudent(){
		if (szName!=NULL)
		cout << "��ȣ : " << nNo << ", "<<"�̸� : " <<szName << endl;
		else cout << "��ȣ : " << nNo << endl;
	}
		Student& operator=(Student& st){ // ������ �ߺ� ����, call by reference�� �Ű������� �Ѱ��־�� �Ѵ�!
			if (this != &st){
				this->nNo = st.nNo;
				this->szName = new char[20];
				strcpy(this->szName, st.szName);
			}
		return *this; // Ȥ�� st�� �����Ѵ�.
	}
};

int main(void){
	Student s1(5, "������"); //�Ű����� �ִ� ������
	Student s2; //�⺻�����ڴ� ()�� ������ �ʴ´�.
	s1.PrintStudent();
	s2.PrintStudent();
	s2 = s1;
	s1.PrintStudent();
	s2.PrintStudent();
	strcpy(s2.szName, "�����");
	s1.PrintStudent();
	s2.PrintStudent();
	Student s3;
	s3.PrintStudent();
	s3 = s2 = s1;
	Student s4(3, "������");
	s4 = s4;
	Student s5(s4); // s5�� �޸𸮰� ���� ��������� ����, ��ü�� ��������� ���� ���� �����ڸ� ���ٿ��� ����, ���� ����� ������ �Ͼ
	return 0;
}