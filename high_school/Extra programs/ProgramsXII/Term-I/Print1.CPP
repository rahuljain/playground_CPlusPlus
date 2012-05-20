#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<math.h>
void read(int A[50], int n)
{
cout<<"Enter the elements: ";
for(int i=0 ;i<n; i++)
cin>>A[i];
}

void sort(int A[50], int n)
{
for(int i=0; i<n-1; i ++)
for(int j=i+1; j<n; j++)
if(A[i]<A[j])
{
int t = A[i];
A[i]=A[j];
A[j]=t;
}
cout<<endl<<"The sorted list is:"<<endl;
for(int k=0; k<n; k++)
cout<<endl<<A[k];
}

void merge(int A[50], int B[50], int C[50], int m, int n)
{
for(int i=0; i<m; i++)
C[i]=A[i];
for(int j=0; j<n; j++)
C[i+j]=B[j];
for(int k=0; k<m+n; k++)
cout<<endl<<C[k];
}

void display(int A[50], int B[50], int m, int n)
{
cout<<"First array:"<<endl;
for(int i=0; i<m; i++)
cout<<A[i]<<endl;

cout<<"Second Array:"<<endl;
for(int j=0; j<n;j++)
cout<<B[j]<<endl;
}

void main()
{
clrscr();
int A[50], B[50], C[100], m, n, option;

cout<<"First Array: "<<endl;
cout<<"How many elements do you want to enter? ";
cin>>m;
read(A,m);

cout<<endl<<"Second Array: "<<endl;
cout<<"How many elements do you want to enter? ";
cin>>n;
read(B,n);

cout<<"What operation do you want to perform? ";
cout<<"1. sort using selection sort?"<<endl<<"2. To merge the first and second array to create another array?"<<endl<<"3. Display the array"<<endl<<"4. Quit";
cout<<endl<<"Enter the option number: ";
cin>>option;
switch(option)
{
case 1: sort(A,m);
	sort(B,n);
	break;

case 2: merge(A, B, C, m, n);
	break;

case 3: display(A, B, m, n);
	break;

case 4: exit(0);
	break;
}
}