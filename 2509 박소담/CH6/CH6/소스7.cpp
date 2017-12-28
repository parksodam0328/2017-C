#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
using namespace std;

class Pet{
public:
	char szName[20]; //애완동물 이름
	Pet(char* pName) {strcpy(szName, pName); }

	virtual void Speak() = 0; // 순수 가상 함수, (자바의 추상메소드) 오버라이딩이 안되는 것을 막을 수 있음! 꼭 오버라이딩 해야한다!

};

class Pub : public Pet {
public:
	Pub(char* pName) : Pet(pName){ }
	void k(){ "================================================================="; }; // 오류를 줄일려면 순수 가상함수로 만드는 것이 좋다고 한다!
	void Speak() { cout << szName<<"야~ : 멍멍!!" << endl; }

};

class Cat : public Pet{
public:
	Cat(char* pName) : Pet(pName){ }
	void Speak() { cout << szName << "야~ : 야옹!!" << endl; }
};


int main(void){

	Pet* pPet = 0;

	Pub myPub("해피");
	Cat myCat("코코");
	pPet = &myPub;
	pPet->Speak();
	//pPet->k();
	pPet = &myCat;
	pPet->Speak();

	//Pet *a = new Pet("슈");

	//a->Speak();
	return 0;
}//C++은 다운캐스팅을 허용하나 논리적인 오류가 발생할 수 있음. 또한 권장하지는 않음