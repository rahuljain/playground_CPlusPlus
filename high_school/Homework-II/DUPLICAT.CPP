#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int n, A[100];
 cout<<"How many elements do u want to enter? ";
 cin>>n;
 cout<<"Enter the elements: ";
 for(int a=0; a<n; a++)
 cin>>A[a];

 for(int i=0; i<n; i++)
       {
	for(int j=i+1; j<n; j++)
	if(A[i]==A[j])
	       {
		for(int k=j; k<n-1; k++)
		A[k]=A[k+1];
		n--;
		j--;
	       }

	}
 for(int k=0; k<n; k++)
 cout<<A[k]<<" ";
 getch();
}

/*

Output:
How many elements do u want to enter? 5
Enter the elements: 1 21 3 1 21
1 21 3

*/
