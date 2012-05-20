//This program finds out the sum of the series 1+ x^2/2! - x^3/3!.....upto n
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int x,n;
 cout<<"Enter the value of x,n: ";
 cin>>x>>n;
 int fact;
 float s=1;

 for (int i=2; i<=n; i++)
	   {
		fact=1;
		for(int j=2;j<=i;j++)
		fact*=j;
		if(i%2==1)
		s-=pow(x,i)/fact;
		else
		s+=pow(x,i)/fact;
	   }

 cout<<"The sum of the series is: "<<s;
 getch();
}



/*
OUTPUT:
Enter the value of x,n: 2 3
The sum of the series is: 2.333333
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
