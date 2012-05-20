#include<iostream.h>
#include<conio.h>
#include<stdio.h>


void main()
{
clrscr();
int n;
cout<<"Enter the value of n: ";
cin>>n;

for(int i=1; i<=n; i++)
{
for(int j=1; j<=i; j++)
cout<<"* ";
cout<<endl;
}

for(i=n-1; i>0; i--)
{
 for(int j=i; j>0; j--)
 cout<<"* ";
 cout<<endl;
}

cout<<endl<<endl<<endl;

for(int k=1; k<=n; k++)
{
for(int j=n-k; j>0; j--)
cout<<" ";
for(int p=1; p<=k; p++)
cout<<"* ";
cout<<endl;
}
for(k=1; k<n; k++)
{
for(int j=1; j<=k; j++)
cout<<" ";
for(int p=n-k; p>0; p--)
cout<<"* ";
cout<<endl;
}
getch();
}