#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,d,s,e,area;
cout << "enter the length of the 1st side of the triangle" << "\n";
cin >> a;
cout << "enter the length of the 2nd side of the triangle" << "\n";
cin >> b;
cout << "enter the length of the 3rd side of the triangle" << "\n";
cin >> c;
d=a+b+c;
s=d/2;
e=s*(s-a)*(s-b)*(s-c);
area=sqrt(e);
cout << "the area of the triangle is = "<< area;
getch();
}




