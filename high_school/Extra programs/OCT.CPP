/* THIS PROGRAM FINDS THE OCTAHEDRAL EQIVALENT OF A NUMBER AND PRINTS IT OUT.
	PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int no;
 cout<<"Please enter a number:";
 cin>>no;
 long float oct=0;
 for(int i=0 ; no>0 ; no/=8,i++)
  oct+=(no%8)*pow(10,i);
 cout<<"The octal equivalent of the number is "<<oct;
 getch();
}
