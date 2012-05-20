//This program brings the odd numbers to the left side of the array and the even numbers to the right.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[100], n, x=0;
cout<<"How many elements do you want to enter? ";
cin>>n;
cout<<"Enter the elements: ";
for(int j=0; j<n; j++)
cin>>A[j];

for(int i=0; i<n; i++)
       {
	if(A[x]%2==0)
	       {
		int t=A[x];
		for(int k=x+1; k<n; k++)
		      {
			A[k-1]=A[k];
		      }
		A[k-1]=t;
	       }
	else
	x++;
       }
cout<<"The elements in the respective order are:"<<'\n';
for(int m=0; m<n; m++)
cout<<A[m]<<" ";
getch();
}

/*

Output:
How many elements do you want to enter? 5
Enter the elements: 34 67 88 98 27
The elements in the respective order are:
67 27 34 88 98

*/