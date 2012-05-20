#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct book
{int st,cost;
 char tit[30],aut[30];
};
void main()
{ clrscr();
  book stock[100];
  int n;
  cout<<"enter the no of titles"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  { cout<<"enter the details of book no"<<i+1<<"(title,author,stock,cost)"<<endl;
  gets(stock[i].tit);
   gets(stock[i].aut);
   cin>>stock[i].st;
   cin>>stock[i].cost;
  }
  char ans='y';
  char tit[30],aut[30];
  int st;
  while(ans=='y')
  {cout<<"which book do you want?-enter title & author"<<endl;
   gets(tit);
   gets(aut);
   cout<<"enter no of copies wanted"<<endl;
   cin>>st;
   for(i=0;i<n;i++)
   {if(strcmp(tit,stock[i].tit)==0)
      {if(strcmp(aut,stock[i].aut)==0)
       {if(st<=stock[i].st){cout<<"the cost of the required copies is:  "<<st*stock[i].cost<<endl;}
	else{cout<<"these many copies not available"<<endl;}
	i=n+1;
       }
      }
   }
   if(i==n){cout<<"required book not available"<<endl;}
   cout<<"want to continue?"<<endl;
   cin>>ans;
  }
  getch();
 }

/* enter the no of titles
2
enter the details of book no1(title,author,stock,cost)
abc
adi
18
900
enter the details of book no2(title,author,stock,cost)
abd
adi
15
10
which book do you want?-enter title & author
abc
ans
enter no of copies wanted
13
the cost of the required copies is:  11700
want to continue?
n
*/