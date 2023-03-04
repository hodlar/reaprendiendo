struct node{
	int data;
	int color; //0 rojo, 1 negro
	struct node *parent;
	struct node *left;
	struct node *right;
};
typedef struct node Node;

Node* create_Node(int data);
void delete_Node(Node *node);

