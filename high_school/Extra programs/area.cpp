/*THIS PROGRAM FINDS THE AREA OF A TRIANGLE USING HERO'S FORMULA
  PROGRAM DEVELOPED BY ANKIT JAIN.......*/

# include<iostream.h>//FOR GENERAL INPUT OUTPUT FUNCTIONS.
# include<math.h> //FOR FINDING SQUARE ROOT.
#include <conio.h>

void main()
{ clrscr();
 float a,b,c,AREA;
 cout<<"\nENTER FIRST SIDE (in cms.)\a\n";
 cin>>a;
 cout<<"ENTER SECOND SIDE (in cms.)\a\n";
 cin>>b;
 cout<<"ENTER THIRD SIDE (in cms.)\a\n";
 cin>>c;
 float s = (a+b+c)/2;
 float dis = s*(s-a)*(s-b)*(s-c);
 if (dis> 0)  {
		AREA=sqrt(dis);
		cout<<"\aAREA OF TRIANGLE IS "<<AREA<<"cc\a";
		cout<<"HOPE YOU ENJOYED IT";
	      }
 else cout<<"Triangle not possible";
getch();
}