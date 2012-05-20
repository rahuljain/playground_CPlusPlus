#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int A[50][50], B[50][50], n;
cout<<"How many rows and columns of the matrix do you want to enter? ";
cin>>n;
cout<<endl<<"Enter the elements of the first matrix: "<<endl;
for(int i=0; i<n; i++)
for(int j=0; j<n; j++)
cin>>A[i][j];

cout<<endl<<"Enter the elements of the second matrix: "<<endl;
for(int p=0; p<n; p++)
for(int q=0; q<n; q++)
cin>>B[p][q];

int flag=1;
for(int k=0; k<n; k++)
{
for(int m=0; m<n; m++)
{
if(A[k][m]!=B[k][m])
flag=0;
}
if(flag==0) break;
}

if(flag)
cout<<"The two matrices are equal.";
else
cout<<"The two matrices are unequal.";

getch();
}