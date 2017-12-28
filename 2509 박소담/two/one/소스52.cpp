
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand((unsigned)time(0));
	int value;
	for (int i = 0; i < 10; i++){ // 제대로된 범위인지 확인하기 위해 for문 안에 if문을 넣어 벗어나는 범위일 시 이상한 문자를 찍도록 하면 한눈에 오류를 체크 가능 (바운더리 체크)
		value = 50 + (rand() % 50);
		cout << i << " : 난수값 : " << value << endl;
	}
}