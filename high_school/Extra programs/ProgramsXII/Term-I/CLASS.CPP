#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class details
{
protected:
char emp_name[50];
int emp_no;
char design[50];
char add[50];
public:
void profile()
 {
 cout<<"Enter name:";
 gets(emp_name);
 cout<<endl<<"Give number:";
 cin>>emp_no;
 cout<<"Give designation:";
 gets(design);
 cout<<"Give address:";
 gets(add);
 }
};

class basic
{
protected:
int basic_slaray;
float DA;
float HRA;
float inctax;
int carloan;
void info()
 {
 cout<<"Give the basic salary:";
 cin>>basic_salary;
 cout<<"Enter the DA%";
 cin>>DA;
 cout<<"Enter the HRA:";
 cin>>HRA;
 cout>>"Enter the income tax:";
 cin>>inctax;
 cout<<"Enter the car loan:";
 cin>>carloan;
 }

};

class employee:protected basic, protected details
{
float tot_sal;
float tot_deduc;
float net_sal;

protected:
void totalsal()
      {
	tot_sal=basic_salary+(basic_salary*DA)/100+(basic_salary*hra)/100;
      }

void tot_deduction()
{
tot_deduc=(inctax/12)+carloan;
}

void net_salry()
{
net_sal=tot_sal-tot_deduc;
}

void display()
{
cout<<"Total salary="<<tot_sal<<"Total Deduction="<<net_sal<<"Net Salary="<<net_sal;
}

public:
void jist()
{
getdetails();
get
}

void main()
{
employee emp;
emp.jist

getch();
}