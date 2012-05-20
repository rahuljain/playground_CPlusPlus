#include<stdio.h>
#include<conio.h>
#include<graphics.h>
char pname[9][20];
void main()
{
 int a=DETECT,b;
 initgraph(&a,&b,"C:\\TC\\BGI");
 settextstyle(1,0,3);
 settextjustify(0,1);
 setcolor(RED);
 outtextxy(75,240,"ENTER NUMBER OF PLAYERS:");
 char p[2];
 p[0]=getch();
 p[1]='\0';
 int n=p[0]-48;
 outtextxy(360+55,240,p);
 getch();
 for(int i=0;i<n;i++)
 {
  cleardevice();
  char temp[40];
  sprintf(temp,"PLAYER %d: ENTER YOUR INITIAL:",i+1);
  outtextxy(75,210,temp);
  char t[2];
  t[0]=getch();
  t[1]='\0';
  outtextxy(450,210,t);
  outtextxy(75,240
  getch();
 }
}