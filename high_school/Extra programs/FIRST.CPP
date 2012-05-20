/*THIS PROGRAM FINDS THE AREA OF A TRIANGLE USING HERO'S FORMULA
  PROGRAM DEVELOPED BY ANKIT JAIN.......*/

# include<iostream.h>//FOR GENERAL INPUT OUTPUT FUNCTIONS.
# include<math.h> //FOR FINDING SQUARE ROOT.

void main()
{
 float a,b,c,AREA;
 cout<<"\nENTER FIRST SIDE (in cms.)\a\n";
 cin>>a;
 cout<<"ENTER SECOND SIDE (in cms.)\a\n";
 cin>>b;
 cout<<"ENTER THIRD SIDE (in cms.)\a\n";
 cin>>c;
 float s = (a+b+c)/2;
 AREA=sqrt(s*(s-a)*(s-b)*(s-c));
 cout<<"\aAREA OF TRIANGLE IS "<<AREA<<"cc\a";
 cout<<"HOPE YOU ENJOYED IT";
}