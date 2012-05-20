/* This program reads a song and stores it in a text file and the removes the
spaces between the words.
Program developed by Rahul Jain. */

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
 clrscr();
 fstream file;
 char ch, c;
 cout<<"ENTER SONG :\n";

 file.open("text.txt",ios::out);
 ch=getche();
 while(ch!=13)
     {
	  file<<ch;
	  ch=getche();
     }
 file<<'*';          	// * is now the last character.
 file.close();

 cout<<"\n\nORIGINAL SONG:\n";
 file.open("text.txt",ios::in);
 file.get(ch);
 while(file)
    {
	  if (ch=='*')
	    break;
	  cout<<ch;
	  file.get(ch);
    }
 file.close();

 int point;
 file.open("text.txt",ios::in|ios::out);
 file.get(ch);
 while(file)
    {
	  if(ch==32)
	    {
	      point=file.tellg();
	      while(file)
		 {
		     file.get(c);
		     file.seekp(-2,ios::cur);
		     file<<c;
		     file.seekg(1,ios::cur);
		 }
	      file.close();
	      file.open("text.txt",ios::in|ios::out);
	      file.seekp(point);
	    }
	  file.get(ch);
    }
 file.close();

 cout<<"\nNEW FILE:\n";
 file.open("text.txt",ios::in);
 file.get(ch);
 while(file)
    {
	if(ch=='*')
	  break;
	cout<<ch;
	file.get(ch);
    }
 file.close();
 getch();
}


/*
Output:

ENTER SONG :
nana munna raahi hoo desh ka sipahi hoo bolo mere sang jai hind jai hind.

ORIGNAL SONG:
nana munna raahi hoo desh ka sipahi hoo bolo mere sang jai hind jai hind.
NEW FILE:
nanamunnaraahihoodeshkasipahihoobolomeresangjaihindjaihind.
*/






                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
