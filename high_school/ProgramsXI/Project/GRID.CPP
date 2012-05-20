#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void main()
{
 int c=DETECT,b;
 initgraph(&c,&b,"C:\\tc\\bgi");
 setbkcolor(LIGHTGREEN);
 setcolor(RED);
 settextjustify(1,1);
 settextstyle(0,0,1);
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
 line(110,452,110,412);
 line(130,452,130,412);
 line(350,452,350,412-48);
 line(370,452,370,412-48);



 setcolor(RED);
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
