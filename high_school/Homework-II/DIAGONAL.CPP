//This program finds out the sum of the diagonals of a square matrix.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int A[100][100], n, sum1=0, sum2=0;
cout<<"Enter the number of rows and coloumns of the square matrix: ";
cin>>n;
cout<<'\n'<<"Enter the matrix:"<<'\n';
for(int i=0; i<n; i++)
for(int j=0; j<n; j++)
  {
   cin>>A[i][j];
  }
for(int m=0; m<n; m++)
{
 sum1+=A[m][m];
 sum2+=A[m][n-1-m];
}
int sum=sum1+sum2;

if(n%2!=0)
sum-=A[n/2][n/2];

cout<<'\n'<<"The sum of the diagonals is: "<<sum;
getch();
}


/*
Output:
Enter the number of rows and coloumns of the square matrix: 3

Enter the matrix:
1 2 3
4 5 6
7 8 9

The sum of the diagonals is: 25


Enter the number of rows and coloumns of the square matrix: 4

Enter the matrix:
1 3 7 9
5 7 4 3
9 0 6 10
32 4 6 12

The sum of the diagonals is: 71
*/
