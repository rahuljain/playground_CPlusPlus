#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<<"Enter the no. for which you want its table to be printed: ";
cin>>n;
clrscr();
for (int i=1; i<21; i++)
cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
getch();
}


