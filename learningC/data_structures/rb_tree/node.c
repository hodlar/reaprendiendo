#include "node.h"
#include <stdlib.h>

Node* create_Node(int data)
{
	Node *new_node;
	new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->left = 0;
	new_node->right = 0;
	new_node->parent = 0;
	new_node->color = 0;
	return new_node;
}

void delete_Node(Node *node)
{
	free(node);
}
