#include<stdio.h>
void matrixchainorder(int);      // for calculating m(i,j) & s(i,j)
void printparens(int,int);         //for printing
long m[10][10];
int s[10][10];
int p[10];
void main()
{
 int n;
 printf("enter no of matrixes");
 scanf("%d",&n);

 printf("enter chain");
 for(int i=0;i<=n;i++)
 {
  scanf("%d",&p[i]);
 }
 matrixchainorder(n);

 printparens(1,n);
}


void matrixchainorder(int n)
{
 long i,l,k,x;
 x=n;
 for(i=1;i<=x;i++)
  m[i][i]=0;
 for(l=2;l<=x;l++)
 {
  for(i=1;i<=x-l+1;i++)
  {
	int j=i+l-1;
	m[i][j]=1000000;
	for(k=i;k<=j-1;k++)
	{

	 long a=m[i][k];

	 long b=m[k+1][j];

	 long c=p[i-1]*p[k]*p[j];
	 long q=a+b+c;

	 if(q<m[i][j])
	 {
	  m[i][j]=q;
	  s[i][j]=k;

	 }
	}
  }
 }
}



void printparens(int i,int j)
{
 if(i==j)
  printf("A%d",i);
 else
 {
  printf("(");
  printparens(i,s[i][j]);
  printparens(s[i][j]+1,j);
  printf(")");
 }
}