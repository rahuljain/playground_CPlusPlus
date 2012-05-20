//This program creates appends and merges two arrays.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void read(int A[], int n)
{
cout<<endl<<endl;
for(int i=0; i<n; i++)
     {
	cout<<"Enter the "<<i+1<<" element: ";
	cin>>A[i];
     }
}

void display(int A[], int n)
{
cout<<endl;
for(int i=0; i<n; i++)
    cout<<A[i]<<endl;
}

void append(int A[], int B[], int C[], int m, int n)
{

for(int i=0; i<m; i++)
   C[i]=A[i];

for(int k=0; k<n; i++,k++)
   C[i]=B[k];

}


void merge(int A[], int B[], int C[], int m, int n)
{
int i=1,j=0,k=0;

while( (i<=m) && (j<n) )
    {
	if(A[m-i]<B[j])
	    {
		C[k]=B[j];
		j++;
	    }

	else
	    {
		C[k]=A[m-i];
		i++;
	     }
	k++;
    }
}

void main()
{
clrscr();

int A[20], B[20], C[40], m, n;

cout<<"Enter the number of elements of the first matrix: ";
cin>>m;
cout<<"\nEnter the elements in ascending order: ";
read(A, m);

cout<<endl<<endl;

cout<<"Enter the number of elements of the second matrix: ";
cin>>n;
cout<<"\nEnter the elements in descending order: ";
read(B, n);

clrscr();
cout<<"\nThe elements of the first array are: ";
display(A, m);

cout<<"\n\nThe elements of the second array are: ";
display(B, n);

cout<<"\n\nThe appended array is: ";
append(A, B, C, m, m);
display(C, m+n);

cout<<"\n\nThe merged array is: ";
merge(A,B,C,m,n);
display(C, m+n);
getch();
}



/*

Output:

Enter the number of elements of the first matrix: 4

Enter the elements in ascending order:

Enter the 1 element: 12
Enter the 2 element: 56
Enter the 3 element: 89
Enter the 4 element: 99


Enter the number of elements of the second matrix: 3

Enter the elements in descending order:

Enter the 1 element: 65
Enter the 2 element: 43
Enter the 3 element: 2

The elements of the first array are:
12
56
89
99


The elements of the second array are:
65
43
2


The appended array is:
12
56
89
99
65
43
2


The merged array is:
99
89
65
56
43
12
2

*/