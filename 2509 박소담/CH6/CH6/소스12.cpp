#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <time.h>
#include <string.h>
#include <math.h>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point(){}
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
	void setX(int x){
		this->x = x;
	}
	int getX(){
		return x;
	}
	void setY(int y){
		this->y = y;
	}
	int getY(){
		return y;
	}
};
class Line{
	char name[20];
	Point p1, p2;
public:
	Line() {}
	Line(Point& p1, Point &p2, char* name){
		this->p1.setX(p1.getX());
		this->p1.setY(p1.getY());
		this->p2.setX(p2.getX());
		this->p2.setY(p2.getY());
		strcpy(this->name, name);
	}
	void print(){
		double res = sqrt((double)abs((p2.getX() - p1.getX())*(p2.getX() - p1.getX())) + abs((p2.getY() - p1.getY())*(p2.getY() - p1.getY())));
		cout << "��(" << p1.getX() << ", " << p1.getY() << ")�� ��(" << p2.getX() << ", " << p2.getY() << ")�� �մ� �� " << name << "�� ���� : " << res << endl;
	}
};
int main(void){
	char linename[20];
	srand((unsigned)time(0));
	int x1, x2, y1, y2, num;
	Line * line;
	cout << "���� ������ �Է��ϼ���. ";
	cin >> num;
	line = new Line[num];
	x1 = (rand() % 30 - (-30) + 1) + (-30);
	y1 = (rand() % 30 - (-30) + 1) + (-30);
	x2 = (rand() % 30 - (-30) + 1) + (-30);
	y2 = (rand() % 30 - (-30) + 1) + (-30);
	Point * p1;
	p1 = new Point[num];
	Point * p2;
	p2 = new Point[num];
	for (int i = 0; i < num; i++){
		x1 = (rand() % 30 - (-30) + 1) + (-30);
		y1 = (rand() % 30 - (-30) + 1) + (-30);
		x2 = (rand() % 30 - (-30) + 1) + (-30);
		y2 = (rand() % 30 - (-30) + 1) + (-30);
		cout << "���� �̸��� �Է��ϼ���. : ";
		cin >> linename;
		p1[i] = Point(x1, y1);
		p2[i] = Point(x2, y2);
		line[i] = Line(p1[i], p2[i], linename);
		x1 = 0; x2 = 0; y1 = 0; y2 = 0;
	}
	for (int i = 0; i < num;i++)
	line[i].print();

	return 0;
}