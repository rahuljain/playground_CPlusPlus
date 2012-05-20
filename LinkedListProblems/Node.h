#include <iostream>

class Node
{
	private:
		int val;
		Node* next;
		Node* prev;

	public:
		Node(int value, Node* next=NULL, Node* prev=NULL);
}
