/* THIS PROGRAM PLAYS A SIMPLE GAME.
   MADE BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
void main()
{
    clrscr();
    char ans,name[25];
    cout<<"PLEASE ENTER YOUR NAME ";
    gets(name);
  x:cout<<"FILL IN THE MISSING LETTER :";
    cout<<endl<<"M O _ S E"<<endl;
    cin>>ans;
    switch(ans)
    {
     case 'o':
     case 'O':
     case 'u':
     case 'U': {
		cout<<"CORRECT ANSWER"<<". YOU ARE A GENIUS "<<name;
		getch();
		break;
	       }
     default : {
		cout<<"WRONG ANSWER, TRY AGAIN "<<name<<endl;
		goto x;
	       }
    }
}
