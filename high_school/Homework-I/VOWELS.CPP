#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char string[50];
int a=0,e=0,i=0,o=0,u=0;
cout<<"Enter a string :"<<"\n";
gets(string);

 for (int n=0;string[n]!='\0';n++)
    {
	switch(string[n])
	{
	  case 'a':
	  case 'A':a++;
	  break;

	  case 'e':
	  case 'E':e++;
	  break;

	  case 'i':
	  case 'I':i++;
	  break;

	  case 'o':
	  case 'O':o++;
	  break;

	  case 'u':
	  case 'U':u++;
	  break;
	}
    }

cout<<"No. of 'a': "<<a<<endl;
cout<<"No. of 'e': "<<e<<endl;
cout<<"No. of 'i': "<<i<<endl;
cout<<"No. of 'o': "<<o<<endl;
cout<<"No. of 'u': "<<u<<endl;
getch();
}






