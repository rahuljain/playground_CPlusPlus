// THIS PROGRAM DOES THE FUNCTION OF A SIMPLE CALCULATOR.
// PROGRAM DEVELOPED BY ANKIT JAIN.

#include<iostream.h>
#include<conio.h>
#include<process.h>

void main()

{

 clrscr();
 char c;
 float a,b,result;
 cout<<"Enter first number : ";
 cin>>a;
 cout<<"Enter second number : ";
 cin>>b;
 cout<<"Please give the operation to be executed : ";
 cin>>c;
 switch (c)

    {

     case 'd' :
     case 'D' :
     case '/' :	 result=a/b;
		 break;
     case 'm' :
     case 'M' :
     case '*' :  result=a*b;
		 break;
     case 'a' :
     case 'A' :
     case '+' :  result=a+b;
		 break;
     case 's' :
     case 'S' :
     case '-' :  result=a-b;
		 break;
     default  :  cout<<"Wrong option choosed, type a,s,m,d,+,-,* or /";
		 getch();
		 exit(0);
   }

 cout<<"Result = "<<result;
 getch();

}
/*
 OUTPUT:
 Enter first number : 123
 Enter second number : 321
 Please give the operation to be executed : A
 Result = 444
*/
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                





