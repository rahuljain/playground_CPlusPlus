#include <Node.h>

Node::Node(int value, Node* next = NULL, Node* prev = NULL)
{
	this->val = value;
	this->next = next;
	this->prev = prev;
}
