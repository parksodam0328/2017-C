//p.79~80
#include<iostream>
#include<time.h>

using namespace std;

int main(){
	srand((unsigned)time(0));
	int value = 0;
	for (int i = 0; i < 10; i++){
		value = 50 + (rand() % 50); //50보다 크고 100보다 작게

		cout << i << ":난수값:" << value << endl;
	}
}