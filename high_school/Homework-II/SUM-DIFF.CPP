//This program finds out the sum and difference of two matrixes.
//Program created by Rahul Jain.
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void read(int S[100][100],int x, int y)
{
 for(int i=0; i<x; i++)
 for(int j=0; j<y; j++)
   {
	cout<<"Enter the element ["<<i<<"] ["<<j<<"]=";
	cin>>S[i][j];
   }
}

void print(int S[100][100], int x, int y)
{
 for(int i=0; i<x; i++)
 for(int j=0; j<y; j++)
  cout<<setw(5)<<S[i][j];
 cout<<endl;
}

void sum(int S1[100][100], int S2[100][100], int S3[100][100], int x, int y)
{
for(int i=0; i<x; i++)
for(int j=0; j<y; j++)
S3[i][j]=S1[i][j]+S2[i][j];
}

void diff(int S1[100][100], int S2[100][100], int S3[100][100], int x, int y)
{
for(int i=0; i<x; i++)
for(int j=0; j<y; j++)
S3[i][j]=S1[i][j]-S2[i][j];
}

void main()
{
 clrscr();
 int A[100][100], B[100][100] , C[100][100],  D[100][100], m, n;
 cout<<"Give the number of rows: ";
 cin>>m;
 cout<<"Give the number of columns: ";
 cin>>n;
 cout<<'\n'<<"Enter the elements of the 1st matrix:"<<'\n';
 read(A, m, n);
 cout<<'\n'<<"Enter the elements of the 2nd matrix:"<<'\n';
 read(B, m, n);
 sum(A, B, C,m, n);
 diff(A, B, D, m, n);
 cout<<'\n'<<"The sum of matrix is: "<<endl;
 print(C, m, n);
 cout<<endl;
 cout<<"The difference  matrix is: "<<endl;
 print(D, m, n);
 getch();
 }

/*
Output:
Give the number of rows: 2
Give the number of columns: 3

Enter the elements of the 1st matrix:
Enter the element [0] [0]=5
Enter the element [0] [1]=3
Enter the element [0] [2]=8
Enter the element [1] [0]=9
Enter the element [1] [1]=10
Enter the element [1] [2]=20

Enter the elements of the 2nd matrix:
Enter the element [0] [0]=2
Enter the element [0] [1]=1
Enter the element [0] [2]=6
Enter the element [1] [0]=3
Enter the element [1] [1]=19
Enter the element [1] [2]=18

The sum of matrix is:
    7    4   14   12   29   38

The difference  matrix is:
    3    2    2    6   -9    2

*/