//This program prints the fibbonacci series 1, 1, 2, 3, 5, 8,... , checks if a number is an armstrong number or not and a perfect number or not.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int n;
cout<<"Enter the number: ";
cin>>n;
int num=n;
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
cout<<'\n'<<'\n';

int sum=0,r;
while(n>0)
{
r=n%10;
n/=10;
sum+=pow(r,3);
}
if(sum==num)
cout<<endl<<"The number is an armstrong number";
else
cout<<endl<<"The number is not an armstrong number";

getch();
}

/*
Output:

Enter the number: 23
1 ,1 ,2 ,3 ,5 ,8 ,13 ,21 ,34 ,55 ,89 ,144 ,233 ,377 ,610 ,987 ,1597 ,2584 ,4181
,6765 ,10946 ,17711 ,28657 ,


The number is not an armstrong number

*/