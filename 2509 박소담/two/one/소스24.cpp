#include <iostream>
using namespace std;
int main(){

	for (char i = 'a'; i <= 'e'; i += 2){
		for (char j = 'a'; j <= i; j += 2){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}