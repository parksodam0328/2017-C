#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
using namespace std;

class Pet{
public:
	char szName[20]; //�ֿϵ��� �̸�
	Pet(char* pName) {strcpy(szName, pName); }

	virtual void Speak() = 0; // ���� ���� �Լ�, (�ڹ��� �߻�޼ҵ�) �������̵��� �ȵǴ� ���� ���� �� ����! �� �������̵� �ؾ��Ѵ�!

};

class Pub : public Pet {
public:
	Pub(char* pName) : Pet(pName){ }
	void k(){ "================================================================="; }; // ������ ���Ϸ��� ���� �����Լ��� ����� ���� ���ٰ� �Ѵ�!
	void Speak() { cout << szName<<"��~ : �۸�!!" << endl; }

};

class Cat : public Pet{
public:
	Cat(char* pName) : Pet(pName){ }
	void Speak() { cout << szName << "��~ : �߿�!!" << endl; }
};


int main(void){

	Pet* pPet = 0;

	Pub myPub("����");
	Cat myCat("����");
	pPet = &myPub;
	pPet->Speak();
	//pPet->k();
	pPet = &myCat;
	pPet->Speak();

	//Pet *a = new Pet("��");

	//a->Speak();
	return 0;
}//C++�� �ٿ�ĳ������ ����ϳ� ������ ������ �߻��� �� ����. ���� ���������� ����