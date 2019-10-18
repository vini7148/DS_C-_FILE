#include <iostream>
#include <fstream>
#define FILE_NAME "emp.dat"

using namespace std;

class Employee
{
private :
	int 	empID;
	char 	empName[100] ;
	char 	designation[100];
	int 	ddj,mmj,yyj;
	int 	ddb,mmb,yyb;
public  :
	void readEmployee()
	{
		cout<<"EMPLOYEE DETAILS"<<endl;
		cout<<"ENTER EMPLOYEE ID : " ;
		cin>>empID;
		cin.ignore(1);
		cout<<"ENTER  NAME OF THE EMPLOYEE : ";
		cin.getline(empName,100);

		cout<<"ENTER DESIGNATION : ";
		cin.getline(designation,100);

		cout<<"ENTER DATE OF JOIN:"<<endl;
		cout<<"DATE : "; cin>>ddj;
		cout<<"MONTH: "; cin>>mmj;
		cout<<"YEAR : "; cin>>yyj;

		cout<<"ENTER DATE OF BIRTH:"<<endl;
		cout<<"DATE : "; cin>>ddb;
		cout<<"MONTH: "; cin>>mmb;
		cout<<"YEAR : "; cin>>yyb;
	}
	void displayEmployee()
	{
		cout<<"EMPLOYEE ID: "<<empID<<endl
		 <<"EMPLOYEE NAME: "<<empName<<endl
		 <<"DESIGNATION: "<<designation<<endl
		 <<"DATE OF JOIN: "<<ddj<<"/"<<mmj<<"/"<<yyj<<endl
		 <<"DATE OF BIRTH: "<<ddb<<"/"<<mmb<<"/"<<yyb<<endl;
	}
};

int main()
{

	Employee emp;
	emp.readEmployee();
	emp.displayEmployee();

	return 0;
}
