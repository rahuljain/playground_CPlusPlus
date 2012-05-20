#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int c[100],d[100];
	void read(int &n,int a[])
		{
		cout<<"Enter the no of elements "<<endl;
		cin>>n;
		for(int i =0;i<n;i++)
			{
			cout<<endl<<"Enter element  no. "<<i+1<<":-";
			cin>>a[i];
			//temp[i]=a[i];
			 }

		}
	void print(int n,int a[])
		{
		cout<<endl<<"The array is "<<endl;
		for(int i =0;i<n;i++)
		cout<<" "<<a[i];
		}
void app()
{
clrscr();
int a[20],n1,b[20],n2;
cout<<"Enter for array no 1"<<endl;
read(n1,a);
cout<<"Enter for array no 2"<<endl;
read(n2,b);


for(int i=0;i<n1;i++)
c[i]=a[i];
i=n1;
for(int j=0;i<n1+n2;i++,j++)
c[i]=b[j];
cout<<"When appended ";
print(n1+n2,c);
}
void merge()
{
int i=1,j=0,k=0;
clrscr();
int a[20],n1,b[20],n2;
cout<<"Enter for array no 1"<<endl;
read(n1,a);
cout<<"Enter for array no 2"<<endl;
read(n2,b);
while((i<=n1)&&(j<n2))
{
       //	for(int k=0;k<n1+n2;k++)
	//{

		if(a[n1-i]<b[j])
			{
			d[k]=b[j];
			j++;
			}
		else
			{
			d[k]=a[n1-i];
			i++;
			}
	       k++;
      //	}
}

if(n1>i)
for(;k<n1+n2;k++,i++)
d[k]=a[n1-i];

if(j<n2)
for(;k<n1+n2;k++,j++)
d[k]=b[j];

cout<<endl<<"When merged  ";
print(n1+n2,d);
}
void main()
{

//print(n1,a);
//print(n2,b);
char ans='y';
int c;
while(ans=='y')
{
clrscr();
cout<<"Enter your choice ";
cout<<endl<<"0 exit";
cout<<endl<<"1 append";
cout<<endl<<"2 merge"<<endl;
cin>>c;
if(c==1)
app();
if(c==2)
merge();
ans='n';
if(c!=0)
{
cout<<endl<<"Do you want to continue ?";
cin>>ans;
}

getch();
}
}