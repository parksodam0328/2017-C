#include<iostream>

using namespace std;

int main(){
	int nArray[2][4][3] = {
		{ { 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
		{ 10, 11, 12 } },
		{ { 13, 14, 15 },
		{ 16, 17, 18 },
		{ 19, 20, 21 },
		{ 22, 23, 24 } }
	};

	int* pArray = nArray[0][0];
	//int** pArray = nArray; 방 몇개를 가져와야하는지 모른다

	int k = sizeof(nArray[0][0]) / sizeof(int); //열의 갯수

	for (int r = 0; r < sizeof(nArray) / sizeof(nArray[0]); r++){
		for (int i = 0; i < (sizeof(nArray[0]) / sizeof(nArray[0][0])); i++){ // 행의 갯수
			for (int j = 0; j < k; j++){
				cout << nArray[r][i][j] << endl;
			}
		}
	}

	cout << endl;

	for (int r = 0; r < sizeof(nArray) / sizeof(nArray[0]); r++){
		for (int i = 0; i < (sizeof(nArray[0]) / sizeof(nArray[0][0])); i++){
			for (int j = 0; j < sizeof(nArray[0][0]) / sizeof(nArray[0][0][0]); j++){
				cout << *(pArray + (r * 4 * 3 + i * 3 + j)) << endl;
			}
		}
	}


}