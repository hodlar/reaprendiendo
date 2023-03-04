struct node{
	int data;
	char color;
	struct node *left;
	struct node *right;
};
typedef struct node Node;

Node* create_Node(int data);
void delete_Node(Node *node);

