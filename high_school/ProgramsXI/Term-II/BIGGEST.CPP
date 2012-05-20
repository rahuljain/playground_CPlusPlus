#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
clrscr();
int A[50],n, big, small;
cout<<"How many elements do you wanna enter? ";
cin>>n;
for(int i=0; i<n; i++)
{
cout<<endl<<"Enter the "<<i+1<<" element: ";
cin>>A[i];
}
big=A[0];
for(int j=0; j<n; j++)
{
if(A[j]>=big)
{
big=A[j];
small=big;
}
else
{
big=big;
small=A[j];
}
}
cout<<endl<<"The biggest element is: "<<big;
cout<<endl<<"The smallest element is: "<<small;
getch();
}