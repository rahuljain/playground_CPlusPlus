#include "node.h"
#include <assert.h>

using namespace std;

int stringLength(char* postTreeExp)
{
	int len = 0;
	char *temp = postTreeExp;
	while(temp != NULL) {
		temp++;
		len++;
	}
	return len;
}

Node* convertToTree(char* postTreeExp)
{
	int len = stringLength(postTreeExp);
	Node* nodes[len];
	for(int i = 0; i < len; i++)
	{
		if(postTreeExp[i] == 'L') {
			Node *n = new Node('L');
			nodes[i] = n;
		}
		else if(postTreeExp[i] == 'P') {
			Node *n = new Node('P');
			nodes[i]=n;
			int j=i;
			while(j >= 0) {
				j--;
				if(nodes[j]->visited == false) {
					n->right = nodes[j];
					nodes[j]->visited = true;
					break;
				}
			}
			while(j >= 0) {
				j--;
				if(nodes[j]->visited == false) {
					n->left = nodes[j];
					nodes[j]->visited = true;
					break;
				}
			}
		}
	}
	return nodes[len-1];
}

int main(int argc, char** argv)
{
	assert(argc == 2); //need to provide the post-tree traversal expression (with no spaces) when running the program. So there should be 2 arguments in total.
	char* postTreeExp = argv[1];
	Node* root = convertToTree(postTreeExp);
	return 0;
}

