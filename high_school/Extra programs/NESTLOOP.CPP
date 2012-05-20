/* THIS PROGRAM SHOWS THE USE OF A NESTED FOR LOOP.
	PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 for (int i=0;i<3;i+=2)
  for (int j=i;j<2;j++)
	for (int k=i+j;k<5;k++)
	 cout<<i+j+k<<endl;
 getch();
}