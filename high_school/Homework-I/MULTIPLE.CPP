#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<<"Enter the number :"<<endl;
cin>>n;
for(int i=0; i<=100; i++)
{
if((i%n)==0)
cout<<i<<'\n';
}
getch();
}
