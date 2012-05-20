/* THIS PROGRAM FINDS THE BINARY EQIVALENT OF A NUMBER AND PRINTS IT OUT.
	PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int no;
 cin>>no;
 long int bin=0;
 for(int i=0 ; no>0 ; no/=2,i++)
  bin+=(no%2)*pow(10,i);
 cout<<bin;
 getch();
}
