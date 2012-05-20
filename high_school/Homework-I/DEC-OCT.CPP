#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
 clrscr();
 int no;
 cin>>no;
 long int oct=0;
 for(int i=0 ; no>0 ; no/=8,i++)
  oct+=(no%8)*pow(10,i);
 cout<<oct;
 getch();
 }