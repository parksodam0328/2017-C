#include <iostream>
using namespace std;
class Shape{
protected: //private: 상속은 되나 접근이 안된다.
	int x, y; // 시작 위치
	int width, height; // 폭과 높이
	static int k; // 클래스 멤버변수는 따로 공간이 마련되기 때문에 4바이트의 공간이 더 추가되지 않는다. friend는 상속되지 않는다.
public:
	
	Shape() {
		cout << "도형 기본 생성자" << endl;
		x = y = width = height = 0;
	}

	//초기값을 갖는 생성자
	Shape(int x, int y, int w, int h) : x(x), y(y), width(w), height(h){ // 바깥쪽이 멤버변수, 안쪽이 매개변수 (초기화)
		cout << "매개변수 있는 도형 생성자" << endl; 
	}

	virtual ~Shape(){
		cout << "도형 소멸자" << endl;
	} //소멸자

	// 사각형을 그리는 함수
	virtual void Draw(){ 
		cout << "도형을 그립니다."<< endl;
	}
};
class Rectangle : public Shape{

public:
	//생성자
	Rectangle() {
		
		cout << "사각형 기본 생성자" << endl;
		//x = y = width = height = 0;
	}

	//초기값을 갖는 생성자
	Rectangle(int x, int y, int w, int h) : Shape(x,y,w,h){
		
		cout << "매개변수 있는 사각형 생성자" << endl;
	}

	~Rectangle(){
		cout<<"사각형 소멸자"<<endl;
	} //소멸자

	// 사각형을 그리는 함수
	void Draw(){ // 오버라이딩
		//cout << "사각형을 그립니다. 영역[" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};

class Ellipes : public Shape{

public:
	//생성자
	Ellipes() {
		cout << "타원 기본 생성자" << endl;
		//x = y = width = height = 0;
	}

	//초기값을 갖는 생성자
	Ellipes(int x, int y, int w, int h) : Shape(x, y, w, h){
		cout << "매개변수 있는 타원 생성자" << endl;
	}

	~Ellipes(){ cout << "타원 소멸자" << endl; } //소멸자

	// 타원을 그리는 함수
	void Draw(){ // 오버라이딩
		//cout << "타원을 그립니다. 영역[" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};

class Triangle : public Shape{

public:
	//생성자
	Triangle() {
		cout << "삼각형 기본 생성자" << endl;
		//x = y = width = height = 0;
	}

	//초기값을 갖는 생성자
	Triangle(int x, int y, int w, int h) : Shape(x, y, w, h){ // : Shape(x,y,w,h) -> 자바에서 super() 역할을 한다.
		cout << "매개변수 있는 삼각형 생성자" << endl;
	}

	~Triangle(){ cout << "삼각형 소멸자" << endl; } //소멸자

	// 삼각형을 그리는 함수
	void Draw(){ // 오버라이딩
		//cout << "삼각형을 그립니다. 영역[" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};

int main(void){ 
	Rectangle r1;Rectangle r2(1,2,3,4);
	
	Ellipes e1;Ellipes e2(5,6,7,8);
	
	Triangle t1;Triangle t2(9,0,1,2);
	

	r1.Draw();
	r2.Draw();
	e1.Draw();
	e2.Draw();
	t1.Draw();
	t2.Draw();
	cout << sizeof(Shape) << endl; //16
	cout << sizeof(Rectangle) << endl;//16*/
	
	/*Rectangle *pRect = 0;
	pRect = new Rectangle(10, 10, 100, 100);
	pRect->Draw(); //사각형 그리기
	((Shape *)pRect)->Draw(); //사각형 그리기
	delete pRect; //사각형 소멸자 호출됨
	cout << "=====================================================" << endl;

	Shape *pShape = 0;
	pShape = new Shape(10, 10, 100, 100);
	((Rectangle *)pShape)->Draw(); //사각형 그리기
	//((Shape *)pShape)->Draw(); //사각형 그리기
	delete pShape; //사각형 소멸자 호출됨

	// Rectangle * r = new Shape();다운 캐스팅, 오류


	cout << "=====================================================" << endl;

	Shape *pShape1 = new Shape();
	pShape1 = new Shape(10, 10, 100, 100);
	pShape1->Draw(); //사각형 그리기
	((Rectangle *)pShape1)->Draw(); //사각형 그리기
	delete pShape1; //사각형 소멸자 호출됨*/


	Shape *shapes[6];
	cout << "\n생성자를 호출합니다." << endl;

	shapes[0] = new Rectangle();//사각형 객체 생성
	shapes[1] = new Rectangle(10,10,100,100);//사각형 객체 생성
	shapes[2] = new Ellipes();//타원 객체 생성
	shapes[3] = new Ellipes(10,10,100,100);//타원 객체 생성
	shapes[4] = new Triangle();//삼각형 객체 생성
	shapes[5] = new Triangle(10, 10, 100, 100);//타원 객체 생성

}