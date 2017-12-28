#include <iostream>
using namespace std;

class Horse{
public:
	Horse() { cout << "말(Horse) 생성자" << endl; }
	virtual ~Horse() { cout << "말(Horse) 소멸자" << endl; } // virtual을 사용하면 자식것도 실행한것, 상속 관계에서는 사용

	virtual void Speak() { cout << "말(Horse)이 웁니다. 히히힝~" << endl; }

};

class Bird {
public:
	Bird() { cout << "새(Bird) 생성자" << endl; }
	virtual ~Bird() { cout << "새(Bird) 소멸자" << endl; }

	virtual void Speak() { cout << "새(Bird) 웁니다. 짹짹짹~" << endl; }
	virtual void Fly() { cout << "하늘을 날 수 있습니다." << endl; }

};

class Pegasus : public Bird, public Horse{
public:
	Pegasus() { cout << "페가수스(Pegasus) 생성자" << endl; }
	~Pegasus() { cout << "페가수스(Pegasus) 소멸자" << endl; }

	void Speak() { /*Horse::Speak(); Bird::Speak();*/cout << "페가수스가 웁니다. 히히힝~" << endl; }
};


int main(void){

	Pegasus *p = new Pegasus();
	p->Speak();
	p->Fly();
	delete p;
	cout << "===============================================================" << endl; 
	Bird *h = new Pegasus();
	h->Speak();
	h->Fly(); // 말클래스에는 Fly() 함수가 없기 때문에 컴파일 오류가 일어난다.
	delete h;
}