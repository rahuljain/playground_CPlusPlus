#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
cout<<"Entr the str: ";
char string[50], chara,a,b;
gets(string);
cout<<"Entr the char to be changed: ";
cin>>chara;
if(chara>='A'&&chara<='Z')
{b=chara;
a=chara+32;
}

else

if(chara>='a'&&chara<='z')
{
a=chara;
b=chara-32;
}

for(int i=0; string[i]!='\0'; i++)
{
	if(string[i]==b)
		string[i]+=32;

	     else

	if(string[i]==a)
		  string[i]-=32;

}

int l=strlen(string);
for(int j=0; j<l;j++)
cout<<string[j];

getch();
}