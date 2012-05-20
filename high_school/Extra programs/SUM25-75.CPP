/*THIS PROGRAM FINDS THE SUM OF ALL ODD NUMBERS FROM 25 TO 75
  PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int sum=0;
 for (int i=25 ; i<=75 ; i+=2)
 sum+=i;
 cout<<"THE SUM OF ODD NUMBERS FROM 25 TO 75 IS "<<sum;
 getch();
}