#include <iostream>

using namespace std;

int main(void){
	const char *p1 = "abcd";
	cout << p1 << endl; //abcd 출력
	p1++;
	cout << p1 << endl; //bcd 출력
	p1--;
	cout << p1 << endl; //bcd 출력
	p1 = "kbcd"; // 주소가 바뀜 그래서 오류가 안남, 내용을 바꿀 수 없음
	cout << p1 << endl;
	//*p1 = 'k'; 오류, 값 바꿀 수 없음

	char * const p2 = "abcd";
	cout << p2 << endl; //abcd 출력
	//p2++;
	cout << p2 << endl; //bcd 출력
	//p2--;
	cout << p2 << endl; //bcd 출력
	//p2 = "kbcd"; // 주소가 바뀜 그래서 오류가 안남, 내용을 바꿀 수 없음
	cout << p2 << endl;
	//*p2 = 'k'; // 디버깅 에러가 나는 문장, 그 주소의 내용을 바꾸는 것도 디버깅 에러가 난다.
	char *p3 = p2;
	//*p3 = 'k'; // 디버깅 에러가 나는 문장, p2의 값은 상수화 되었기 때문에 돌아서 가도 에러가 나는 것이다.
	const char * const p4 = "abcd";
	//p4++; *p4++; 오류
	return 0;
}