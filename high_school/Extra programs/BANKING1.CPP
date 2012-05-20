/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

This progarm uses a poniter array created
dynamically to maintain an acc.
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>

class Banking
{
 public:
 int Account_No;
 char Name[10];
 float Balance;
 long Date;
 void Withdraw(Banking *);
 void Deposit(Banking *);
 void Display(Banking *);
};

int n,Amount,Amountd;
long year;
void Menu(Banking *);

void main()
{
 clrscr();
 Banking *iptr=new Banking[100];

 cout<<"Enter the number of persons : ";
 cin>>n;
 cout<<"Enter the year : ";
 cin>>year;

 for(int i=0;i<n;i++)
 {
  cout<<"Enter the Account_No. : ";
  cin>>(iptr+i)->Account_No;

  cout<<"Enter the Name : ";
  cin>>(iptr+i)->Name;

  cout<<"Enter the balance : ";
  cin>>(iptr+i)->Balance;

  cout<<"Enter the year of opening : ";
  cin>>(iptr+i)->Date;
 }

 Menu(iptr);
 delete []iptr;
 getch();
}

void Banking::Withdraw(Banking *iptr)
{
 int pass;
 cout<<"Enter your Account No. : ";
 cin>>pass;

 cout<<"Enter the Amount you want to withdraw : ";
 cin>>Amount;

 if(((iptr+pass)->Balance-Amount)>0)
 {
  (iptr+pass)->Balance-=Amount;
  cout<<"Amount granted : ";
 }
 else   cout<<"Not enough balance";

 Menu(iptr);
}

void Banking::Deposit(Banking *iptr)
{
 int pass;
 cout<<"Enter your ac no : ";
 cin>>pass;

 cout<<"Enter the Amount you want to Deposit : ";
 cin>>Amountd;

 (iptr+pass)->Balance+=Amountd;
 Menu(iptr);
}

void Banking::Display(Banking *iptr)
{
 int pass;
 for(int i=0;i<n;i++)
 {
  if((iptr+i)->Date==year)
  {
   cout<<"\nACC_NO\t\tNAME\t\tBALANCE\t\tDATE\n";
   cout<<(iptr+i)->Account_No<<"\t\t"
       <<(iptr+i)->Name<<"\t\t"
       <<(iptr+i)->Balance<<"\t\t"
       <<(iptr+i)->Date;
  }
 }
 Menu(iptr);
}

void Menu(Banking *iptr)
{
 char ch;
 Banking o2;

 cout<<"\n1.WITHDRAW\n2.DEPOSIT\n3.DISPLAY\n";
 cout<<"Enter your choice : ";
 cin>>ch;

 switch(ch)
 {
  case '1':o2.Withdraw(iptr); break;
  case '2':o2.Deposit(iptr);  break;
  case '3':o2.Display(iptr); break;
  default:exit(0);
 }
}
/*
	Output:-
Enter the number of persons : 2
Enter the year : 2003

Enter the Account_No. : 12
Enter the Name : Rishabh
Enter the balance : 100001
Enter the year of opening : 2003

Enter the Account_No. : 13
Enter the Name : Saurabh
Enter the balance : 200002
Enter the year of opening : 2003

1.WITHDRAW
2.DEPOSIT
3.DISPLAY
Enter your choice : 1

Enter your Account No. : 12
Enter the Amount you want to withdraw : 1000
Amount granted :

1.WITHDRAW
2.DEPOSIT
3.DISPLAY
Enter your choice : 2

Enter your Account No. : 13
Enter the Amount you want to Deposit : 20000

1.WITHDRAW
2.DEPOSIT
3.DISPLAY
Enter your choice : 3

ACC_NO          NAME            BALANCE         DATE
12              Rishabh         100001          2003
ACC_NO          NAME            BALANCE         DATE
13              Saurabh         200002          2003
*/