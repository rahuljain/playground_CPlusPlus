//This program finds out the sum of the series 1-(1-2)+(1-2+3).....
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int n;
 cout<<"Enter any number: ";
 cin>>n;
 int subsum=0;
 float sum=0;
	for(int i=1; i<=n; i++)
		{
		 int subsum=0;
		 for(int j=1;j<=i; j++)
		 if(j%2==0)
		 subsum-=j;
		 else
		 subsum+=j;
		 if(i%2==0)
		 sum-=subsum;
		 else
		 sum+=subsum;
		}

 cout<<"The sum of the series is: "<<sum;
 getch();
}




/*

OUTPUT:
Enter any number: 10
The sum of the series is: 30

*/


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
