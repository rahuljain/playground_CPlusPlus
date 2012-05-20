// THIS PROGRAM FINDS THE NUMBER OF SPACES IN A GIVEN STRING ENTERED BY THE
// USER.
// PROGRAM DEVELOPED BY ANKIT.
# include<iostream.h>
# include<conio.h>
# include<stdio.h>
void main()
{
   clrscr();
   char string[20];
   cout<<"Please enter a string:";
   gets(string);
   int space=0;
   for(int i=0;string[i]!='\0';i++)
   if (string[i]==' ')
   space++;
   cout<<"No. of spaces are:"<<space;
   getch();
}
