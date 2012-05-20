//This program finds out the sum of odd and even digits in a given number.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,numb=0,r,sum1=0,sum2=0;
 cout<<"Enter any number: ";
 cin>>n;
 int no=n;
      while(n>0)
	{
	  numb++;
	  n=n/10;
	}


      for(int i=1; i<=numb; i++)
	 {
	   r=no%10;
	   if(r%2==0)
	   sum1+=r;
	   else
	   sum2+=r;
	   no=no/10;
	 }


 cout<<"The sum of the odd and even digits in the number is: "<<sum1+sum2;
 getch();
}



/*

OUTPUT:

Enter any number: 234
The sum of the odd and even digits in the number is: 9

*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
