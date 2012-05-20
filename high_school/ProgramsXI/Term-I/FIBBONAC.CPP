#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cin>>n;
int f1=1,f2=1,f3;
cout<<f1<<" ,"<<f2<<" ,";
for(int i=1; i<=n-2; i++)
{
f3=f1+f2;
cout<<f3<<" ,";
f1=f2;
f2=f3;
}
cout<<'\b';
getch();
}