//23. TEXT file.
//Program created by Rahul Jain.  XII D

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
clrscr();
fstream f;
char ch, c, rem;
cout<<"Enter any text : "<<endl;
f.open("text.txt", ios::out);
ch=getche();

while(ch!=13)             //13=NULL
  {
     f<<ch;
     ch=getche();
  }
f<<"*";			   // '*' is now the last character.
f.close();

cout<<"\n\nOriginal Text: \n";
f.open("text.txt", ios::in);
f.get(ch);
while(f)
{
if(ch=='*')
     break;
cout<<ch;
f.get(ch);
}
f.close();


cout<<"\n\nEnter the character you want to remove: ";
cin>>rem;

int point;
f.open("text.txt", ios::in|ios::out);
f.get(ch);
while(f)
{
 if(ch==rem)
   {
	point=f.tellg();
	while(f)
	  {
	     f.get(c);
	     f.seekp(-2, ios::cur);
	     f<<c;
	     f.seekg(1,ios::cur);
	  }
	f.close();
	f.open("text.txt", ios::in|ios::out);
	f.seekp(point);
   }
   f.get(ch);
 }
 f.close();

 cout<<"\nNew File: \n";
 f.open("text.txt", ios::in);
 f.get(ch);
 while(f)
 {
  if(ch=='*')
    break;
  cout<<ch;
  f.get(ch);
  }
  f.close();
  getch();
}