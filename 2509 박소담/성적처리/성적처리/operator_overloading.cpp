#include <iostream>
using namespace std;

//전역변수
int sub;
char subject[9][5] = { "국어", "수학", "영어", "과학", "C++", "자바", "OS", "DS", "SB" }; //과목명

class Student {

	char number[5];
	char name[10];
	int * score;
	double avg;
	char grade;
	int rank;

	
public:
	Student() {
		cout<<"생성자"<<endl;
		this->score = new int[sub + 1]; //과목수+합계만큼 생성
		this->score[sub] = 0; //총점 초기화
		this->rank = 1; //석차 초기화
	}

	~Student() {
		delete[] score;
		cout<<"소멸자"<<endl;
	}
void input() {
		cout << "학번: ";
		cin >> this->number;
		cout << "이름: ";
		cin >> this->name;

		for (int j = 0; j < sub; j++) {
			do{
				cout << subject[j] << "점수: ";
				cin >> this->score[j];
				if (this->score[j] < 0 || this->score[j] > 100) {
					cout << "잘못된 점수 입니다." << endl;
				}
			} while (this->score[j] < 0 || this->score[j] > 100);
			this->score[sub] += this->score[j];
		}//endOfForJ

		cout << endl;
	}void print(){
		printf("%8s %8s", this->number, this->name);
		for (int i = 0; i < sub; i++){
			printf("%8d", this->score[i]);
		}
		printf(" %8d %8.2f %8c %8d\n", this->score[sub], this->avg, this->grade, this->rank);
	}

	void process() {
		this->avg = this->score[sub] / sub;

		switch ((int)this->avg / 10) {
		case 10: case 9: this->grade = 'A'; break;
		case 8: this->grade = 'B'; break;
		case 7: this->grade = 'C'; break;
		case 6: this->grade = 'D'; break;
		default: this->grade = 'F'; break;
		} //endOfSwitch
	}
	friend ostream& operator<<(ostream& ost, Student& st);
	friend void ranking(int people);
};
ostream& operator<<(ostream& ost, Student& st){
	/*printf("%8s %8s", st.number, st.name);
	for (int i = 0; i <= sub; i++){
		printf("%8d", st.score[i]);
	}
	printf(" %8.2f %8c %8d\n", st.avg, st.grade, st.rank);*/
	st.print();
	return ost;
}
Student *stu = 0;

void ranking(int people){
	for (int i = 0; i < people; i++){
		for (int j = 0; j < sub; j++)
		if (stu[i].score[j] < stu[i].score[j])
			stu[i].rank++;
	}
}
int main() {
	int num;
	int person;

	cout << "몇 명을 입력하시겠습니까? "; cin >> person;
	cout << "몇 과목을 입력하시겠습니까?"; cin >> sub;
	cout << endl;

	stu = new Student[person];
	while (true){
		
			cout << "1 입력" << endl;
			cout << "2 출력" << endl;
			cout << "3 종료" << endl;
			cin >> num;
			if (num == 1 || num == 2 || num == 3){
			for (int i = 0; i < person; i++) {

			switch (num){
			case 1: stu[i].input(); stu[i].process(); break;
			case 2: printf("%8s %8s", "학번", "이름 ");
				for (int j = 0; j < sub; j++) printf("%8s", subject[j]);
				printf("%8s %8s %8s %8s \n", "합계", "평균", "등급", "석차");  stu[i].print(); break;
			case 3: return 0;
			}
			//stu[i].input(); stu[i].process(); 
		}
	ranking(person);
			}
			else {
				cout << "범위 벗어났습니다 다시입력 >> ";
				continue;
			}
		}
		


	
	//for (int i = 0; i < person; i++) { 
		//stu[i].print(); 
	//	cout<<stu[i]; 
	//}

	delete[] stu;

	return 0;
}
































/*#include <iostream>
using namespace std;
//#define subject 3
//전역변수
int subject;
char sub[9][5] = { "국어", "수학", "C++", "자바", "과학", "OS", "DS", "SB", "영어" };

struct Student{

	char hakbun[5];
	char name[20];

	//int score[subject+1]; // pointer로 지정 
	int *score;
	double avg;
	char grade;
	int rank;
	Student(){
		cout << "생성자" << endl;
			
	}
	~Student(){
		delete score;
		cout <<"소멸자" << endl;
	}
	void input(){
		cout << "학번 입력:";
		cin >> this->hakbun;
		cout << "이름 입력:";
		cin >> this->name;
		this->score[subject] = 0;
		this->rank = 1;
		for (int j = 0; j < subject; j++){
			cout << sub[j] << " 점수 입력 : ";
			cin >> this->score[j];
			while (this->score[j] <0 || this->score[j] >100){
				cout << "다시 입력 : ";
				cin >> this->score[j];
			}
			this->score[subject] += this->score[j];
		}
		
		cout << endl;
	}
	void print(){
		printf("%10s %10s", this->hakbun, this->name);
			for (int j = 0; j < subject; j++){
				printf("%7d ", this->score[j]);
			}
			printf("%7d", this->score[subject]);
			printf("%8.2f", this->avg);
			switch ((int)this->avg / 10)
			{
			case 10:
			case 9:this->grade = 'A'; printf("%8c", this->grade); break;
			case 8:this->grade = 'B'; printf("%8c", this->grade); break;
			case 7:this->grade = 'C'; printf("%8c", this->grade); break;
			case 6:this->grade = 'D'; printf("%8c", this->grade); break;
			default:this->grade = 'F'; printf("%8c", this->grade); break;
			}
			printf("%8d", this->rank);
			cout << endl;
		
		cout << "===============================================================================================" << endl;
		cout << endl;
	}
	void process(){
		this->avg = (double)this->score[subject] / subject;
			for (int j = 0; j <=subject; j++)
			if (this->score[subject]<this->score[subject])
				this->rank++;
	}
};
Student *stu=0;
void rank(int people, Student stu){
	for (int i = 0; i < people; i++){
		for (int j = 0; j < subject; j++)
		if (stu.score[j] < stu.score[j])
			stu.rank++;
	}
}

int main(){

	int people;
	cout << "몇명을 입력하시겠습니까? ";
	cin >> people;
	stu = new Student[people]; //생성자 호출
	cout << "몇개의 과목을 입력하시겠습니까?";
	cin >> subject;
	for (int i = 0; i < people; i++){
		stu[i].score = new int[subject + 1];
	}
	for (int i = 0; i < people; i++){
		stu[i].input();
		stu[i].process();
		
	}//rank(people, stu);
	for (int i = 0; i < people; i++){
		printf("%8s %8s", "학번", "이름 ");
		for (int j = 0; j < subject; j++) printf("%8s", sub[j]);
		printf("%8s %8s %8s %8s \n", "합계", "평균", "등급", "석차");
		stu[i].print();
	}
	cout << endl;
	for (int i = 0; i < people; i++){
		delete[] stu[i].score;
	}
	for (int i = 0; i < people; i++){
		delete[] stu;
	}
	return 0;
}*/

/*#include <iostream>
using namespace std;

//전역변수
int sub;
char subject[9][5] = { "국어", "수학", "영어", "과학", "C++", "자바", "OS", "DS", "SB" }; //과목명

class Student {
public:
	char number[5];
	char name[10];
	int * score;
	double avg;
	char grade;
	int rank;

	void input() {
		cout << "학번: ";
		cin >> this->number;
		cout << "이름: ";
		cin >> this->name;

		for (int j = 0; j < sub; j++) {
			do{
				cout << subject[j] << "점수: ";
				cin >> this->score[j];
				if (this->score[j] < 0 || this->score[j] > 100) {
					cout << "잘못된 점수 입니다." << endl;
				}
			} while (this->score[j] < 0 || this->score[j] > 100);
			this->score[sub] += this->score[j]; 
		}//endOfForJ

		cout << endl; 
	}void print(){
		printf("%8s %8s", this->number, this->name);
		for (int i = 0; i <= sub; i++){
			printf("%8d", this->score[i]);
		}
		printf(" %8.2f %8c %8d\n", this->avg, this->grade, this->rank);
	}

	void process() {
		this->avg = this->score[sub] / sub; 

		switch ((int)this->avg / 10) {
		case 10: case 9: this->grade = 'A'; break;
		case 8: this->grade = 'B'; break;
		case 7: this->grade = 'C'; break;
		case 6: this->grade = 'D'; break;
		default: this->grade = 'F'; break;
		} //endOfSwitch
	}
	
	Student() {
		printf("생성자");
		this->score = new int[sub + 1]; //과목수+합계만큼 생성
		this->score[sub] = 0; //총점 초기화
		this->rank = 1; //석차 초기화
	}

	~Student() {
		delete[] score;
		printf("소멸자");
	}
};
int main() {
	int person;
	cout << "몇 명을 입력하시겠습니까? "; cin >> person;
	cout << "몇 과목을 입력하시겠습니까?"; cin >> sub;
	cout << endl; 

	stu = new Student[person];

	for (int i = 0; i < person; i++) { stu[i].input(); stu[i].process(); }
	ranking(person); 


	printf("%8s %8s", "학번", "이름 ");
	for (int i = 0; i < sub; i++) printf("%8s", subject[i]);
	printf("%8s %8s %8s %8s \n", "합계", "평균", "등급", "석차");
for (int i = 0; i < person; i++) { stu[i].print(); } 

	delete[] stu; 

	return 0;
}*/

/*#include <iostream>
using namespace std;
//전역변수
int sub;
char subject[9][5] = { "국어", "수학", "영어", "과학", "C++", "자바", "OS", "DS", "SB" }; //과목명


struct Student {
	char number[5];
	char name[10];
	int * score;
	double avg;
	char grade;
	int rank;

	//입력 함수
	void input() {
		//학번, 이름 입력
		cout << "학번: ";
		cin >> this->number;
		cout << "이름: ";
		cin >> this->name;

		//과목 별 점수 입력
		for (int j = 0; j < sub; j++) {
			do{
				cout << subject[j] << "점수: ";
				cin >> this->score[j];
				if (this->score[j] < 0 || this->score[j] > 100) {
					cout << "잘못된 점수 입니다." << endl;
				}
			} while (this->score[j] < 0 || this->score[j] > 100);
			//총점 계산
			this->score[sub] += this->score[j];
		}//endOfForJ
	}
};
int main() {
	//인원수, 과목 수 입력
	int person;
	cout << "몇 명을 입력하시겠습니까? "; cin >> person;
	cout << "몇 과목을 입력하시겠습니까?"; cin >> sub;
	cout << endl; //줄바꿈

	//객체 생성
	Student* stu = new Student[person];

	//점수 입력
	for (int i = 0; i < person; i++) {
		stu[i].score = new int[sub + 1]; //과목수+합계만큼 생성

		stu[i].score[sub] = 0; //총점 초기화
		stu[i].rank = 1; //등수 초기화

		stu[i].input(); //입력함수 호추

		cout << endl; //줄바꿈
		stu[i].avg = stu[i].score[sub] / sub; //평균 계산

		//등급 계산
		switch ((int)stu[i].avg / 10) {
		case 10: case 9: stu[i].grade = 'A'; break;
		case 8: stu[i].grade = 'B'; break;
		case 7: stu[i].grade = 'C'; break;
		case 6: stu[i].grade = 'D'; break;
		default: stu[i].grade = 'F'; break;
		} //endOfSwitch

	}//endOfFori

	//석차 계산
	for (int i = 0; i < person; i++) {
		for (int j = 0; j < person; j++) {
			if (stu[i].avg < stu[j].avg) stu[i].rank++;
		}
	}

	//과목 출력
	printf("%8s %8s", "학번", "이름 ");
	for (int i = 0; i < sub; i++) printf("%8s", subject[i]);
	printf("%8s %8s %8s %8s \n", "합계", "평균", "등급", "석차");

	//점수 출력
	for (int i = 0; i < person; i++) {
		printf("%8s %8s", stu[i].number, stu[i].name);
		for (int j = 0; j <= sub; j++){
			printf("%8d", stu[i].score[j]);
		}
		printf(" %8.2f %8c %8d\n", stu[i].avg, stu[i].grade, stu[i].rank);
	}
	//소멸
	for (int i = 0; i < person; i++)
	{
		delete[] stu[i].score;
	}
	delete[] stu;

	return 0;
}*/