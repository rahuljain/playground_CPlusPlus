#include "stk.h"

Stack::Stack()
{
	curr_index = 0;
}

string Stack::pop()
{
	//cout<<"Popping "<<stk[curr_index-1]<<endl;
	return stk[--curr_index];
}

void Stack::push(string a)
{
	//cout<<"Pushing element "<<a<<endl;
	stk[curr_index++] = a;
}

string Stack::getTopElement()
{
	return stk[curr_index-1];
}
