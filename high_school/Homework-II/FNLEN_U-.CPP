#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int stringlength(char string[50])
{
for(int l=0; string[l]!='\0'; l++);
return l;
}

void up_low(char&ch)
{
if(ch>='a' && ch<='z')
ch-=32;
else
if(ch>='A' && ch<='Z')
ch+=32;
cout<<ch;
}


void main()
{
clrscr();
char string[50];
cout<<"Enter a string: ";
gets(string);
int l=stringlength(string);
cout<<"The length of the string is: "<<l ;
cout<<endl<<endl;
cout<<"The new string is: ";
for(int i=0; i<=l;i++)
up_low(string[i]);

getch();
}

/*


Output:

Enter a string: RaHul
The length of the string is: 5

The new string is: rAhUL 

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
