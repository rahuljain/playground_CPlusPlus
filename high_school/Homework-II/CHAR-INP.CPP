/*
The program inputs a string and changes the character of the string which the user enters.
Program created by Rahul Jain.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
clrscr();
char string[20], x, y;
cout<<"Enter any string: ";
gets(string);
cout<<"Please enter the character to be changed: ";
x=getche();

if(x>='a' && x<='z')
y=x-32;
else
if (x>='A' && y<='Z')
{
x=y;
y=x+32;
}
for(int i=0; string[i]!='\0'; i++)
{
if (string[i]==x)
string[i]=toupper(string[i]);
else
if(string[i]==y)
string[i]=tolower(string[i]);
}
cout<<"\nThe changed string is: "<<string;
getch();
}



/*

Output:

Enter any string: spIciy indIans
Please enter the character to be changed: i
The changed string is: spicIy Indians

*/