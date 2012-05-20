/* THIS PROGRAM FINDS THE TABLE OF A USER DEFINED NUMBER UPTO 20
	PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 cout<<"PLEASE GIVE A NUMBER AND I WILL PRINT IT'S TABLE UPTO 20 ";
 cin>>n;
 for (int i=1 ; i<=20 ; i++)
  cout<<n<<" * "<<i<<" = "<<n*i<<endl;
 getch();
}
