#ifndef _STK_H_
#define _STK_H_

#include <iostream>
#include <string>

using namespace std;

class Stack
{
	protected:
		string stk[20];
		int curr_index;

	public:
		Stack();
		void push(string);
		string pop();
		string getTopElement();
};

#endif /* _STK_H_ */

