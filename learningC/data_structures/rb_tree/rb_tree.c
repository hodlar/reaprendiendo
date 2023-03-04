#include "node.h"
#include <stdio.h>

void create_tree (Node **root, int data)
{
    *root = create_Node(data);
    (*root)->color = 1;
	(*root)->parent = 0;
	(*root)->left = 0;
	(*root)->right = 0;
}

void rebalance(Node *root, Node *actual_node)
{
    if( (actual_node->parent)->color == 0 )
    {
        
    }
}

Node insert_leaf (Node *root, int data)
{
    Node *tmp;
    tmp = root;
    
    if( tmp->data < data )
    {
        if(tmp->right == 0)
        {
            tmp->right = create_Node(data);
            (tmp->right)->parent = tmp;
            rebalance(tmp->right);
        }
        else { insert_leaf( tmp->right, data ); }
    }
    else
    {
        if(tmp->left == 0)
        {
            tmp->left = create_Node(data);
            (tmp->left)->parent = tmp;
        }
        else { insert_leaf( tmp->left, data ); }
    }
}
/*
int rotate_left (Node *root, Node *actual_node)
{
    return 0;
}

int rotate_right (Node *root, Node *actual_node)
{
    return 0;
}

int recolor (Node *root, Node *actual_node)
{
    return 0;
}
*/
void print (Node *root)
{
    Node *tmp;
    tmp = root;
    
    if(tmp->left)
    { print(tmp->left); }
    if(tmp->right)
    { print(tmp->right); }
    
    printf(" %i,%i ", tmp->data, tmp->color);
}
