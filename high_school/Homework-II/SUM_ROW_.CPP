/*
This program finds out the sum of the elements of the
rows ,coloumns, and the total sum of a matrix.
Program created by Rahul Jain.
*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void read(int A[100][100], int m, int n)
{
cout<<"Enter the matrix:"<<endl;
for(int i=0; i<m; i++)
for(int j=0; j<n; j++)
cin>>A[i][j];
}

void print_rowsum(int A[100][100], int m, int n)
{
int sum;
for(int i=0; i<m; i++)
  {
	sum=0;
	for(int j=0; j<n; j++)
	   {
		sum+=A[i][j];
		cout<<setw(5)<<A[i][j];
	   }
		cout<<setw(5)<<sum<<endl;
  }
}

void col_sum(int A[100][100], int m, int n)
{
int sum, total=0;
for(int i=0; i<n; i++)
       {
	sum=0;
	for(int j=0; j<m; j++)
	sum+=A[j][i];
	total+=sum;
	cout<<setw(5)<<sum;
       }
cout<<setw(5)<<total<<endl;
}

void main()
{
clrscr();
int A[100][100], m, n;
cout<<"Enter the no. of rows: ";
cin>>m;
cout<<"Enter the no. of coloumns: ";
cin>>n;
read(A, m ,n);
cout<<endl<<endl;
cout<<"The sum of the rows, coloumns and of the total matrix is:"<<'\n'<<'\n';
print_rowsum(A,m,n);
col_sum(A, m, n);
getch();
}



/*
Output:

Enter the no. of rows: 4
Enter the no. of coloumns: 3
Enter the matrix:
1 2 3
7 5 9
4 0 7
9 8 6


The sum of the rows, coloumns and of the total matrix is:

    1    2    3    6
    7    5    9   21
    4    0    7   11
    9    8    6   23
   21   15   25   61

*/
