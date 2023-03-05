#include "node.h"

void create_tree (Node **root, int data);
void rebalance(Node **root, Node *actual_node);
void rotate_left (Node **root, Node *actual_node);
void rotate_right (Node **root, Node *actual_node);
void rotate_left_right(Node **root, Node *actual_node);
void rotate_right_left(Node **root, Node *actual_node);
int recolor (Node *root, Node *actual_node);
void insert_leaf (Node **root, int data);
void print (Node *root);

