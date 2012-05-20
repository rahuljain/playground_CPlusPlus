#include "node.h"

Node::Node()
{
	visited = false;
	this->left = NULL;
	this->right = NULL;
}

Node::Node(char a)
{
	label = a;
	visited = false;
	this->left = NULL;
	this->right = NULL;
}

void Node::printNode()
{
	cout<<label<<endl;
	cout<<"Node->l: "<<this->left->label<<endl;
	cout<<"Node->r: "<<this->right->label<<endl;
}
