#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
clrscr();
char st[50],A[50][50];
cout<<"Enter the string: ";
gets(st);
int l=strlen(st);

if(l%2==0)
{
for(int i=0; i<=l/2; i++)
for(int j=0; j<l; j++)
A[i][j]=' ';
i=0;
j=(l/2)-1;
int k=l/2;
A[i][j]=st[l/2-1];
A[i][k]=st[l/2];
for(i=1; i<=l/2; i++)
{
j--;
A[i][j]=st[j];
k++;
A[i][k]=st[k];
}
for(i=0; i<l/2; i++)
{
{
for(j=0; j<l;j++)
cout<<A[i][j];
}
cout<<endl;
}
}
getch();
}