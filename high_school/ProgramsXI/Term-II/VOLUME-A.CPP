// Volume of room.Program developed by Ankit Jain.
#include<iostream.h>
#include<conio.h>
struct dimension
{
  int feet;
  float inch;
};
void read(dimension &);
float cal(dimension,dimension,dimension);
void main()
{
 clrscr();
 dimension l,b,h;
 cout<<"Give dimensions of length:\n";
 read(l);
 cout<<"Give dimensions of breadth:\n";
 read(b);
 cout<<"Give dimensions of height:\n";
 read(h);
 float vol=cal(l,b,h);
 cout<<"Volume of room = "<<vol<<" cubic feet";
 getch();
}
void read(dimension &x)
{
 cout<<"Enter no. of feet : ";
 cin>>x.feet;
 cout<<"Enter no. of inches : ";
 cin>>x.inch;
}
float cal(dimension len,dimension bre,dimension hei)
{
 float l,b,h;
 l=len.feet+len.inch/12;
 b=bre.feet+bre.inch/12;
 h=hei.feet+hei.inch/12;
 return l*b*h;
}
/*
Output:
Give dimensions of length:
Enter no. of feet : 5
Enter no. of inches : 6
Give dimensions of breadth:
Enter no. of feet : 10
Enter no. of inches : 6.5
Give dimensions of height:
Enter no. of feet : 5
Enter no. of inches : 3.5
Volume of room = 306.806427 cubic feet
*/