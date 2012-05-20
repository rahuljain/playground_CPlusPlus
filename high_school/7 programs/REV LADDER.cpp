/* THIS PROGRAM REVERSE A STRING AND PRINTS IT IN THE FORM OF A LADDER
   PROGRAM DEVELOPED BY ANKIT JAIN. */

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()

{

 clrscr();
 char string[200];
 cout<<"Please enter a string: ";
 gets(string);
 for(int length = 0 ; string[length] != '\0' ; length++);
  for(int i=length-1;i>=0;i--)
   {
     for(int j=length-1;j>=i;j--)
     cout<<string[j];
    cout<<endl;
   }
 getch();

}
/*
 OUTPUT:
 Please enter a string: Jagriti
 i
 it
 iti
 itir
 itirg
 itirga
 itirgaJ
*/