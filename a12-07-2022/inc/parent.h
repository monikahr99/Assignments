
	am -f $(BIN)/app once
	#include <iostream>
	#include <string>
	#include <fstream>
	using namespace std;

	class Employee
	{
	protected:
	int empid;
	char name[30];
	char adress[60];
	int age;
	public:
	Dept(){}
	Dept(char d,int e,char n,char a,int g):Employee(e,n,a,g){
	empid=e;
	name=n;
	adress=a;
	age=g;}

	void get();
	void insert();
	return 0;
	};

