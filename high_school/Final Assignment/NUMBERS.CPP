/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

This progarm uses a function overloading
for the sum of an integer array.
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>

int sum(int a[10]);
int sum(int a[10],char);

void main()
{
 clrscr();

 int A[10];

 cout<<"Input the numbers : ";
 for(int i=0;i<10;i++)
 cin>>A[i];

 Start:

 char ch;
 cout<<endl;
 cout<<"Type 1 : For sum of all the elements."<<endl;
 cout<<"Type 2 : For sum of all Even elements."<<endl;
 cout<<"Type 3 : For sum of all Odd elements."<<endl;
 cout<<"Type 4 : Exit."<<endl;
 ch=getch();
 cout<<endl;

 int ssuumm;

 switch(ch)
 {
  case '1':ssuumm=sum(A);goto Start;
  case '2':ssuumm=sum(A,'e');goto Start;
  case '3':ssuumm=sum(A,'o');goto Start;
  case '4':exit(0);
 }

getch();
}

int sum(int a[10])
{
 int sumn=0;
 for(int i=0;i<10;i++)
 sumn+=a[i];

 cout<<"The sum of all the elements are "<<sumn;
 return sumn;
}


int sum(int a[10],char ch)
{
 int sume=0,sumo=0;
 for(int i=0;i<10;i++)
 {
  if(a[i]%2 == 0)	  sume+=a[i];
  if(a[i]%2 != 0)	  sumo+=a[i];
 }

  switch(ch)
  {
   case 'e': cout<<endl<<"The sum of all Even elements are "<<sume;
			  return sume;break;
   case 'o': cout<<endl<<"The sum of all Odd elements are "<<sumo;
			  return sumo;break;
   default : cout<<"The sum of all the elements is 0.";
			  return 0;break;
  }
}

/*
	Output:-
Input the numbers : 1 12 234 3456 456 56 6 890 78 9

Type 1 : For sum of all the elements.
Type 2 : For sum of all Even elements.
Type 3 : For sum of all Odd elements.
Type 4 : Exit.

The sum of all Even elements are 5188.

Type 1 : For sum of all the elements.
Type 2 : For sum of all Even elements.
Type 3 : For sum of all Odd elements.
Type 4 : Exit.
*/