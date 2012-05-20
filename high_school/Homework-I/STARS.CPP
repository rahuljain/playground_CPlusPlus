//Program created by Rahul Jain.
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 cout<<"Enter the value of n: " ;
 cin>>n;
	for(int i=1; i<=n; i++)
		{
		 for(int j=n-i; j>=1; j--)
		 cout<<" ";
		 for(int k=1; k<=i; k++)
		 cout<<"* ";
		 cout<<endl;
		}


	for(int i2=n-1; i2>=1; i2--)
		{
		 for(int j=n-i2; j>=1; j--)
		 cout<<" ";
		 for(int k=1; k<=i2; k++)
		 cout<<"* ";
		 cout<<endl;
		}

 getch();
}