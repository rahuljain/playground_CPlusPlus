#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int x,n;
cout<<"Enter the value of x and n: ";
cin>>x>>n;
float s=1;
int fact;
for(int i=2; i<=n; i++)
{
fact=1;
for(int j=1; j<=i; j++)
fact*=j;
if(i%2==0)
s+=pow(x,i)/fact;
else
s-=pow(x,i)/fact;
}
cout<<s;
getch();
}
