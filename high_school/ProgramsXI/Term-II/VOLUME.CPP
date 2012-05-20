#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct S
{
long float f;
long float i;
};

float convert(S len,S bre, S hi)
{
long float l=len.f+(len.i/12);
long float b=bre.f+(bre.i/12);
long float h=hi.f+(hi.i);
return l*b*h;
}

void main()
{
clrscr();
S l,b,h;
long float vol;
cout<<"Enter the length: "<<endl;
cout<<"Feet: ";
cin>>l.f;
cout<<"inches: ";
cin>>l.i;

cout<<endl<<"Enter the breadth: "<<endl;
cout<<"Feet: ";
cin>>b.f;
cout<<"inches:";
cin>>b.i;
cout<<endl;

cout<<"Enter the height: "<<endl;
 cout<<"Feet: ";
 cin>>h.f;
 cout<<"Inches: ";
 cin>>h.i;
 cout<<endl;

 long float volume=convert(l,b,h);

 cout<<"The volume is: "<<endl<<volume<<" cubic feet ";
 getch();


}


/*

Output:

Enter the length:
Feet: 3
inches: 4

Enter the breadth:
Feet: 6
inches:3

Enter the height:
Feet: 8
Inches: 4

The volume is:300000cubic inches

*/
