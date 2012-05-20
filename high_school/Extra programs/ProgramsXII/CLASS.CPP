#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>

class details
{

 protected:

 char name[20];
 int no;
 char desig[20];
 char add[50];

 public:

 void profile()
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

  float bsc;
  float da;
  float hra;
  float inctax;
  float carloan;

  public:

  void info()
  {
   cout<<"Give basic salary:";
   cin>>bsc;
   cout<<"Give DA (in percent):";
   cin>>da;
   cout<<"Give HRA (in percent):";
   cin>>hra;
   cout<<"Give yearly income tax:";
   cin>>inctax;
   cout<<"Give monthy car loan repayment:";
   cin>>carloan;

   getch();
  }
};

class employee:public details,public basic
 {

  float tot_sal;
  float tot_ded;
  float net_sal;

  void totalsal()
  {
   tot_sal=bsc+(bsc*da)/100+(bsc*hra)/100;
  }

  void totalded()
  {
   tot_ded=inctax/12+carloan;
  }

  void netsal()
  {
   net_sal=tot_sal-tot_ded;
  }

  void display()
  {
   clrscr();
   cout<<setw(15)<<"Info"<<endl;
   cout<<"\nName                             "<<name;
   cout<<"\nEmployee no.                     "<<no;
   cout<<"\nDesignation                      "<<desig;
   cout<<"\nAddress                          "<<add;
   cout<<"\nBasic salary(Rs.)                "<<bsc;
   cout<<"\nDA (%)                           "<<da;
   cout<<"\nHRA (%)                          "<<hra;
   cout<<"\nAnnual income tax(Rs.)           "<<inctax;
   cout<<"\nMonthly car loan repayment(Rs.)  "<<carloan;
   cout<<"\nTotal Salary(Rs.)                "<<tot_sal;
   cout<<"\nTotal Deduction(Rs.)             "<<tot_ded;
   cout<<"\n\nNet Salary(Rs.)                  "<<net_sal<<endl;

  }

  public:

  void start()
  {
   profile();
   info();
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

/*

Output:

	   Info

Name                             Rahul
Employee no.                     1
Designation                      MD
Address                          D-1 Sector 20 Noida
Basic salary(Rs.)                100000
DA (%)                           20
HRA (%)                          10
Annual income tax(Rs.)           80000
Monthly car loan repayment(Rs.)  30000
Total Salary(Rs.)                130000
Total Deduction(Rs.)             36666.667969

Net Salary(Rs.)                  93333.328125


*/