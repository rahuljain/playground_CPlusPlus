//15.
//Program created by Rahul Jain. XII D

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void read(int A[], int n)
{
for(int i=0; i<n; i++)
   {
	cout<<i+1<<" element: ";
	cin>>A[i];
   }
}

void disp(int A[], int n)
{
for(int i=0; i<n; i++)
   cout<<A[i]<<endl;
}

void append(int A[], int B[], int C[], int m, int n)
{
for(int i=0; i<m; i++)
  C[i]=A[i];
for(int j=0; j<n; j++, i++)
  C[i]=B[j];

cout<<endl;
disp(C, i);
}

void merge(int A[], int B[], int C[], int m, int n)
{
int i=m-1, j=0, k=0;

while(i>=0 && j<n)
   {
     if(A[i]==B[j])
	 {
	     C[k++]=A[i--];
	     C[k++]=B[j++];
	 }

      else
     {
     if(A[i]>B[j])
	C[k++]=A[i--];

     else
	{
	   if(B[j]>A[i])
		C[k++]=B[j++];
	   else;
	}
     }
   }

while(i>=0)
 C[k++]=A[i--];

while(j<n)
 C[k++]=B[j++];

cout<<endl;
disp(C,k);
}


void main()
{
clrscr();
int A[10], B[10], C[20], m, n;
cout<<"Enter the no. of elements of the 1st array: ";
cin>>m;
cout<<"Enter the no. of elements of the 2nd array: ";
cin>>n;
clrscr();
cout<<"Enter the elements of the 1st array in ascending order: "<<endl;
read(A,m);
cout<<"Enter the elements of the 2nd array in descending order: "<<endl;
read(B,n);
cout<<"The appended array is: ";
append(A,B,C,m,n);
cout<<"The merged array is (in descending order): ";
merge(A,B,C,m,n);
getch();
}


/*

Enter the elements of the 1st array in ascending order:
1 element: 170
2 element: 185
3 element: 200
Enter the elements of the 2nd array in descending order:
1 element: 200
2 element: 185
3 element: 165
4 element: 155
5 element: 110
6 element: 95
7 element: 88
8 element: 72
The appended array is:
170
185
200
200
185
165
155
110
95
88
72
The merged array is (in descending order):
200
200
185
185
170
165
155
110
95
88
72



*/