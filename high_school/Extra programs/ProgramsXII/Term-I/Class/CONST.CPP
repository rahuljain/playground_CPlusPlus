#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class X
{
int i;
protected:
int j;
public:
int k;

X(int x, int y, int z)
{
i=x;
j=y;
k=z;
}

void print()
{
cout<<i<<endl<<j<<endl<<k;
}
};X o1(7,3,2);

void main()
{
clrscr();

o1.print();

getch();
}