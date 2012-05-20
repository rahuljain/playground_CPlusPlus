/* THIS PROGRAM FINDS THE NUMBER OF VOWELS IN A GIVEN STRING WHICH HAS
   BEEN ENTERED BY THE USER.
   PROGRAM DEVELOPED BY ANKIT JAIN.
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 char string[200];
 cout<<"PLEASE TYPE IN A STRING,AND"
 <<" I WILL THEN COUNT THE NUMBER OF VOWELS IN IT:"<<endl;
 gets(string);
 int a=0,e=0,i=0,o=0,u=0;
 for (int j=0 ; string[j]!='\0' ;j++)
  switch (string[j])
    {
      case 'a':
      case 'A': a++;
		break;
      case 'e':
      case 'E': e++;
		break;
      case 'i':
      case 'I': i++;
		break;
      case 'o':
      case 'O': o++;
		break;
      case 'u':
      case 'U': u++;
		break;
     }

  cout<<endl<<"THE NO. OF A's ARE:"<<a;
  cout<<endl<<"THE NO. OF E's ARE:"<<e;
  cout<<endl<<"THE NO. OF I's ARE:"<<i;
  cout<<endl<<"THE NO. OF O's ARE:"<<o;
  cout<<endl<<"THE NO. OF U's ARE:"<<u;
  getch();

}
