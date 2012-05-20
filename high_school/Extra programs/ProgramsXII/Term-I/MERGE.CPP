//This program creates two araays and performs various functions.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<process.h>

void read(int A[],int n)
     {
	for(int i=0; i<n; i++)
	cin>>A[i];
     }

void sort(int A[], int n)
     {
	for(int i=0; i<n-1;i++)
	for(int j=i+1; j<n; j++)
	  if(A[i]>A[j])
		{
		 int temp=A[i];
		 A[i]=A[j];
		 A[j]=temp;
		}
     }

void merge(int A[],int m, int B[], int n, int C[])
     {
	for(int i=0; i<m; i++)
	C[i]=A[i];
	for(int j=0; j<n; j++)
	C[j+i]=B[j];
     }

void display(int A[], int n)
     {
	for(int i=0; i<n; i++)
	cout<<A[i]<<'\n';
     }

void main()
{
 clrscr();
 int A[50], B[50], C[100], n, m, option;
 char ans;

 do
  {
    cout<<"Number of elements of A? ";
    cin>>m;
    cout<<"Number of elements of B? ";
    cin>>n;
    cout<<"Enter the elements of A:"<<endl;
    read(A,m);
    cout<<"Enter the elements of B:"<<endl;
    read(B,n);
    cout<<"What function do you want to perform?"<<"\n1. Sort using selection sort"<<"\n2. Merge arrays A and B and create array C."<<"\n3. Display the array C"<<"\n4. quit";
    cout<<"\nEnter the choice(1 to 4): ";
    cin>>option;

    switch(option)
      {
	case 1:sort(A,m);
	       sort(B,n);
	       cout<<"The sorted array is:"<<endl;
	       display(A,m);
	       cout<<"The sorted array B is:"<<endl;
	       display(B,n);
	       break;

	case 2:
	case 3:merge(A,m,B,n,C);
	       cout<<"The merged array C is:"<<endl;
	       sort(C,m+n);
	       display(C,m+n);
	       break;

	case 4:exit(0);

	default:cout<<"wrong choice";
  }

cout<<"Do you want to continue?:";
cin>>ans;
}

while(ans=='Y'||ans=='y');

}


/*

Output:
Number of elements of A? 3
Number of elements of B? 5
Enter the elements of A:
34 67 4
Enter the elements of B:
45 3 76 78 5
What function do you want to perform?
1. Sort using selection sort
2. Merge arrays A and B and create array C.
3. Display the array C
4. quit
Enter the choice(1 to 4): 1
The sorted array is:
4
34
67
The sorted array B is:
3
5
45
76
78
Do you want to continue?:y
Number of elements of A? 4
Number of elements of B? 2
Enter the elements of A:
34 54 3
2
Enter the elements of B:
23 34
What function do you want to perform?
1. Sort using selection sort
2. Merge arrays A and B and create array C.
3. Display the array C
4. quit
Enter the choice(1 to 4): 2
The merged array C is:
2
3
23
34
34
54
Do you want to continue?:n

*/