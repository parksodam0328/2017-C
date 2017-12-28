#include<iostream>

using namespace std;

class Complex{
	int real;
	int imaginery;
	int tmpr;
	int tmpi;

public:
	Complex(int real, int imaginery){
		this->real = real;
		this->imaginery = imaginery;
	}

	void printComplex(){

		if (real == 0 && imaginery == 0){//둘다 0이면
			cout << 0 << endl;
		}
		else if (real == 0){//real만 0이면
			cout << imaginery << "i" << endl;
		}
		else if (imaginery == 0){//imaginery만 0이면
			cout << real << endl;
		}
		else if (imaginery == 1){
			cout << real << " + " << "i " << endl;
		}
		else{
			if (imaginery > 0 && imaginery !=1)
				cout << real << " + " << imaginery << "i " << endl;
			else
				cout << real << " - " << imaginery*-1 << "i " << endl;
		}
	}

	/*Complex& operator+(Complex& com){
		this->real += com.real;
		this->imaginery += com.imaginery;

		return *this;
	}*/
	
	Complex& operator-(Complex& com){
		this->real -= com.real;
		this->imaginery -= com.imaginery;

		return *this;
	}

	void operator=(Complex& com){
		this->real = com.real;
		this->imaginery = com.imaginery;
	} 
	/* 곱셈 숙제하고 나누기 연산자 중복정의 숙제 */
	friend void operator>>(istream& ist, Complex& com);
	friend Complex& operator+(Complex &com1, Complex & com2);
	Complex& operator*(Complex &com) {
		int real = this->real;
		int imaginery = this->imaginery;
		real = (this->real*com.real) + (this->imaginery*com.imaginery*(-1));
		imaginery = (this->real*com.imaginery) + (this->imaginery*com.real);
		return Complex(real,imaginery);
	}

	/*Complex& operator/(Complex &com) {
		double imsi = real*com.real + imaginery*com.imaginery;
		real = (int)(((real*com.real) + (imaginery*com.imaginery)) / imsi);
		imaginery= (int)(((imaginery*com.real) - (real*com.imaginery)) / imsi);

		return  Complex(real,imaginery);
	}*/
	Complex& operator++(){
		int real = this -> real;
		this->real++;
		cout << "전치 연산" << endl;
		return *this;
	}
	/*Complex& operator++(int Complex prev){
		this->real++;
		cout << "후치 연산" << endl;
		return prev;
	}*/
	
};

Complex& operator+(Complex& com1, Complex& com2){
	int real = com1.real + com2.real;
	int imaginery = com1.imaginery + com2.imaginery;

	return Complex(real, imaginery);
}
void operator<<(ostream& ost, Complex& com){
	com.printComplex();
	}

void operator>>(istream& ist, Complex& com){
	int r, i;
	cout << "복소수를 입력" << endl;
	
	cout << "실수 입력 : ";
	cin >> r;
	cout << "허수 입력 : ";
	cin >> i;
	com.real = r;
	com.imaginery = i;
}
int main(){
	Complex c1(3, 5);
	Complex c2(3, -5);
	Complex c3(-2, 4);
	Complex c4(-2, -4);
	Complex c5(3, 0);
	Complex c6(0, -4);
	Complex c7(0, 0);
	Complex c8(0, 4);

	cout << c1;
	cout << c2;
	cout << c3;
	cout << c4;
	cout << c5;
	cout << c6;
	cout << c7;
	cout << c8;

	Complex c9 = c1 + c2;
	cout << c9;

	cout << c3;
	cout << c5;

	c5 = c3;

	cout << c3;
	cout << c5;

	Complex c10 = c2 - c4;
	cout << c10;

	//cin >> c1;
	//cout << c1;

	Complex c11 = c1*c2; 
	cout << c11;

	//Complex a(3,5);
	//Complex b(4,5);
	//a = c1++;
	//b = ++c1;
	//cout << b;
	//cout << c1;
}
