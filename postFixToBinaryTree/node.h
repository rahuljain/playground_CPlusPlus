#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>

using namespace std;

class Node
{
	public:
		char label;
		bool visited;
		Node* left;
		Node* right;

		Node();
		Node(char);
		void printNode();
};

#endif
