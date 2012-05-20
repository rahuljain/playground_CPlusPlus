#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cin>>n;
int f1=1,f2=1,f3=1,f4;
cout<<f1<<" ,"<<f2<<" ,"<<f3<<" ,";
for(int i=1; i<=n-3; i++)
{
f4=f1+f2+f3;
cout<<f4<<" ,";
f1=f2;
f2=f3;
f3=f4;
}
cout<<'\b';
getch();
}