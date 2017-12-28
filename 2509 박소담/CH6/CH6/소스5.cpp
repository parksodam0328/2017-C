#include <iostream>
using namespace std;
class Shape{
protected: //private: ����� �ǳ� ������ �ȵȴ�.
	int x, y; // ���� ��ġ
	int width, height; // ���� ����
	static int k; // Ŭ���� ��������� ���� ������ ���õǱ� ������ 4����Ʈ�� ������ �� �߰����� �ʴ´�. friend�� ��ӵ��� �ʴ´�.
public:
	
	Shape() {
		cout << "���� �⺻ ������" << endl;
		x = y = width = height = 0;
	}

	//�ʱⰪ�� ���� ������
	Shape(int x, int y, int w, int h) : x(x), y(y), width(w), height(h){ // �ٱ����� �������, ������ �Ű����� (�ʱ�ȭ)
		cout << "�Ű����� �ִ� ���� ������" << endl; 
	}

	virtual ~Shape(){
		cout << "���� �Ҹ���" << endl;
	} //�Ҹ���

	// �簢���� �׸��� �Լ�
	virtual void Draw(){ 
		cout << "������ �׸��ϴ�."<< endl;
	}
};
class Rectangle : public Shape{

public:
	//������
	Rectangle() {
		
		cout << "�簢�� �⺻ ������" << endl;
		//x = y = width = height = 0;
	}

	//�ʱⰪ�� ���� ������
	Rectangle(int x, int y, int w, int h) : Shape(x,y,w,h){
		
		cout << "�Ű����� �ִ� �簢�� ������" << endl;
	}

	~Rectangle(){
		cout<<"�簢�� �Ҹ���"<<endl;
	} //�Ҹ���

	// �簢���� �׸��� �Լ�
	void Draw(){ // �������̵�
		//cout << "�簢���� �׸��ϴ�. ����[" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};

class Ellipes : public Shape{

public:
	//������
	Ellipes() {
		cout << "Ÿ�� �⺻ ������" << endl;
		//x = y = width = height = 0;
	}

	//�ʱⰪ�� ���� ������
	Ellipes(int x, int y, int w, int h) : Shape(x, y, w, h){
		cout << "�Ű����� �ִ� Ÿ�� ������" << endl;
	}

	~Ellipes(){ cout << "Ÿ�� �Ҹ���" << endl; } //�Ҹ���

	// Ÿ���� �׸��� �Լ�
	void Draw(){ // �������̵�
		//cout << "Ÿ���� �׸��ϴ�. ����[" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};

class Triangle : public Shape{

public:
	//������
	Triangle() {
		cout << "�ﰢ�� �⺻ ������" << endl;
		//x = y = width = height = 0;
	}

	//�ʱⰪ�� ���� ������
	Triangle(int x, int y, int w, int h) : Shape(x, y, w, h){ // : Shape(x,y,w,h) -> �ڹٿ��� super() ������ �Ѵ�.
		cout << "�Ű����� �ִ� �ﰢ�� ������" << endl;
	}

	~Triangle(){ cout << "�ﰢ�� �Ҹ���" << endl; } //�Ҹ���

	// �ﰢ���� �׸��� �Լ�
	void Draw(){ // �������̵�
		//cout << "�ﰢ���� �׸��ϴ�. ����[" << x << "," << y << "," << width << "," << height << "]" << endl;
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
	pRect->Draw(); //�簢�� �׸���
	((Shape *)pRect)->Draw(); //�簢�� �׸���
	delete pRect; //�簢�� �Ҹ��� ȣ���
	cout << "=====================================================" << endl;

	Shape *pShape = 0;
	pShape = new Shape(10, 10, 100, 100);
	((Rectangle *)pShape)->Draw(); //�簢�� �׸���
	//((Shape *)pShape)->Draw(); //�簢�� �׸���
	delete pShape; //�簢�� �Ҹ��� ȣ���

	// Rectangle * r = new Shape();�ٿ� ĳ����, ����


	cout << "=====================================================" << endl;

	Shape *pShape1 = new Shape();
	pShape1 = new Shape(10, 10, 100, 100);
	pShape1->Draw(); //�簢�� �׸���
	((Rectangle *)pShape1)->Draw(); //�簢�� �׸���
	delete pShape1; //�簢�� �Ҹ��� ȣ���*/


	Shape *shapes[6];
	cout << "\n�����ڸ� ȣ���մϴ�." << endl;

	shapes[0] = new Rectangle();//�簢�� ��ü ����
	shapes[1] = new Rectangle(10,10,100,100);//�簢�� ��ü ����
	shapes[2] = new Ellipes();//Ÿ�� ��ü ����
	shapes[3] = new Ellipes(10,10,100,100);//Ÿ�� ��ü ����
	shapes[4] = new Triangle();//�ﰢ�� ��ü ����
	shapes[5] = new Triangle(10, 10, 100, 100);//Ÿ�� ��ü ����

}