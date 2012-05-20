/*
This program reads two 2D arrays and prints out the
product matrix, sum matrix, difference matrix, column and row sum, diagonal sum.

Program created by Rahul Jain.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>

void read(int A[][10], int&m, int&n)
{
cout<<"Enter the number of rows: ";
cin>>m;
cout<<"Enter the number of columns: ";
cin>>n;

for(int i=0; i<m; i++)
  {
    cout<<"\nElements of the "<<i+1<<" row: "<<endl;
    for(int j=0; j<n; j++)
      {
	cout<<"Enter the element of "<<j+1<<" column: ";
	cin>>A[i][j];
      }
  }
}

void display(int A[][20], int m, int n)
{
    for(int i=0; i<m; i++)
      {
	for(int j=0; j<n; j++)
	  cout<<setw(10)<<A[i][j];
	cout<<endl;
      }
}

void prod_mat(int A[][10], int m1, int n1, int B[][10], int m2, int n2, int C[][20])
{
if(n1==m2)
   {
      for(int i=0; i<m1; i++)
       for(int j=0; j<n2; j++)
	{C[i][j]=0;
	 for(int k=0; k<n1; k++)
	 C[i][j]+=A[i][k]*B[k][j];
       }
	cout<<"\nThe product matrix is: \n";
	display(C, m1, n2);
   }

else
  {
	cout<<"The matrices can't be multiplied.";
	cout<<"\nThe number of columns of the 1st matrix should be equal to the number of rows of the 2nd matrix.";
  }

getch();
}

void sum_mat(int A[][10], int m1, int n1, int B[][10], int m2, int n2, int C[][20])
{
int rbig=m1, cbig=n1;

if(m2>rbig)
rbig=m2;
else;

if(n2>cbig)
cbig=n2;
else;

for(int i=0; i<rbig; i++)
 for(int j=0; j<cbig; j++)
  C[i][j]=A[i][j]+B[i][j];

cout<<"\nThe sum matrix is: \n";
display(C, rbig, cbig);

getch();
}

void diff_mat(int A[][10], int m1, int n1, int B[][10], int m2, int n2, int C[][20])
{
int rbig=m1, cbig=n1;

if(m2>rbig)
rbig=m2;
else;

if(n2>cbig)
cbig=n2;
else;

for(int i=0; i<rbig; i++)
 for(int j=0; j<cbig; j++)
  C[i][j]=A[i][j]-B[i][j];

cout<<"\nThe difference matrix is: \n";
display(C, rbig, cbig);

getch();
}


void diag_sum(int A[][10], int m, int n)
{
int sum1=0, sum2=0;

if(m==n)
  {
     for(int i=0; i<m; i++)
       {
	 sum1+=A[i][i];
	 sum2+=A[i][m-1-i];
       }
     int sum=sum1+sum2;

     if(m%2!=0)
	sum-=A[m/2][m/2];

     cout<<"the sum of the diagonals is: "<<sum;
  }

else
cout<<"the diagonal sum can't be calculated.";

getch();
}

void print(int A[][10], int m, int n)         //Displays a matrix with row and column sum.
{
int sum;
for(int i=0; i<m; i++)
  {
     sum=0;
     for(int j=0; j<n; j++)
	sum+=A[i][j];
     for(int k=0; k<n; k++)
	cout<<setw(10)<<A[i][k];
     cout<<setw(10)<<sum;
     cout<<endl;
  }

int sum1, total=0;
for(i=0; i<n; i++)
   {
      sum1=0;
      for(int j=0; j<m; j++)
      sum1+=A[j][i];
      total+=sum1;
      cout<<setw(10)<<sum1;
   }
cout<<setw(10)<<total<<endl;

getch();
}

void main()
{
clrscr();
int A[10][10]={0}, m1, n1, B[10][10]={0}, m2, n2, C[20][20];

cout<<"For the first matrix:"<<endl;
read(A, m1, n1);

cout<<"\nFor the second matrix: "<<endl;
read(B, m2, n2);

int opt;
do
{
clrscr();
cout<<"\n 1.Product matrix.\n 2.Sum matrix.\n 3.Difference matrix.\n";
cout<<" 4.Diagonal sum.\n 5.Print the matrices with row and column sum.\n 6.exit";
cout<<"\n What function do you want to perform: ";
cin>>opt;
cout<<endl;

switch(opt)
  {
      case 1:prod_mat(A, m1, n1, B, m2, n2, C);
      break;

      case 2:sum_mat(A, m1, n1, B, m2, n2, C);
      break;

      case 3:diff_mat(A, m1, n1, B, m2, n2, C);
      break;

      case 4:
	{
	  cout<<"\nFor the first matrix ";
	  diag_sum(A, m1, n1);

	  cout<<"\nFor the second matrix ";
	  diag_sum(B, m2, n2);
	}
      break;

      case 5:
	{
	  print(A, m1, n1);
	  cout<<endl<<endl;
	  print(B, m2, n2);
	}
      break;

case 6:exit(0);
  }
}
while(opt!=6);
}


/*

Output:

For the first matrix:
Enter the number of rows: 3
Enter the number of columns: 4

Elements of the 1 row:
Enter the element of 1 column: 12
Enter the element of 2 column: 23
Enter the element of 3 column: 34
Enter the element of 4 column: 45

Elements of the 2 row:
Enter the element of 1 column: 56
Enter the element of 2 column: 67
Enter the element of 3 column: 78
Enter the element of 4 column: 89

Elements of the 3 row:
Enter the element of 1 column: 90
Enter the element of 2 column: 13
Enter the element of 3 column: 24
Enter the element of 4 column: 35

For the second matrix:
Enter the number of rows: 4
Enter the number of columns: 2

Elements of the 1 row:
Enter the element of 1 column: 11
Enter the element of 2 column: 22

Elements of the 2 row:
Enter the element of 1 column: 33
Enter the element of 2 column: 44

Elements of the 3 row:
Enter the element of 1 column: 55
Enter the element of 2 column: 66

Elements of the 4 row:
Enter the element of 1 column: 77
Enter the element of 2 column: 88

 1.Product matrix.
 2.Sum matrix.
 3.Difference matrix.
 4.Diagonal sum.
 5.Print the matrices with row and column sum.
 6.exit
 What function do you want to perform: 2


The sum matrix is:
	23        45        34        45
	89       111        78        89
       145        79        24        35
	77        88         0         0


--------------------------------------------------------------

 What function do you want to perform: 3


The difference matrix is:
	 1         1        34        45
	23        23        78        89
	35       -53        24        35
       -77       -88         0         0



------------------------------------------------------------------

 What function do you want to perform: 4


For the first matrix the diagonal sum can't be calculated.
For the second matrix the diagonal sum can't be calculated.

------------------------------------------------------------------

 What function do you want to perform: 5

	12        23        34        45       114
	56        67        78        89       290
	90        13        24        35       162
       158       103       136       169       566


	11        22        33
	33        44        77
	55        66       121
	77        88       165
       176       220       396


-------------------------------------------------------------
For the first matrix:
Enter the number of rows: 3
Enter the number of columns: 2

Elements of the 1 row:
Enter the element of 1 column: 1
Enter the element of 2 column: 2

Elements of the 2 row:
Enter the element of 1 column: 3
Enter the element of 2 column: 4

Elements of the 3 row:
Enter the element of 1 column: 5
Enter the element of 2 column: 1

For the second matrix:
Enter the number of rows: 2
Enter the number of columns: 2

Elements of the 1 row:
Enter the element of 1 column: 1
Enter the element of 2 column: 0

Elements of the 2 row:
Enter the element of 1 column: 1
Enter the element of 2 column: 0

 1.Product matrix.
 2.Sum matrix.
 3.Difference matrix.
 4.Diagonal sum.
 5.Print the matrices with row and column sum.
 6.exit
 What function do you want to perform: 1


The product matrix is:
	 3         0
	 7         0
	 6         0


*/
