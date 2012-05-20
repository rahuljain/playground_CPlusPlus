#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
enum {a,b,c};
void in(int a[10][10],int &r,int &c,char f=0)
{
	if(f==0)
	{
		cout<<"enter number of rows ";
		cin>>r;
		cout<<"enter number of columns ";
		cin>>r;
	}

	for(int i=0;i<r;i++)
	{
		cout<<"enter for row "<<i+1<<endl;
		for(int j=0;j<c;j++)
		cin>>a[i][j];
	}
	cout<<"done\n";
}
void sum(int a[10][10],int b[10][10],int r,int l,int c[10][10])
{
	for(int i=0;i<r;i++)
	for(int j=0;j<l;j++)
	c[i][j]=a[i][j]+b[i][j];
}
void dif(int a[10][10],int b[10][10],int r,int l,int c[10][10])
{
	for(int i=0;i<r;i++)
	for(int j=0;j<l;j++)
	c[i][j]=a[i][j]-b[i][j];
}
void multi(int a[10][10],int b[10][10],int r,int l,int c[10][10],int &rc,int &lc)
{

	for(int i=0;i<l;i++)
	for(int j=0;j<r;j++)
	c[i][j]=0;
	for(i=0;i<r;i++)
	for(j=0;j<l;j++)
	for(int k=0;k<l;k++)
	c[i][j]+=a[i][j]*b[j][k];
	rc=r;
	lc=l;
}
void display(int a[10][10],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cout<<setw(3)<<a[i][j];
		cout<<endl;
	}
}
int diagonal(int a[10][10],int r,int c)
{
	if(r!=c)
	{
		cout<<"reenter a square matrix: ";
		cout<<"enter number of rows/columns ";
		int n;
		cin>>n;
		in(a,n,n);
		diagonal(a,n,n);
		return 0;
	}
	int s1=0,s2=0,s3;
	for(int i=0;i<r;i++)
	for(int j=0;j<r;j++)
	{
		if(i==j)
		s1+=a[i][j];
		if(i==r-1-j)
		s2+=a[i][j];
	}
	s3=s1+s2;
	if((r/2)%2==1)
	s3-=a[r/2][r/2];
	cout<<"diagonal 1   = "<<s1<<endl;
	cout<<"diagonal 2   = "<<s2<<endl;
	cout<<"diagonal sum = "<<s3<<endl;
	return 0;
}

void main()
{
	clrscr();
	char a='y';
	while(a=='y'||a=='Y')
	{
		cout<<"Enter choice:\n1.insert array

void main()
{
	clrscr();
	int a[10][10]
	={{1,1,1},{1,1,1},{1,1,1}},
	b[10][10]={{1,1,1},{1,1,1},{1,1,1}},
	c[10][10],r[3]={0},l[3]={0};
	in(a,r[0],l[0]
	multi(a,b,r[1],l[0],c,r[2],l[2]);
	display(c,r[2],l[2]);
	sum(a,b,r[0],l[0],c);
	display(c,r[2],l[2]);
	dif(a,b,r,l,c);
	display(c,r,l);
	diagonal(a,r,l);
	getch();
}