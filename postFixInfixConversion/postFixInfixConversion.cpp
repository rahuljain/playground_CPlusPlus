#include <iostream>
#include "stk.h"

using namespace std;

void pfixToInfix(string pfix)
{
	Stack stack;
	string temp;
	for(int i = 0 ; i<pfix.length(); i++)
	{
		switch(pfix[i]) {
			case ' ': break;
			case '+': stack.push(stack.pop()+'+'+stack.pop());
					  break;
			case '-': stack.push(stack.pop()+'-'+stack.pop());
					  break;
			case '*': stack.push(stack.pop()+'*'+stack.pop());
					  break;
			case '/': stack.push(stack.pop()+'/'+stack.pop());
					  break;
			default: stack.push(pfix.substr(i,1));
		}
	}
	cout<<"Infix expression is: "<<stack.pop()<<endl;
}

int main(int argc, char** argv)
{
	string pfix;
	cout<<"Enter the postfix expression: ";
	getline(cin, pfix);
	cout<<"The postfix expression that you entered is: "<<pfix<<endl;
	
	pfixToInfix(pfix);
	return 0;
}

