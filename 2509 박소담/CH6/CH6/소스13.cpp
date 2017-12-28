#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Employee{
public:
	char* priNum;
	char* name;
	char basic;

	Employee(){}
	Employee(char *priNum, char *name, char basic){
		this->priNum = new char[strlen(priNum) + 1];
		strcpy(this->priNum, priNum);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->basic = basic;
	}
	virtual void print(){
		cout << "Employee********************************************************" << endl;
		printf("%s%10s%10s\n", "사 번", "이 름", "기본급");
		cout << "****************************************************************" << endl;
		printf("%s10s%10d%8d%10d\n", priNum, name, basic);
		cout << "****************************************************************" << endl;
	}
	virtual ~Employee(){
		delete[] priNum;
		delete[] name;
	}
	
};

class Manager : Employee{
private:
	int gmoney;

public:
	Manager(){}
	Manager(char *priNum, char *name, char basic) : Employee(priNum, name, basic){
		this->priNum = new char[strlen(priNum) + 1];
		strcpy(this->priNum, priNum);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->basic = basic;
	}
	virtual ~Manager(){
		delete[] priNum;
		delete[] name;
	}
	void print(){
		cout << "Manger**********************************************************" << endl;
		printf("%s10s%10s%8s%10s\n", "사 번", "이 름", "기본급", "관리수당", "총수령액");
		cout << "****************************************************************" << endl;
		printf("%s10s%10d%8d%10d\n",priNum,name,basic,gmoney,basic+gmoney);
		cout << "****************************************************************" << endl;
	}
};

class SalesMan : Employee{
private:
	int ymoney;
public:
	SalesMan(){}
	SalesMan(char *priNum, char *name, char basic) : Employee(priNum, name, basic){
		this->priNum = new char[strlen(priNum) + 1];
		strcpy(this->priNum, priNum);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->basic = basic;
	}
	virtual ~SalesMan(){
		delete[] priNum;
		delete[] name;
	}
	void print(){
		cout << "SalesMan********************************************************" << endl;
		printf("%s10s%10s%8s%10s\n", "사 번", "이 름", "기본급", "관리수당", "총수령액");
		cout << "****************************************************************" << endl;
		printf("%s10s%10d%8d%10d\n", priNum, name, basic, ymoney, basic + ymoney);
		cout << "****************************************************************" << endl;
	}
};

class Temporary : Employee{
private:
	int smoney;
	int day;
public:
	Temporary(){}
	Temporary(char *priNum, char *name, char basic) : Employee(priNum, name, basic){
		this->priNum = new char[strlen(priNum) + 1];
		strcpy(this->priNum, priNum);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->basic = basic;
	}
	virtual ~Temporary(){
		delete[] priNum;
		delete[] name;
	}
	void print(){
		cout << "Temporary*******************************************************" << endl;
		printf("%s10s%10s%8s%10s%10s\n", "사 번", "이 름", "기본급", "관리수당", "총수령액","계약기간");
		cout << "****************************************************************" << endl;
		printf("%s10s%10d%8d%10d%( 10d)\n", priNum, name, basic, smoney, basic + smoney);
		cout << "****************************************************************" << endl;
	}
};
int main(void){
	char* data[4][5] = { { "MCTE11", "고영희", "D", "40", "5" }, { "MCRS12", "도민준", "A", "50" }, { "MCRM13", "채송화", "C", "30" }, { "MCRM14", "강연주", "B", "40" } };
	const int num = sizeof(data) / sizeof(data[0]);
	Employee* pSm;
	pSm = new Employee[num];
	pSm[0] = Employee(data[0][0], data[0][1], (char)data[0][2]);
	pSm[0].print();
	//for (int i = 0; i < num; i < i++){
	//	if (data[i][0]=="RM")
			//pSm[i] = new Manager(data[i][0], data[i][1], (char)data[i][2]);
		//else if (data[i][0] == "RS")
			//pSm[i] = new SalesMan(data[i][0], data[i][1], (char)data[i][2]);
		//if (data[i][0] == "TE")
			//pSm[i] = new Temporary(data[i][0], data[i][1], (char)data[i][2]);
	//}
	return 0;
}