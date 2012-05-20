#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#incude<process.h>

struct record
{
  int sm_code, prod_code;
  float amt;
  char name[10], loc[10];
};

char fname[10];
fstream f;

void create()
{
 f.open(fname, ios::out);
 f.close();
 cout<<"File named "<<fname<<" created!!!";

 getch();
}

void append()
{


void main()
{
clrscr();

getch();
}