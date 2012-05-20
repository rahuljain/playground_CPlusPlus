#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>

class movie
{
char name_m[10], dat_rel[10], name_d[10];
float total;

public:
void create();
void display1();
int display2(char mov[10], int &flag);
int update(char mov[10], int &flag);

};

void movie::create()
{
cout<<"\nEnter the name of the movie: ";
gets(name_m);
cout<<"\nDate of release? ";
gets(dat_rel);
cout<<"\nName of the director? ";
gets(name_d);
cout<<"\nTotal collection? ";
cin>>total;
}

void movie::display1()
{
cout<<"\nMovie: "<<name_m<<"\nDate of release: "<<dat_rel<<"\nDirector: "<<name_d<<"\nTotal collection: "<<total<<endl;
}

int movie::display2(char mov[10], int &flag)
{
if(strcmp(mov,name_m)==0)
flag=1;

if(flag==1)
{
display1();
}

else;

return flag;

}

int movie::update(char mov[10], int &flag)
{
if(strcmp(mov,name_m)==0)
flag=1;

if(flag==1)
{
float tot;
cout<<"Total collection this week? ";
cin>>tot;
total+=tot;
}

else;

return flag;
}

void main()
{
clrscr();
movie obj[10];
int i=0;

int ans;
   do
    {
	cout<<"\n1.Enter the details of a movie. \n2.Display the details of all the  movies. \n3.Display the details of a movie. \n4.Update the total collection. \n5.Exit"<<endl;
	cout<<"Enter your option: ";
	cin>>ans;

	switch(ans)
	    {
		case 1:
		{
		obj[i].create();
			i++;
		break;
		}

		case 2:
		{
		  for(int j=0; j<i; j++)
		    obj[j].display1();
		  break;
		}

		case 3:
		{
		 int k=0, flag=0;
		 char mov[10];
		 cout<<"Enter the name of the movie whose details you want to know: ";
		 gets(mov);

		 while(flag==0)
		     {
			 k++;
			 obj[k].display2(mov, flag);
		     }
		 break;
		}

		case 4:
		{
		   int k=0,flag=0;
		   char mov[10];
		   cout<<"Enter the name of the movie whose data you wanna update: ";
		   gets(mov);
		   while(flag==0)
		   {
		   k++;
		   obj[k].update(mov, flag);
		   }
		   break;
		}

		case 5:exit(0);
	    }

    }while(ans!=4);

}