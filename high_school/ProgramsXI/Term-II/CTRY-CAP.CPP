//This program gives the capital/country nameas desired by the user.
//Program created by Rahul Jain.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

struct name
{
 char cntry[20];
 char cptl[20];
};

name list[20]={"INDIA","NEW DELHI",
	       "PAKISTAN","ISLAMABAD",
	       "SRI LANKA","COLOMBO",
	       "USA","WASHINGTON D.C.",
	       "BRITAIN","LONDON",
	       "FRANCE","PARIS",
	       "AUSTRALIA","SYDNEY",
	       "ZIMBABWE","HARARE",
	       "BANGLADESH","DHAKA",
	       "NEPAL","KATHMANDU",
	       "CHINA","BEIJING",
	       "KOREA","SEOUL",
	       "GERMANY","BERLIN",
	       "OMAN","MUSCAT",
	       "RUSSIA","MOSCOW",
	       "IRAQ","BAGHDAD"
	       };


void main()
{
 int n,flag=0;
 char string[20];
 clrscr();
 cout<<"What do you want to know?"<<'\n'<<'\n'<<"1.Capital of a country? "<<'\n'<<"2.Name of a country? "<<'\n'<<'\n';
 cout<<"Enter the choice: ";
 cin>>n;
 cout<<endl<<"Please enter the names in CAPITAL LETTERS."<<endl;

 switch(n)
 {
  case 1:cout<<endl<<"Enter the name of country: ";
	 break;
  case 2:cout<<endl<<"Enter the name of capital: ";
	 break;
  default:cout<<endl<<"The choice entered doesn't exist.The program will be terminated.";

	  getch();

	  exit(0);
	  break;
 }

 gets(string);

 for(int i=0;i<16;i++)
  if (n==1)
	if (strcmp(string,list[i].cntry)==0)
	    {
	     cout<<"Capital is "<<list[i].cptl;
	     flag=1;
	    }
	else;

   else

	if (strcmp(string,list[i].cptl)==0)
	    {
	     cout<<"The Country is "<<list[i].cntry;
	     flag=1;
	    }

  if(flag==0)
  cout<<"Name of capital or country does not exist";

 getch();
}

/*

OUPUT:

What do you want to know?

1.Capital of a country?
2.Name of a country?

Enter the choice: 1

Please enter the names in CAPITAL LETTERS.

Enter the name of country: USA
Capital is WASHINGTON D.C.

*/