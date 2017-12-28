#include<iostream>

using namespace std;

int main(){
	int nArray[4][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
		{ 10, 11, 12 }
	};

	int* pArray = nArray[0];
	//int** pArray = nArray; 방 몇개를 가져와야하는지 모른다
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			cout << nArray[i][j] << endl;
		}
	}
	cout << endl;
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){ // 행의 갯수
			cout << *(pArray + (i * 3 + j)) << endl;
			}
		}

	return 0;
}