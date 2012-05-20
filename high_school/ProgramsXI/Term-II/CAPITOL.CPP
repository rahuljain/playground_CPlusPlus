// Capital & country.Program developed by Ankit Jain.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<ctype.h>
struct tab
{
 char coun[20];
 char cap[20];
};
tab list[10]={ "INDIA","NEW DELHI",
		"SRI LANKA","COLOMBO",
		"BANGLADESH","DHAKA",
		"BRAZIL","BRASILIA",
		"NEPAL","KATHMANDU",
		"ENGLAND","LONDON",
		"ZIMBABWE","HARARE",
		"NEW ZEALAND","WELLINGTON",
		"FRANCE","PARIS",
		"USA","WASHINGTON DC",
	     };
void main()
{
 int n,flag=0;
 char string[20];
 clrscr();
 cout<<"What do you want?\n1.Capital of a country.\n2.Name of a country\n";
 cout<<"Enter choice:";
 cin>>n;
 switch(n)
 {
  case 1:cout<<"Enter name of country:";
			break;
  case 2:cout<<"Enter name of capital:";
			break;
  default:cout<<"Wrong choice.";
			 getch();
			 exit(0);
			 break;
 }
 gets(string);
 for(int i=0;i<strlen(string);i++)
  string[i]=toupper(string[i]);
 for(i=0;i<10;i++)
  if (n==1)
   if (strcmp(string,list[i].coun)==0)
    {
     cout<<"Capital is "<<list[i].cap;
     flag=1;
    }
   else;
  else
   if (strcmp(string,list[i].cap)==0)
    {
     cout<<"Country is "<<list[i].coun;
     flag=1;
    }

 if(flag==0)
 cout<<"Name of capital or country does not exist";
 getch();
}

/*
Output:
What do you want?
1.Capital of a country.
2.Name of a country
Enter choice:1
Enter name of country:india
Capital is NEW DELHI

What do you want?
1.Capital of a country.
2.Name of a country
Enter choice:2
Enter name of capital:LoNDoN
Country is ENGLAND

What do you want?
1.Capital of a country.
2.Name of a country
Enter choice:1
Enter name of country:Agra
Name of capital or country does not exist
*/