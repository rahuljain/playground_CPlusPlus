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
 int A[100][100], B[100][100] ,C[100][100], D[100][100], m, n;
 cout<<"Give the number of rows: ";
 cin>>m;
 cout<<"Give the number of columns: ";
 cin>>n;
 read(A, m, n);
 read(B, m, n);
 sum(A, B, m, n);
 diff(A, B, C, D, m, n);
 cout<<"The sum of matrix is: "<<endl;
 print(C, m, n);
 cout<<endl;
 cout<<"The difference  matrix is: "<<endl;
 print(D, m, n);
 getch();
 }
