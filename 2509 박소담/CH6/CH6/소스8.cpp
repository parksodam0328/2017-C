#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
class Phone{
protected:
	char szNumber[20];//전화번호
public:
	Phone(){ // 전화기 클래스 생성자
		szNumber[0] = 0;
		cout << "Phone 생성자 #1\n";
	}
	Phone(char * pszNumber){
		cout << "Phone 생성자 #2\n" << endl;
		strcpy(szNumber, pszNumber);
	}
	virtual ~Phone(){
		cout << "Phone 소멸자" << endl;
	}

public:
	void SetNumber(char *pNo){
		strcpy(szNumber, pNo);
	}
	char *GetNumber(){
		return szNumber;
	}
	void Call(){
		cout << GetNumber() << "로 전화를 건다" << endl;
	}
	virtual void ShowInfo(){ cout << "전화번호 : " << GetNumber() << endl; }
};

class Camera{
public:
	Camera(){
		cout << "Camera 생성자" << endl;
	}
	virtual ~Camera(){
		cout << "Camera 소멸자" << endl;
	}
public:
	void Shutter(){
		cout << "사진을 찍는다" << endl;
	}
};

class MobilePhone : public Phone, public Camera{
public:
	MobilePhone(){ cout << "MobilePhone 생성자 #1\n"; }
	MobilePhone(char* pNumber) : Phone(pNumber){
		cout << "MobilePhone 생성자 #2\n" << endl;
	}
	virtual ~MobilePhone(){
		cout << "MobilePhone 소멸자" << endl;
	}
public:
	void ShowInfo(){
		Phone::ShowInfo();
		cout << "200백만 화소 카메라!" << endl;
	}
};
int main(void){
	Phone * p1 = new Phone();
	p1->Call();
	p1->GetNumber();
	p1->SetNumber("01062292148");
	p1->ShowInfo();
	//p1->Shutter();
	Phone * p2 = new MobilePhone();
	p2->Call();
	p2->GetNumber();
	p2->SetNumber("01062292148");
	p2->ShowInfo();
	//p2->Shutter(); // Phone 타입이므로 Phone에 있는 메소드만 사용이 가능하다
	MobilePhone *m1 = new MobilePhone();
	m1->Call();
	m1->GetNumber();
	m1->SetNumber("01062292148");
	m1->ShowInfo();
	m1->Shutter();
	delete p1;
	delete p2;
	delete m1;

	return 0;
}