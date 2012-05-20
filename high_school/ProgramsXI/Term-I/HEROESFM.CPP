//This program finds oput the area of the triangle using Hero's formula
//Program created by Rahul Jain.
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
if(e>=0)
cout << "Area of the triangle is = "<< sqrt(e);
else
cout << "Area of the triangle is = "<< sqrt(-e)<<" i";
getch();
}



/*
Output:
enter the length of the 1st side of the triangle
5
enter the length of the 2nd side of the triangle
2
enter the length of the 3rd side of the triangle
1
Area of the triangle is = 4.898979 i

*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


