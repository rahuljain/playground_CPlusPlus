#include<dos.h>
#include<math.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void putbox(int x,int y);
void main()
{
 int a=DETECT,b,x=0;float y;
 initgraph(&a,&b,"c:\\tc\\bgi\\");
 for(;x<640;x++)
 {
  y=cos(8*x*3.141519/180);
  putbox(x,460-y*10);
  putbox(x,20+y*10);
  delay(5);
 }
 settextjustify(1,1);
 settextstyle(3, HORIZ_DIR, 5);
 setcolor(YELLOW);
 outtextxy(320,240,"ANKIT JAIN");
 getch();
}
void putbox(int x,int y)
{
 for(int i=0;i<10;i++)
  for(int j=0;j<10;j++)
   putpixel(x+i,y+j,RED);
}