//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>

void append(int P[], int Q[], int R[], int x, int y)
{
 for(int i=0; i<x; i++)
 R[i]=P[i];
 for(int j=0; j<y; j++)
 R[j+x]=Q[j];
}

void sort(int A[], int n)
{
 for(int i=0; i<n-1; i++)
       {
	for(int j=i+1; j<n; j++)

	if(A[i]>A[j])
	       {
		int t= A[i];
		A[i]=A[j];
		A[j]=t;
		}
	}
}


void read(int A[], int x)
{
 for(int i=0; i<x; i++)
 cin>>A[i];
}


void print(int A[], int n)
{
 for(int i=0; i<n; i++)
 cout<<A[i]<<" ";
}


void main()
{
 clrscr();
 int A[100], B[100], C[200], m, n;
 cout<<"Enter number of elements to be entered in the first set: ";
 cin>>m;
 cout<<"Enter the number of elements to be entered in the second set: ";
 cin>>n;
 cout<<"Enter the elements: " ;
 read(A,m);
 read(B,n);
 append(A, B, C, m, n);
 sort(C, m+n);
 cout<<"The elements in the ascending order are: ";
 print(C, m+n);
 getch();

}


/*

Output:

Enter number of elements to be entered in the first set: 3
Enter the number of elements to be entered in the second set: 4
Enter the elements: 45 32 12
56 74 22 12
The elements in the ascending order are: 12 12 22 32 45 56 74

*/