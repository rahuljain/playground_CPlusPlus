//This program lets you withdraw or deposit amount in your bank account
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
int accno;
char name[25], op;
float bal,trans;
cout<<"Enter your account number: ";
cin>>accno;
cout<<"Enter your name: ";
gets(name);
cout<<"Eneter your balance: ";
cin>>bal;
cout<<"What do you want to do? Type 'w' for withdrawl and 'd' for deposit: " ;
cin>>op;

switch(op)
{
    case 'd':
    case 'D':cout<<"How much money do you want to deposit: ";
	     cin>>trans;
	     bal+=trans;
	     break;

    case 'w':
    case 'W':cout<<"How much money do you want to withdraw? ";
	     cin>>trans;
	     bal-=trans;
	     break;

    default:cout<<"Operation not possible. Type only'd' for depositing or 'w' for withdrawl";
	    exit(0);

}
cout<<endl<<endl<<endl<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Account Number: "<<accno<<endl;
cout<<"New Balance: Rs"<<bal<<endl<<"Thank You for using this service";
getch();
}

