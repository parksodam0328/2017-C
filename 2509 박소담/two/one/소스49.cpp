#include <iostream>

using namespace std;

inline int Add(int a, int b){
	return a + b;
};

int main(){
	int value1 = 10;
	int value2 = 20;
	int sum = 0;

	sum = Add(value1, value2);
	cout << value1 << "+" << value2 << "=" << sum << endl;

	return 0;
}