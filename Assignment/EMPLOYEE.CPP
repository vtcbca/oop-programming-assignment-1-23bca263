#include<iostream>
#include<conio.h>
class employee
{
int eid,salary,i;
char ename[20],dept[10];
employee()
{
	cout<<"Enter Employee ID:";
	cin>>eid;
	cout<<"Enter Employee Name:";
	cin>>ename;
	cout<<"Enter Employee Department:";
	cin>>dept;
	cout<<"Enter Employee Salary:";
	cin>>salary;
	cout<<"ID:"<<eid<<"/n Name:"<<ename<<"/n Department"<<dept<<"/n Salary:"<<salary;
}
};
void main()
{
	employee e1;
	employee e2;
	employee e3;
	employee e4;
	employee e5;
	getch();
}
