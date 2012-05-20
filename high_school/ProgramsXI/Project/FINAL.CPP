#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<fstream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
struct table
{
 char name[20];
 int moves;
}high[11];
void diceshow(int);
void title();
void grid();
void ladd(int,int,int);
void showcounter(int,int,int);
void snake(int,int,int,int);
void *box[4];
int mat[10][10],player[4]={0},n,victory=0,moves[4]={0},flag[4]={0},temp[4][2];
int col[4];
int snl[17][2]={  3,18,
		  8,28,
		 15,36,
		 32,49,
		 43,58,
		 46,66,
		 68,73,
		 65,96,
		 79,82,
		 24, 6,
		 48,14,
		 57,22,
		 69,47,
		 83,37,
		 95,73,
		 99,62,
		 75,45 };
char pini[4][2],pname[4][20];

void main()
{
 title();
 int k=1,a=9;
 clrscr();

 while(a>=0)
 {
  for(int i=0;i<10;i++)
	mat[a][i]=k++;
  a--;
  for(i=9;i>=0;i--)
	mat[a][i]=k++;
  a--;
 }
 a=DETECT;
 initgraph(&a,&k,"D:\\TC\\BGI");
 setbkcolor(BROWN);
 setcolor(RED);
 cout<<"How many players do you want (2-4) :";
 cin>>n;

 if (n<2||n>4)
  {
	cout<<"Error";
	getch();
	exit(0);
  }

 for(k=0;k<n;k++)
 {
  cout<<"Player "<<k+1<<" Enter initial :";
  cin>>pini[k][0];
  pini[k][1]='\0';
  cout<<"Player "<<k+1<<" Enter name :";
  gets(pname[k]);
  cout<<"What colour do you want "<<pname[k]<<"\n1.BLUE\n2.GREEN\n3.YELLOW\
  \n4.MAGENTA\n5.LIGHT MAGENTA\n6.LIGHT GRAY\n7.DARK GRAY\n8.WHITE\
  \n9.LIGHT RED\n10.LIGHT BLUE\n" ;
  cin>>col[k];
  switch(col[k])
  {
  case 3:col[k]=14;
  break;
  case 4: col[k]=5;
  break;
  case 5: col[k]=13;
  break;
  case 6:col[k]=7;
  break;
  case 7:col[k]=8;
  break;
  case 8:col[k]=15;
  break;
  case 9:col[k]=12;
  break;
  case 10:col[k]=9;
  break;
 }
}
 clrscr();
 for(int e=0;e<4;e++)
 box[e]=malloc(imagesize(0,0,48,48));
 grid();
 while (victory==0)

  for(int i=0;i<n;i++)
  {

      for(int  j=0;j<n;j++)
    if (flag[j]==1)
   putimage(temp[j][0]*48,temp[j][1]*48,box[j],0);

   for(j=0;j<n;j++)
    flag[j]=0;
   for(j=0;j<n;j++)
    for(int y=0;y<10;y++)
     for(int x=0;x<10;x++)
      if (mat[y][x]==player[j])
       {
	temp[j][0]=x;
	temp[j][1]=y;
	getimage(x*48,y*48,x*48+48,y*48+48,box[j]);
	flag[j]=1;
	showcounter(x,y,j);
       }
	char p=getch();
	 if(p=='q'||p=='Q')
	  exit(0);
	setfillstyle(1,LIGHTMAGENTA);
	bar(481,0,639,240);

	char g[40];
	settextjustify(1,1);
	settextstyle(2,0,5);
	sprintf(g,"%s :Your chance",pname[i]);
	setcolor(BLACK);
	outtextxy(560,20,g);
	randomize();
	int dice=rand()%6+1;
	while(!kbhit())
	for(int z=1;z<7;z++)
	{
	 diceshow(z);
	 delay(50);
	}
	p=getch();
	 if(p=='q'||p=='Q')
	  exit(0);
	diceshow(dice);
	moves[i]++;
	settextjustify(1,1);
	settextstyle(2,0,5);
	for(j=0;j<n;j++)
	{
	 sprintf(g,"%s Your Moves: %d",pname[j],moves[j]);
	 outtextxy(560, 100+j*10,g);
	}

	if (player[i]+dice>100) continue;
	player[i]+=dice;

	for(k=1;k<n;k++)
	 for(j=0;j<n;j++)
	  if (player[i]==player[j]&&i!=j)
		player[i]++;

	for(j=0;j<17;j++)
	{
	 if(player[i]==snl[j][0])
	  player[i]=snl[j][1];
	}

	for(k=1;k<n;k++)
	 for(j=0;j<n;j++)
	  if (player[i]==player[j]&&i!=j)
		player[i]++;

	for(j=0;j<17;j++)
	{
	 if(player[i]==snl[j][0])
	  player[i]=snl[j][1];
	}

	if(player[i]==100)
	 {
	  victory=i+1;
	  break;
	 }

  }
 cleardevice();
 setbkcolor(col[victory-1]);
 setcolor(RED);
 rectangle(24,24,616,456);
 setfillpattern(0,RED);
 floodfill(0,0,RED);
 settextjustify(1,1);
 char g[40];
 sprintf(g,"%s WINS !!! CONGRATULATIONS.",pname[victory-1]);
 settextstyle(3,0,3);
 outtextxy(310,239,g);
 getch();
 fstream file;
 for(i=0;i<10;i++)
 if (moves[victory-1]<=high[i].moves) break;
 for(k=9;k>=i;k--)
 high[k+1]=high[k];
 high[k+1].moves=moves[victory-1];
 strcpy(high[k+1].name,pname[victory-1]);
 file.open("D:\\tc\\score.txt",ios::out | ios::binary);
 for(i=0;i<10;i++)
 file.write((char*)&high[i],sizeof(table));
 file.close();
 setfillstyle(1,col[victory-1]);
 bar(24,24,616,456);
 file.open("D:\\tc\\score.txt",ios::in | ios::binary);
 for(i=0;i<10;i++)
 file.read((char*)&high[i],sizeof(table));
 file.close();
 outtextxy(320, 50,"HALL OF FAME");
 settextjustify(1,1);
 for(i=0;i<10;i++)
 {
  sprintf(g,"%d %s",high[i].moves,high[i].name);
  outtextxy(320,150+i*20,g);
 }
}

void grid()
{
 setfillstyle(1,LIGHTGREEN);
 floodfill(0,0,15);
 setlinestyle(0,0,3);
 setcolor(RED);
 settextjustify(1,1);
 for(int i=0;i<=480;i+=48)
  line(0,i,479,i);
 line(0,479,479,479);
 for(i=0;i<=480;i+=48)
  line(i,0,i,479);
 int k=1;int a=9;
 char h[3];
 setfillstyle(1,LIGHTMAGENTA);
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
 snake(120, 86, 168, 303);
 snake(264, 38, 360, 111);
 snake(72, 38, 72,159);
 snake(264, 134, 216, 255);
 setcolor(RED);
 settextstyle(4,0,1);

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

 fstream file;
 file.open("D:\\tc\\score.txt",ios::in | ios::binary);
 for(i=0;i<10;i++)
 file.read((char*)&high[i],sizeof(table));
 file.close();
 char r[30];
 settextjustify(1,1);
 settextstyle(2,0,5);
 outtextxy(560,280,"Moves   Name");
 for(i=0;i<10;i++)
 {
  sprintf(r,"%d %s",high[i].moves,high[i].name);
  outtextxy(560,300+i*10,r);
 }
 outtextxy(560,470,"Press Q to Quit");
}
void ladd(int x,int y1,int y2)
{
 line(x,y1,x,y2);
 line(x+20,y1,x+20,y2);
 for(int i=y1-5;i>=y2+2;i-=10)
  line(x,i,x+20,i);
}

void snake(int x1,int y1,int x2,int y2)
{
setlinestyle(3,0,3);
setcolor(GREEN);
line(x1,y1,x2,y2);
setfillstyle(1,GREEN);
fillellipse(x1,y1,4,4);
for(int i=-2;i<3;i++)
for(int j=-2;j<3;j++)
putpixel(x2+i,y2+j,GREEN);
}

void showcounter(int x,int y,int i)
{
 setlinestyle(0,0,1);
 setfillstyle(1,col[i]);
 fillellipse(x*48+24,y*48+24,20,20);
 settextstyle(3,0,2);
 settextjustify(1,1);
 setcolor(RED);
 outtextxy(x*48+24,y*48+24,pini[i]);
}
void title()
{
 int a=DETECT,b;
 initgraph(&a,&b,"d:\\tc\\bgi");
 setcolor(BROWN);
 setlinestyle(0,0,3);
 line(60,190,580,190);
 line(60,210,580,210);
 for (int i=70;i<580;i+=20)
 line(i,190,i,210);
 setlinestyle(0,0,1);
 setcolor(RED);
 settextjustify(1,1);
 settextstyle(1,0,3);
 outtextxy(320,400,"PRESS ANY KEY TO CONTINUE");
 while(!kbhit())
 {
  for(i=1;i<15;i++)
	{
	 if (i<=7) sound(200*i);
	 else sound(200*(15-i));
	 setfillpattern(0,i);
	 setcolor(i);
	 rectangle(24,24,616,456);
	 floodfill(0,0,i);
	 settextjustify(1,1);
	 settextstyle(9,0,4);
	 outtextxy(320,150,"SNAKES & LADDERS");
	 settextstyle(1,0,2);
	 settextjustify(0,1);
	 outtextxy(250,250,"Made by:-Ankit Jain & Rahul Jain");
	 delay(20);
	 nosound();
	}
  }
 graphdefaults();
 closegraph();
 getch();
}

void diceshow(int dice)
{
 graphdefaults();
 setcolor(WHITE);
 bar(585-50,90-50,585,90);
 setfillstyle(1,BLACK);
 setcolor(BLACK);

switch(dice)
{
 case 1:
 fillellipse(585-25,90-25,4,4);
 break;

 case 2:
 fillellipse(585-36,90-36,4,4);
 fillellipse(585-14,90-14,4,4);
 break;

 case 3:
 fillellipse(585-40, 90-40, 4, 4);
 fillellipse(585-25, 90-25, 4, 4);
 fillellipse(585-10, 90-10, 4, 4);
 break;

 case 4:
 fillellipse(585-36,90-36,4,4);
 fillellipse(585-36,90-14,4,4);
 fillellipse(585-14,90-14,4,4);
 fillellipse(585-14,90-36,4,4);
 break;

 case 5:
 fillellipse(585-40, 90-10, 4, 4);
 fillellipse(585-10, 90-40, 4, 4);
 fillellipse(585-40, 90-40, 4, 4);
 fillellipse(585-25, 90-25, 4, 4);
 fillellipse(585-10, 90-10, 4, 4);
 break;

 case 6:
 fillellipse(585-10 ,90-10 ,4,4);
 fillellipse(585-10 ,90-25 ,4,4);
 fillellipse(585-10 ,90-40 ,4,4);
 fillellipse(585-40 ,90-10 ,4,4);
 fillellipse(585-40 ,90-25 ,4,4);
 fillellipse(585-40 ,90-40 ,4,4);
}
}