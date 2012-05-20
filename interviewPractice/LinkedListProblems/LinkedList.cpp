#include <Node.h>
#include <LinkedList.h>

LinkedList::LinkedList(Node* node=NULL)
{
	head = node;
}

void LinkedList::AddNode(Node* node)
{
	if(head == NULL)
	{
		head = node;
	}
	else {
		node->next = head;
		head = node;
	}
}

void LinkedList::DeleteNode(int position=1)
{
	if(head == NULL)
	{
		return;
	}
	Node* deleteNode = head;
	if(position==1)
	{
		head = head->next;
	}
	else
	{
		Node* temp = head;
		int i = 0;
		while(temp != NULL && i < position-1)
		{
			temp = temp->next;
		}
		deleteNode = temp->next;
		temp->next = deleteNode->next;
	}
	deleteNode->next = NULL;
	delete deleteNode;
}

LinkedList::~LinkedList()
{
	Node* temp = head;
	while(temp)
	{
		head = head->next;
		temp->next = NULL;
		delete temp;
		temp = head;
	}
}
