#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int x,n;
 cout<<"This program will sum up a series upto n terms"<<"\n";
 cout<<"Enter the value of x(where x is an integer) and n"<<"\n";
 cin>>x>>n;
 float S=1;
 for(int i=2;i<=n;i++)
	{
	 int fact=1;
	 for(int j=1;j<=i;j++)

		 fact*=j;
		 if (i%2==1)
		 S-=pow(x,i)/fact;
		 else
		 S+=pow(x,i)/fact;
		}
 cout<<"The the sum of series is "<<S;
getch();
}






                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
