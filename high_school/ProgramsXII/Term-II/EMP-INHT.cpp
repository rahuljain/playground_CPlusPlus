//This program finds out the net salary of an employee and gives other datails.
//Program created by Rahul Jain.

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class details
{
 protected:
 char name[20];
 int no;
 char desig[20];
 char add[50];

 public:
 void info()
 {
  cout<<"Enter name:";
  gets(name);
  cout<<"Give number:";
  cin>>no;
  cout<<"Give designation:";
  gets(desig);
  cout<<"Give address:";
  gets(add);
 }
 };

class basic
 {
  protected:
  float bas;
  float da;
  float hra;
  float it;
  float carloan;

  public:
  void data()
  {
   cout<<"Give basic salary:";
   cin>>bas;
   cout<<"Give DA (in percent):";
   cin>>da;
   cout<<"Give HRA (in percent):";
   cin>>hra;
   cout<<"Give yearly income tax:";
   cin>>it;
   cout<<"Give monthy car loan repayment:";
   cin>>carloan;
  }
 };

class employee:public details,public basic
 {
  float tot_sal;
  float tot_ded;
  float net_sal;
  void totalsal()
  {
   tot_sal=bas+(bas*da)/100+(bas*hra)/100;
  }

  void totalded()
  {
   tot_ded=it/12+carloan;
  }

  void netsal()
  {
   net_sal=tot_sal-tot_ded;
  }

  void display()
  {
   cout<<"Name:"<<name<<"\nEmployee no.:"<<no<<"\nDesignation:"<<desig<<"\nAddress:"<<add<<"\nBasic salary:Rs."<<bas<<"\nDA (%):"<<da<<"\nHRA (%):"<<hra<<"\nAnnual income tax :Rs."<<it<<"\nMonthly car loan repayment:Rs."<<carloan<<"\nNet salary: Rs."<<net_sal;
  }

  public:
  void start()
  {
   info();
   data();
   totalsal();
   totalded();
   netsal();
   display();
  }
 };

void main()
{
 clrscr();
 employee emp;
 emp.start();
 getch();
}