/* THIS PROGRAM FINDS THE MULTIPLE OF A NUMBER UPTO 100
	PROGRAM DEVELOPED BY ANKIT
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 cout<<"GIVE A NUMBER AND I WILL PRINT OUT IT'S MULTIPLES UPTO HUNDRED:";
 cin>>n;
 for(int i=1 ; n*i<=100 ; i++)
  cout<<n*i<<endl;
 getch();
}