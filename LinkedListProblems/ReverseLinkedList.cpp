#include <iostream>
#include <Node.h>

Node* ReverseLinkedList::ReverseList(Node* head)
{
	if(head != NULL && head->next != NULL)
	{
		Node* temp = head->next;
		Node* next;
		while(temp)
		{
			next = temp->next;
			temp->next = head;
			head = temp;
			temp = next;
		}
	}
	return head;
}
