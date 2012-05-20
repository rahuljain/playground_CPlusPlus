//This program generates a specific kind of square matrix.
//Program created by Rahul Jain.
#include<iostream.h>
#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int A[50][50], f=1, n;
cout<<"Enter the no. of rows and columns of the square matrix: ";
cin>>n;
for(int i=0; i<n; i++)
     {
	for(int j=0, k=f; j<n; j++,k++)
	     {
		if(k>n)
		k=1;
		A[i][j]=k;
	     }
	 f++;
     }
cout<<'\n'<<"The matrix is:"<<'\n'<<A;
getch();
}