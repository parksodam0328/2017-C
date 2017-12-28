#include <iostream>
using namespace std;

//��������
int sub;
char subject[9][5] = { "����", "����", "����", "����", "C++", "�ڹ�", "OS", "DS", "SB" }; //�����

class Student {

	char number[5];
	char name[10];
	int * score;
	double avg;
	char grade;
	int rank;

	
public:
	Student() {
		cout<<"������"<<endl;
		this->score = new int[sub + 1]; //�����+�հ踸ŭ ����
		this->score[sub] = 0; //���� �ʱ�ȭ
		this->rank = 1; //���� �ʱ�ȭ
	}

	~Student() {
		delete[] score;
		cout<<"�Ҹ���"<<endl;
	}
void input() {
		cout << "�й�: ";
		cin >> this->number;
		cout << "�̸�: ";
		cin >> this->name;

		for (int j = 0; j < sub; j++) {
			do{
				cout << subject[j] << "����: ";
				cin >> this->score[j];
				if (this->score[j] < 0 || this->score[j] > 100) {
					cout << "�߸��� ���� �Դϴ�." << endl;
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

	cout << "�� ���� �Է��Ͻðڽ��ϱ�? "; cin >> person;
	cout << "�� ������ �Է��Ͻðڽ��ϱ�?"; cin >> sub;
	cout << endl;

	stu = new Student[person];
	while (true){
		
			cout << "1 �Է�" << endl;
			cout << "2 ���" << endl;
			cout << "3 ����" << endl;
			cin >> num;
			if (num == 1 || num == 2 || num == 3){
			for (int i = 0; i < person; i++) {

			switch (num){
			case 1: stu[i].input(); stu[i].process(); break;
			case 2: printf("%8s %8s", "�й�", "�̸� ");
				for (int j = 0; j < sub; j++) printf("%8s", subject[j]);
				printf("%8s %8s %8s %8s \n", "�հ�", "���", "���", "����");  stu[i].print(); break;
			case 3: return 0;
			}
			//stu[i].input(); stu[i].process(); 
		}
	ranking(person);
			}
			else {
				cout << "���� ������ϴ� �ٽ��Է� >> ";
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
//��������
int subject;
char sub[9][5] = { "����", "����", "C++", "�ڹ�", "����", "OS", "DS", "SB", "����" };

struct Student{

	char hakbun[5];
	char name[20];

	//int score[subject+1]; // pointer�� ���� 
	int *score;
	double avg;
	char grade;
	int rank;
	Student(){
		cout << "������" << endl;
			
	}
	~Student(){
		delete score;
		cout <<"�Ҹ���" << endl;
	}
	void input(){
		cout << "�й� �Է�:";
		cin >> this->hakbun;
		cout << "�̸� �Է�:";
		cin >> this->name;
		this->score[subject] = 0;
		this->rank = 1;
		for (int j = 0; j < subject; j++){
			cout << sub[j] << " ���� �Է� : ";
			cin >> this->score[j];
			while (this->score[j] <0 || this->score[j] >100){
				cout << "�ٽ� �Է� : ";
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
	cout << "����� �Է��Ͻðڽ��ϱ�? ";
	cin >> people;
	stu = new Student[people]; //������ ȣ��
	cout << "��� ������ �Է��Ͻðڽ��ϱ�?";
	cin >> subject;
	for (int i = 0; i < people; i++){
		stu[i].score = new int[subject + 1];
	}
	for (int i = 0; i < people; i++){
		stu[i].input();
		stu[i].process();
		
	}//rank(people, stu);
	for (int i = 0; i < people; i++){
		printf("%8s %8s", "�й�", "�̸� ");
		for (int j = 0; j < subject; j++) printf("%8s", sub[j]);
		printf("%8s %8s %8s %8s \n", "�հ�", "���", "���", "����");
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

//��������
int sub;
char subject[9][5] = { "����", "����", "����", "����", "C++", "�ڹ�", "OS", "DS", "SB" }; //�����

class Student {
public:
	char number[5];
	char name[10];
	int * score;
	double avg;
	char grade;
	int rank;

	void input() {
		cout << "�й�: ";
		cin >> this->number;
		cout << "�̸�: ";
		cin >> this->name;

		for (int j = 0; j < sub; j++) {
			do{
				cout << subject[j] << "����: ";
				cin >> this->score[j];
				if (this->score[j] < 0 || this->score[j] > 100) {
					cout << "�߸��� ���� �Դϴ�." << endl;
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
		printf("������");
		this->score = new int[sub + 1]; //�����+�հ踸ŭ ����
		this->score[sub] = 0; //���� �ʱ�ȭ
		this->rank = 1; //���� �ʱ�ȭ
	}

	~Student() {
		delete[] score;
		printf("�Ҹ���");
	}
};
int main() {
	int person;
	cout << "�� ���� �Է��Ͻðڽ��ϱ�? "; cin >> person;
	cout << "�� ������ �Է��Ͻðڽ��ϱ�?"; cin >> sub;
	cout << endl; 

	stu = new Student[person];

	for (int i = 0; i < person; i++) { stu[i].input(); stu[i].process(); }
	ranking(person); 


	printf("%8s %8s", "�й�", "�̸� ");
	for (int i = 0; i < sub; i++) printf("%8s", subject[i]);
	printf("%8s %8s %8s %8s \n", "�հ�", "���", "���", "����");
for (int i = 0; i < person; i++) { stu[i].print(); } 

	delete[] stu; 

	return 0;
}*/

/*#include <iostream>
using namespace std;
//��������
int sub;
char subject[9][5] = { "����", "����", "����", "����", "C++", "�ڹ�", "OS", "DS", "SB" }; //�����


struct Student {
	char number[5];
	char name[10];
	int * score;
	double avg;
	char grade;
	int rank;

	//�Է� �Լ�
	void input() {
		//�й�, �̸� �Է�
		cout << "�й�: ";
		cin >> this->number;
		cout << "�̸�: ";
		cin >> this->name;

		//���� �� ���� �Է�
		for (int j = 0; j < sub; j++) {
			do{
				cout << subject[j] << "����: ";
				cin >> this->score[j];
				if (this->score[j] < 0 || this->score[j] > 100) {
					cout << "�߸��� ���� �Դϴ�." << endl;
				}
			} while (this->score[j] < 0 || this->score[j] > 100);
			//���� ���
			this->score[sub] += this->score[j];
		}//endOfForJ
	}
};
int main() {
	//�ο���, ���� �� �Է�
	int person;
	cout << "�� ���� �Է��Ͻðڽ��ϱ�? "; cin >> person;
	cout << "�� ������ �Է��Ͻðڽ��ϱ�?"; cin >> sub;
	cout << endl; //�ٹٲ�

	//��ü ����
	Student* stu = new Student[person];

	//���� �Է�
	for (int i = 0; i < person; i++) {
		stu[i].score = new int[sub + 1]; //�����+�հ踸ŭ ����

		stu[i].score[sub] = 0; //���� �ʱ�ȭ
		stu[i].rank = 1; //��� �ʱ�ȭ

		stu[i].input(); //�Է��Լ� ȣ��

		cout << endl; //�ٹٲ�
		stu[i].avg = stu[i].score[sub] / sub; //��� ���

		//��� ���
		switch ((int)stu[i].avg / 10) {
		case 10: case 9: stu[i].grade = 'A'; break;
		case 8: stu[i].grade = 'B'; break;
		case 7: stu[i].grade = 'C'; break;
		case 6: stu[i].grade = 'D'; break;
		default: stu[i].grade = 'F'; break;
		} //endOfSwitch

	}//endOfFori

	//���� ���
	for (int i = 0; i < person; i++) {
		for (int j = 0; j < person; j++) {
			if (stu[i].avg < stu[j].avg) stu[i].rank++;
		}
	}

	//���� ���
	printf("%8s %8s", "�й�", "�̸� ");
	for (int i = 0; i < sub; i++) printf("%8s", subject[i]);
	printf("%8s %8s %8s %8s \n", "�հ�", "���", "���", "����");

	//���� ���
	for (int i = 0; i < person; i++) {
		printf("%8s %8s", stu[i].number, stu[i].name);
		for (int j = 0; j <= sub; j++){
			printf("%8d", stu[i].score[j]);
		}
		printf(" %8.2f %8c %8d\n", stu[i].avg, stu[i].grade, stu[i].rank);
	}
	//�Ҹ�
	for (int i = 0; i < person; i++)
	{
		delete[] stu[i].score;
	}
	delete[] stu;

	return 0;
}*/