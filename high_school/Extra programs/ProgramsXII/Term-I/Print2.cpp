#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

float fact(int i)
{
float factorial=1;
   for(int j=1; j<=i; j++)
   factorial*=j;
 return factorial;
}

void FS1(int n, int x)
{
float sum=1;
for(int i=1; i<n; i++)
  {

   if((i%2)==0)
      sum+=pow(x,i)/fact(i);
   else
      sum-=pow(x,i)/fact(i);
  }
  cout<<sum;
}

void FS2(int n, int x)
{
float sum=0;
int a;
for(int i=1, b=1; i<=n; i++,b+=2)
{
  a=(x+b);

  if(i%2==0)
      sum-=pow(x,b)/fact(a);
  else
      sum+=pow(x,b)/fact(a);
 }

cout<<endl<<sum;
}

void main()
{
clrscr();
int n,x;
cout<<"Enter the value of n: ";
cin>>n;
cout<<"Enter the value of x: ";
cin>>x;
FS1(n,x);
FS2(n,x);
getch();
}

/*
Ouput:

Enter the value of n: 2
Enter the value of x: 2
-1
0.266667

*/