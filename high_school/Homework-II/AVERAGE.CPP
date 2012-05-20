#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n, A[100];
float oddsum=0, evensum=0,odd=0, even=0, oddsubs=0, odd1=0, evensubs=0, even1=0;
cout<<"How many elements do you want to enter? ";
cin>>n;
cout<<"Enter the elements: ";
for(int a=0; a<n; a++)
cin>>A[a];
for(int i=0; i<n; i++)
     {
	if(A[i]%2==0)
	       {
		evensum+=A[i];
		even++;
	       }

	else
	       {
		oddsum+=A[i];
		odd++;
	       }
	if(i%2==0)
	       {
		evensubs+=A[i];
		even1++;
	       }

	else
	       {
		oddsubs+=A[i];
		odd1++;
	       }

     }

cout<<"Average of odd nos = "<<oddsum/odd<<'\n';
cout<<"Average of even nos= "<<evensum/even<<'\n';
cout<<"Average of the nos. at odd subscripts= "<<oddsubs/odd1<<'\n';
cout<<"Average of the nos. at even subscripts= "<<evensubs/even1<<'\n';
getch();
}

/*

Output:

How many elements do you want to enter? 6
Enter the elements: 21 34 65 78 93 4
Average of odd nos = 59.666668
Average of even nos= 38.666668
Average of the nos. at odd subscripts= 38.666668
Average of the nos. at even subscripts= 59.666668

*/