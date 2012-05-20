#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void ladd(int,int,int);
void snake(int,int,int,int);
void main()
{
 int c=DETECT,b;
 initgraph(&c,&b,"C:\\tc\\bgi");
 setbkcolor(LIGHTGREEN);
 setlinestyle(0,0,3);
 setcolor(RED);
 settextjustify(1,1);
// settextstyle(0,0,1);
 for(int i=0;i<=480;i+=48)
  line(0,i,479,i);
 line(0,479,479,479);
 for(i=0;i<=480;i+=48)
  line(i,0,i,479);
 int k=1;int a=9;
 char h[3];
 setfillstyle(1,LIGHTBLUE);
 floodfill(639,479,RED);
 setcolor(BROWN);
 setlinestyle(0,0,3);
 ladd(110,452,412);
 ladd(350,452,364);
 ladd(206,404,316);
 ladd(398,308,268);
 ladd(110,260,220);
 ladd(254,260,172);
 ladd(206,164,28);
 ladd(350,164,124);
 ladd(62,116,76);
 snake(168, 374, 264, 447);
 snake(360, 278, 312, 399);
 snake(168, 230, 72, 351);
 snake(408,182,312,255);
 snake(120, 86, 168, 288+15);
 snake(240+24, 38, 360, 111);
 setcolor(RED);
 settextstyle(4,0,3);
 while(a>0)
 {
  for(i=0;i<10;i++)
	{
	 sprintf(h,"%d",k++);
	 outtextxy(i*48+24,a*48+24,h);
	}
  a--;
  for(i=9;i>=0;i--)
	{
	 sprintf(h,"%d",k++);
	 outtextxy(i*48+24,a*48+24,h);
	}
  a--;
 }
 getch();
}
void ladd(int x,int y1,int y2)
{
 line(x,y1,x,y2);
 line(x+20,y1,x+20,y2);
 for(int i=y1-5;i>=y2+2;i-=5)
  line(x,i,x+20,i);
}
void snake(int x1,int y1,int x2,int y2)
{
setlinestyle(3,0,3);
setcolor(8);
line(x1,y1,x2,y2);
//setcolor(8);
setfillstyle(1,8);
fillellipse(x1,y1,4,4);
for(int i=0;i<5;i++)
for(int j=0;j<5;j++)
putpixel(x2+i,y2+j,8);
}