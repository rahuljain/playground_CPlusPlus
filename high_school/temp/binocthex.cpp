/* THIS PROGRAM FINDS THE BINARY EQIVALENT OF A NUMBER AND PRINTS IT OUT.	*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int no;
 cin>>no;
 long int bin=0;
 for(int i=0 ; no>0 ; no/=2,i++)
  bin+=(no%2)*pow(10,i);
 cout<<bin;
 getch();
}


/* THIS PROGRAM FINDS THE OCTAHEDRAL EQIVALENT OF A NUMBER AND PRINTS IT OUT.      */
	
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int no;
 cout<<"Please enter a number:";
 cin>>no;
 long float oct=0;
 for(int i=0 ; no>0 ; no/=8,i++)
  oct+=(no%8)*pow(10,i);
 cout<<"The octal equivalent of the number is "<<oct;
 getch();
}



/* THIS PROGRAM FINDS THE HEXA EQIVALENT OF A NUMBER AND PRINTS IT OUT.	*/

#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int no, index=0;
cout<<"Enter any number: ";
cin>>no;
char hexa[50];
int noo=no;
while(no>0)
{
int r=no%16;
if(r<10)
{
hexa[index]=r+48;
index++;
}
if(r>9 && r<=15)
{
hexa[index]=r+55;
index++;
}
no=no/16;
}
hexa[index]='\0';
cout<<strrev(hexa);
getch();
}