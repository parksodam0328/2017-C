#include <iostream>
//#define NUM 5
using namespace std;
int main(){
	int input,sub;

	cout << "몇명을 입력하시겠습니까? ";
	cin >> input;

	cout << "몇개의 과목을 입력하시겠습니까?";
	cin >> sub;

	int *sukcha = new int[input];
	char **hakbun = new char*[input];
	char **name = new char*[input];
	int **score = new int*[input];
	char subject[9][5] = { "국어", "수학", "C++","자바", "과학", "OS", "DS", "SB", "영어" };
	double *avg = new double[input];
	char *grade = new char[input];

	for (int i = 0; i < input; i++){
		score[i] = new int[sub+1];
		hakbun[i] = new char[10];
		name[i] = new char[10];
	}

	avg = new double[input];
	sukcha = new int[input];
	grade = new char[input];

	for (int i = 0; i < input; i++){
		cout << endl;
		cout << "학번 입력:";
		cin >> hakbun[i];
		cout << "이름 입력:";
		cin >> name[i];
		score[i][sub] = 0;
		for (int j = 0; j < sub; j++){	
			cout << subject[j] << " 점수 입력 : ";
			cin >> score[i][j];
			while (score[i][j] <0 || score[i][j] >100){
				cout << "다시 입력 : ";
				cin >> score[i][j];	
			}
			score[i][sub] += score[i][j];
		}
		avg[i] = (double)score[i][sub] / sub;	
	}

	for (int i = 0; i < input; i++){
		sukcha[i] = 1;
	}

	for (int i = 0; i < input; i++){
		for (int j = 0; j <input; j++)
		if (score[i][sub]<score[j][sub])
			sukcha[i]++;
	}
	cout << endl;
	
	printf("%10s %10s", "학번", "이름");
	
	for (int i = 0; i < sub; i++){
			printf("%7s", subject[i]);
		}
	printf("%7s %7s %7s %7s\n","총점", "평균", "등급", "석차");
	cout << "==============================================================================================="<<endl;
	for (int i = 0; i < input; i++){
		printf("%10s %10s", hakbun[i], name[i]);
		for (int j = 0; j < sub; j++){
			printf("%7d", score[i][j]);
		}
		printf("%7d", score[i][sub]);
		printf("%8.2f", avg[i]);
		switch ((int)avg[i] / 10)
		{
		case 10:
		case 9:grade[i] = 'A'; printf("%8c", grade[i]); break;
		case 8:grade[i] = 'B'; printf("%8c", grade[i]); break;
		case 7:grade[i] = 'C'; printf("%8c", grade[i]); break;
		case 6:grade[i] = 'D'; printf("%8c", grade[i]); break;
		default:grade[i] = 'F'; printf("%8c", grade[i]); break;
		}
		printf("%8d", sukcha[i]);
		cout << endl;
	}
	cout << "===============================================================================================" << endl;
	cout << endl;
	for (int i = 0; i<input; i++){
		delete[]name[i];
		delete[]score[i];
		delete[]hakbun[i];
	}

	delete[] sukcha;
	delete[] avg;
	delete[] grade;
	delete[] name;
	delete[] score;
	delete[] hakbun;

	return 0;
}