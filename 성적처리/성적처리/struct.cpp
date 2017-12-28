#include<iostream>

using namespace std;


struct Student
{
	char st_number[5];//일차원배열
	char st_name[10];//
	int *score;//고정되지 않으면 동적으로 할당해야 합니다.
	double avg;
	char major;
	int grade;
};

int main(){

	int st_cnt;
	cout << "몇명을 입력하시겠습니까?";
	cin >> st_cnt;

	int subject;
	cout << "과목수를 입력하세요 : ";
	cin >> subject;

	char sub[9][6] = { "국어", "영어", "수학", "C++", "JAVA", "과학", "OS ", "SB ", "DS " };

	Student* stu = new Student[st_cnt];

	for (int i = 0; i < st_cnt; i++){

		stu[i].score = new int[subject + 1];

		cout << "학생 학번을 입력해주세요 : ";
		cin >> stu[i].st_number;

		cout << "학생 이름을 입력해주세요 : ";
		cin >> stu[i].st_name;

		stu[i].score[subject] = 0;//초기화

		for (int j = 0; j < subject; j++)
		{
			do{
				cout << "학생 " << i + 1 << "의 " << sub[j] << "점수를 입력해주세요 : ";
				cin >> stu[i].score[j];

				if (stu[i].score[j]<0 || stu[i].score[j]>100)
					cout << "잘못 입력하셨습니다" << endl;
			} while (stu[i].score[j]<0 || stu[i].score[j]>100);

			stu[i].score[subject] += stu[i].score[j];
		}
		stu[i].avg = (double)stu[i].score[subject] / subject;

		switch ((int)stu[i].avg / 10){
		case 10:
		case 9: stu[i].major = 'A'; break;
		case 8: stu[i].major = 'B'; break;
		case 7: stu[i].major = 'C'; break;
		case 6: stu[i].major = 'D'; break;
		default: stu[i].major = 'F';
		}
	}

	for (int i = 0; i < st_cnt; i++)
	{
		stu[i].grade = 1;
	}
	for (int i = 0; i < st_cnt - 1; i++){//0,1,2,
		for (int j = i + 1; j < st_cnt; j++){//1,2,3
			if (stu[i].avg < stu[j].avg){
				stu[i].grade++;
			}
			else if (stu[i].avg >stu[j].avg){
				stu[j].grade++;
			}
		}
	}

	printf(" 학번    이름  ");
	for (int title = 0; title < subject; title++)
	{
		printf("%7s", sub[title]);
	}
	printf("   총점     평균     등급      석차\n");

	for (int i = 0; i < st_cnt; i++)
	{
		printf("%5s", stu[i].st_number);
		printf("%9s", stu[i].st_name);
		for (int j = 0; j < subject + 1; j++)
		{
			printf("%7d", stu[i].score[j]);
		}
		printf("%10.2f", stu[i].avg); //100.00
		printf("%8c", stu[i].major);
		printf("%10d\n", stu[i].grade);
	}

	for (int i = 0; i < st_cnt; i++)
	{
		delete[] stu[i].score;
	}
	delete[] stu;

	return 0;
}