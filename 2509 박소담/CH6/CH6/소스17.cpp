#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

class Student{
	int nNo; //��ȣ
	char szName[20]; //�̸�

public:
	Student() {}
	Student(int no, char *name){
		SetData(no, name);
	}
	void SetData(int no, char*name){
		nNo = no;
		strcpy(szName, name);
	}
	//���Ͽ� �����ϴ� �Լ�
	void Save(ofstream& ofs){
		ofs << nNo << szName << endl;
		cout << "SAVE: " << nNo << ", " << szName << endl;
	}
	//���Ͽ��� �о���� �Լ�
	void Read(ifstream& ifs){
		ifs >> nNo >> szName;
		cout << "READ: " << nNo << ", " << szName << endl;
	}
	//���Ͽ� �����ϱ� ���� << ������ �ߺ� ����
	friend ofstream& operator<<(ofstream& ofs, Student& student){
		cout << "<<";
		student.Save(ofs);
		return ofs;
	}
	//���Ͽ��� �о���� ���� >> ������ �ߺ� ����
	friend ifstream& operator>>(ifstream& ifs, Student& student){
		cout << ">>";
		student.Read(ifs);
		return ifs;
	}

};
void SaveStudent(char *pfName){
	Student students[7]; // �л� ��ü ����
	students[0].SetData(1, "���ϳ�"); // ��ü �ʱⰪ ����
	students[1].SetData(2, "��θ�");
	students[2].SetData(3, "�輼��");
	students[3].SetData(4, "��׸�");
	students[4].SetData(5, "��ٸ�");
	students[5].SetData(6, "�迩��");
	students[6].SetData(7, "���ϰ�");
	int nCount = sizeof(students) / sizeof(Student); // �迭 ���� ���
	cout << "COUNT: " << nCount << endl;
	cout << "����� ��ü ���� : " << nCount << endl;
	ofstream outfile("out4.dat"); //���� ����
	outfile << "SFX" << endl;
	outfile << nCount << endl;
	for (int i = 0; i < nCount; i++){
		//students[i].Save(outfile); // �Լ� ȣ��� ����
		outfile << students[i]; // �ߺ����ǵ� << �����ڷ� ����
	}
	outfile.close(); // ���� �ݱ�
}
void ReadStudent(char *pfName){
	Student* pStudents;
	ifstream infile(pfName); // ���� ����
	/*if (infile == 0){
		if (infile.bad() == false) cout << "������ �������� �ʽ��ϴ�." << endl;
		return;
	}*/
	int nCount = 0;
	char szSFX[4];
	infile >> szSFX;
	cout << "File Perfix: " << szSFX << endl;
	infile >> nCount;
	pStudents = new Student[nCount];
	cout << "������ ��ü ���� : " << nCount << endl;
	for (int i = 0; i < nCount; i++){
		//pStudents[i].Read(infile); // �Լ� ȣ��� �б�
		infile >> pStudents[i]; // �ߺ� ���ǵ� >> �����ڷ� �б�
	}
	infile.close(); // ���� �ݱ�
	delete[] pStudents;
}

int main(void){
	SaveStudent("out4.dat");
	
	cout << "===============================================================" << endl;
	ReadStudent("out4.dat");
	return 0;
}