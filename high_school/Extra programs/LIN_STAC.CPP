/*
Programme written by :-
Rishabh Mehta
XII-D		2003-04

For linked implementation of stacks.
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>

struct stack
{
 int no;
 stack*next;
};

class St
{
 stack*top;

 public:
 St()	{ top=NULL; }

 void push();
 void pop();
 void display();
 ~St();
};

void main()
{
 clrscr();

 St s;
 char ch,ch2;

 do
 {
  clrscr();
  cout<<"1.......Push\n";
  cout<<"2.......Pop\n";
  cout<<"3.......Display\n";
  cout<<"4..                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                U��M V3�W;�th9utc�U;�t\�E�:��  �R��  �U��  �t�U;�t3�
  ��   ��u������   ��P�   �u��"Tw����W �_^]� U��j�h�7Twh 2Uwd�    Pd�%    QQ��x  SVW�e胥���� ������ ǅ����@ ��E�   ǅ����  �E����p���P��!Tw��u
�W ��;  ������Q������QP�5������  ������P�� Tw�؉���������  h�7TwS�5,!Tw�։�������uh|7TwS�։�����hl7TwS�֋�h\7TwS�֋؅�t	������ u3hH7Tw�������֋�h<7Tw�������։�����3��E�   ���w  ���o  j ������PhP0Twj�׃���  f��������f��������f��������f��������f��������3�f�������}�h  ������P��p����t"Tw�}Љ}�}�;�tAj��6Tw�����3����IQVh�6Tw��������j�����3����IQVh�6Tw��������3��������E�P������PW�������E�;�tj��6TwV�`!Tw@PVh�6Tw��������9}���   9}���   �M��f�}�s%�u��� TwP�u���2  ����u<�u��� Tw�1��jY�uЋ��M�C  �������u��� Tw�e� �u������