#include <iostream>
#include <Node.h>

class LinkedList
{
	public:
		Node* head;
		
		LinkedList(Node* node = NULL);
		
		void AddNode(Node* node);

		void DeleteNode(int position=1);

		virtual ~LinkedList();
}
