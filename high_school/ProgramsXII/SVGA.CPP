#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/* function prototypes */
int huge detectSVGA256(void)
{
	int driver, mode;
	detectgraph(&driver, &mode);
	if (driver == VGA)
	return  4 ;
	else
	return grError;
}



int main(void)
{
   int gdriver, gmode;

   /* install a user written device driver */
   gdriver = installuserdriver("svga256", detectSVGA256);

   /* must force use of detection routine */
   gdriver = DETECT;

   /* check for any installation errors */
    /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "d:\\prog\\project\\");
   int y1=getmaxy();
   int x=getmaxx();

   struct palettetype pal;
float i, ht, y, xmax;
   getpalette(&pal);
   /* check for any initialization errors */
       /* draw a line */
    for (i=0; i<pal.size; i++)
   setrgbpalette(pal.colors[i], i*4, i*4, i*4);
   setcolor(9);
   line(0, 0, getmaxx(), getmaxy());
    ht = getmaxy() / 255;
xmax = getmaxx();
y = 0;
for (i=0; i<256; i++)
{
   static int t[]={0,0,0,50,50,50,50,0,};
   setfillstyle(SOLID_FILL, i);
   setcolor(0);
   fillpoly(4,t);
   char cnum[10];
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   setcolor(0);
   itoa(i,cnum,10);
   outtextxy(t[0],t[1],cnum);
   for(int i=0;i<8;i+=2)
   t[i]+=50;
   //bar(0, y, xmax, y+ht);
   y += ht;
   if(t[4]>getmaxx())
   {for(int i=0;i<8;i+=2)
   t[i+1]+=50;
   for(i=0;i<4;i+=2)
   t[i]=0;
   for(i=4;i<8;i+=2)
   t[i]=50;}
//   getch();

}    setcolor(59);
   //line(0, 0, getmaxx(), getmaxy());
    //circle(0,0,500);
    printf("%i%i",x+1,y1+1);
    //printf(" hello %i",getpalettesize());
   /* clean up */
    getch();
   closegraph();
   return 0;
}
