#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
float A[50][50], sum;
for(int i=0; i<2;i++)
{
sum=0;
cout<<endl<<"Student "<<i+1<<" : "<<endl;
for(int j=0; j<3;j++)
{
cout<<"Enter the marks of the "<<j+1<<" subject: ";
cin>>A[i][j];
sum+=A[i][j];
}
cout<<"Total = "<<sum<<endl;
cout<<"Average = "<<sum/3<<endl;
if((sum/3)>=75)
cout<<"Grade A"<<endl;
else
if((sum/3)>=50&&(sum/3)<75)
cout<<"Grade B"<<endl;
}
getch();
}