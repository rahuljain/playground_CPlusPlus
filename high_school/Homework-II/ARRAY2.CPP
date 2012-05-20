		#include<iostream.h>
		#include<stdio.h>
		#include<conio.h>
		void main()
			{clrscr();
			 const int n=100;
			 float a[n];
			 cout<<"Enter the no of numbers you want to enter ";
			 int no;
			 cin>>no;
			 for(int i=0;i<no;i++)cin>>a[i];
			 float h=a[0];
			 float l=a[0];
			 for(i=0;i<no;i++)
			 {if(a[i]>h) h=a[i];
			  if(a[i]<l) l=a[i];
			  }
			 cout<<"The highest is "<<h<<endl;
			 cout<<"The lowest is "<<l<<endl;
			 float av = (h+l)/2;
			 int hi=0,lo=0;
			 for(i=0;i<no;i++)
			{if(a[i]>av)hi++;
			 else if(a[i]<av)lo++;
			 }
			 cout<<"The no of numbers greater than average ";
			 cout<<endl<<"of lowest and highest nos. is "<<hi;
			 cout<<endl<<"The no of numbers lower than average ";
			 cout<<endl<<"of lowest and highest nos. is "<<lo;
			 }

		/*                OUTPUT

		Enter the no of numbers you want to enter 5
		10
		20
		30
		40
		50
		The highest is 50
		The lowest is 10
		The no of numbers greater than average
		of lowest and highest nos. is 2
		The no of numbers lower than average
		of lowest and highest nos. is 2

		*/
