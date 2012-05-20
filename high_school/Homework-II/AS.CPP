#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char A[50];
int n;
cout<<"How many strings do u want to enter? ";
cin>>n;
for(int i=0; i<n; i++)
gets(A);
for(int j=0; j<n; j++)
cout<<A[j];
getch();
}