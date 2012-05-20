#include<dos.h>
#include<math.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
void putbox(int x,int y,int col);
void main()
{
 int a=DETECT,b,x=0;float y;
 initgraph(&a,&b,"c:\\tc\\bgi\\");
 int i=1;
 while(!kbhit())
 {
  i++;
  setcolor(i);
  for(;x<640;x++)
 {
  y=cos(8*x*3.141519/180);
  putbox(620-y*10,x,i++);
  putbox(x,460-y*10,i++);
  putbox(20+y*10,x,i++);
  putbox(x,20+y*10,i++);
 }

 }
}
void putbox(int x,int y,int col)
{
 for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
   putpixel(x+i,y+j,col);
}