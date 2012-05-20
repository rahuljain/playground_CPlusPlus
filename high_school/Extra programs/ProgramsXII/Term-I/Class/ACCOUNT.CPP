#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class acc
{
int ac_no;
char name[20];
float balance;

public:
 void read()
 {
 cout<<"\n\nEnter the account number: ";
 cin>>ac_no;
 cout<<"Enter name: ";
 gets(name);
 cout<<"Enter the balance: ";
 cin>>balance;
 }

 void add()
 {
 }

 void print()
 {
 cout<<"\n\nAccount number: "<<ac_no;
 cout<<"\nName: "<<name;
 cout<<"\nBalance: "<<balance;
 }

};

void main()
{
clrscr();
acc ac_holder[20];
int n;
cout<<"Enter the no. of people: ";
cin>>n;

for(int i=0; i<n ;i++)
{
ac_holder[i].read();
}

clrscr();
for(i=0; i<n; i++)
{
ac_holder[i].print();
}

getch();
}