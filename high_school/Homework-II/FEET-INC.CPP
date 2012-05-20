#include<iostream.h>
#include<conio.h>
#include<math.h>

void convert(long i, int&x, int&y)
 {
  x=i/12;
  i=i%12;
  y=i;
 }

void diff(int a1, int b1, int a2, int b2, int&a3, int&b3)
 {
  long inch1=(a1*12)+b1;
  long inch2=(a2*12)+b2;
  long inch3=abs(inch2-inch1);
  convert(inch3,a3,b3);
 }


void main()
 {
  clrscr();
  int f1,i1,f2,i2,f3,i3;
  cout<<"Enter the first length in feet and inches: ";
  cin>>f1>>i1;
  cout<<"Enter the second length in feet and inches: ";
  cin>>f2>>i2;
  diff(f1,i1,f2,i2,f3,i3);
  cout<<"Their difference is: "<<f3<<" "<<i3;
  getch();
 }


/*

Output:
Enter the first length in feet and inches: 23 5
Enter the second length in feet and inches: 32 8
Their difference is: 9 3

*/