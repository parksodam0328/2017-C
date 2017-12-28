#include <iostream>
using namespace std;
int main(){
	int sum = 0;
	for (int i = 0; i <= 10; i++){
		sum += i;
	}

	cout << "1부터 10까지의 합은" << sum << "입니다." << endl;
	return 0;
}