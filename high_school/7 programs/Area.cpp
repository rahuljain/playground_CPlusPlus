/*THIS PROGRAM FINDS THE AREA OF A TRIANGLE USING HERO'S FORMULA
  PROGRAM DEVELOPED BY ANKIT JAIN.
*/

# include<iostream.h>
# include<math.h>
# include<conio.h>

void main()

{
 clrscr();
 float a,b,c,d,AREA;
 cout<<"ENTER FIRST SIDE (in cms.):";
 cin>>a;
 cout<<"ENTER SECOND SIDE (in cms.):";
 cin>>b;
 cout<<"ENTER THIRD SIDE (in cms.):";
 cin>>c;
 float s = (a+b+c)/2;
 d=s*(s-a)*(s-b)*(s-c);

 if (d>=0)
  cout<<"AREA OF TRIANGLE IS "<<sqrt(d)<<"cc\n";

 else
  cout<<"TRIANGLE NOT POSSIBLE\n";

 getch();
}

/*
OUTPUT:
ENTER FIRST SIDE (in cms.):10
ENTER SECOND SIDE (in cms.):2
ENTER THIRD SIDE (in cms.):9
AREA OF TRIANGLE IS 8.181534cc
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
