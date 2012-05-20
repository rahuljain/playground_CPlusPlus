//THIS PROGRAM FINDS THE SUM,DIFFERENCE,PRODUCT,REMAINDER AND QUOTIENT OF TWO
//GIVEN NUMBERS.
//PROGRAM DEVELOPED BY ANKIT JAIN.
# include<iostream.h>
void main()
{
 int a,b,sum,diff,prod,remain,quot;
 cout<<"\nPLEASE ENTER FIRST NUMBER ";
 cin>>a;
 cout<<"\nPLEASE ENTER SECOND NUMBER ";
 cin>>b;
 sum=a+b;
 diff=a-b;
 prod=a*b;
 remain=a%b;
 quot=a/b;
 cout<<"\nTHEIR SUM IS "<<sum;
 cout<<"\nTHEIR DIFFERENCE IS "<<diff;
 cout<<"\nTHEIR PRODUCT IS "<<prod;
 cout<<"\nTHEIR REMAINDER IS "<<remain;
 cout<<"\nTHEIR QUOTIENT IS "<<quot;
}