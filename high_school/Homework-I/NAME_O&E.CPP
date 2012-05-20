//This program prints out a string in a particular manner
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char string[100];
cout<<"Enter your name: ";
gets(string);
int l= strlen(string);
if(l%2==0)
{
int k=l/2-1, n=l/2;
for(int i=1; i<=l/2; i++, k--, n++)
{
for(int j=l/2-1; j>=i; j--)
cout<<" ";
cout<<string[k];
for(int m=1; m<i; m++)
cout<<"  ";
cout<<string[n];
cout<<endl;
}
}
else
{
int k=l/2-1, n=l/2+1;
for(int a=1; a<=l/2; a++)
cout<<" ";
cout<<string[l/2];
cout<<endl;
for(int i=2; i<=l/2+1; i++,k--,n++)
{
for(int j=l/2-1; j>=i-1; j--)
cout<<" ";
cout<<string[k]<<" ";
for(int m=2; m<i; m++)
cout<<"  ";
cout<<string[n];
cout<<endl;
}
}
getch();
}
