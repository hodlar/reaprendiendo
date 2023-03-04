struct node{
	int data;
	struct node *next;
};
typedef struct node Node;

Node* create_Node(int data);
void delete_Node(Node *node);

