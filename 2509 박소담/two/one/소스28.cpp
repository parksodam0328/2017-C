#include <iostream>
using namespace std;
int main(){
	int money;
	cout << "�޿��� �Է��ϼ��� : ";
	cin >> money;
	int sum = 0;
	int cnt = 0;
	int mon = money;
	int unit = 50000;
	bool flg = 1;
	while (1){
		cnt = mon / unit;//53250 -> 5
		sum += cnt;
		mon = mon%unit; //3250
		if(cnt!=0)cout << unit << "���� : " << cnt << "��" << endl;
		if (mon == 0)break;
		if (flg){
			unit = unit / 5;
		}
		else
			unit = unit / 2;
		//flg ^= 1;
		flg = !flg;
	}
	cout << "���� : " << sum<<endl;
	return 0;
}