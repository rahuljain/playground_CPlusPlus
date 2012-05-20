#include<conio.h>
#include<iostream.h>
#include<stdio.h>
struct point
{
int x_cord;
int y_cord;
};

void main()
{
clrscr();
point p1, p2, p3;
cout<<"Give the coordinates of point 1: ";
cin>>p1.x_cord>>p1.y_cord;

cout<<"Give the cordinates of the point 2: ";
cin>>p2.x_cord>>p2.y_cord;

gotoxy(p1.y_cord, p1.x_cord);
cout<<"*";

gotoxy(p2.y_cord, p2.x_cord);
cout<<"*";

p3.x_cord=p1.x_cord-p2.x_cord;
p3.y_cord=p1.y_cord-p2.y_cord;
gotoxy(p3.y_cord, p3.x_cord);
cout<<"*";
getch();
}