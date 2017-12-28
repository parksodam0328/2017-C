#include <iostream>
using namespace std;
//#define subject 3
struct Student{
		char hakbun[5];
		char name[20];
		
		//int score[subject+1]; // pointer�� ���� 
		int *score;
		double avg;
		char grade;
		int rank;
	};

int main(){

	char sub[9][5] = { "����", "����", "C++", "�ڹ�", "����", "OS", "DS", "SB", "����" };
	int subject;
	int input;
	cout << "����� �Է��Ͻðڽ��ϱ�? ";
		cin >> input;
	Student *stu= new Student[input];
	cout << "��� ������ �Է��Ͻðڽ��ϱ�?";
	cin >> subject;
	for (int i = 0; i < input; i++){
		stu[i].score = new int[subject + 1];
	}
	
	for (int i = 0; i < input; i++){
		
		cout << "�й� �Է�:";
		cin >> stu[i].hakbun;
		cout << "�̸� �Է�:";
		cin >> stu[i].name;
		stu[i].score[subject] = 0;
		for (int j = 0; j < subject; j++){
			cout << sub[j] << " ���� �Է� : ";
			cin >> stu[i].score[j];
			while (stu[i].score[j] <0 || stu[i].score[j] >100){
				cout << "�ٽ� �Է� : ";
				cin >> stu[i].score[j];
			}
			stu[i].score[subject] += stu[i].score[j];
		}
		stu[i].avg = (double)stu[i].score[subject] / subject;
		cout << endl;
	}

	for (int i = 0; i < input; i++){
		stu[i].rank = 1;
	}

	for (int i = 0; i < input; i++){
		for (int j = 0; j <input; j++)
		if (stu[i].score[subject]<stu[j].score[subject])
			stu[i].rank++;
	}
	cout << endl;

	printf("%10s %10s", "�й�", "�̸�");
	for (int i = 0; i < subject; i++){
		printf("%7s", sub[i]);
	}
	printf("%7s %7s %7s %7s\n", "����", "���", "���", "����");
	cout << "===============================================================================================" << endl;
	for (int i = 0; i < input; i++){
		printf("%10s %10s", stu[i].hakbun, stu[i].name);
		for (int j = 0; j < subject; j++){
			printf("%7d", stu[i].score[j]);
		}
		printf("%7d", stu[i].score[subject]);
		printf("%8.2f", stu[i].avg);
		switch ((int)stu[i].avg / 10)
		{
		case 10:
		case 9:stu[i].grade = 'A'; printf("%8c", stu[i].grade); break;
		case 8:stu[i].grade = 'B'; printf("%8c", stu[i].grade); break;
		case 7:stu[i].grade = 'C'; printf("%8c", stu[i].grade); break;
		case 6:stu[i].grade = 'D'; printf("%8c", stu[i].grade); break;
		default:stu[i].grade = 'F'; printf("%8c", stu[i].grade); break;
		}
		printf("%8d", stu[i].rank);
		cout << endl;
	}
	cout << "===============================================================================================" << endl;
	cout << endl;
	for (int i = 0; i < input; i++){
		delete[] stu[i].score;
	}
	for (int i = 0; i < input; i++){
		delete[] stu; 
	}
	return 0;
}