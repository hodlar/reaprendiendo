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


void rotate_left (Node **root, Node *actual_node)
{
    Node *x, *y;
    x = actual_node->parent;
    y = actual_node;
    
    x->right = y->left;
    if(y->left)
    { (y->left)->parent = x; }
    
    if( x->parent == 0 )
    {
        y->parent = 0;
        *root = y;
    }
    else if ( (x->parent)->left == x )
    {
        y->parent = x->parent;
        (x->parent)->left = y;
    }
    else{
        y->parent = x->parent;
        (x->parent)->right = y;
    }
    y->left = x;
    x->parent = y;
}


void rotate_right (Node **root, Node *actual_node)
{
    Node *x, *y;
    x = actual_node->parent;
    y = actual_node;
    
    y->left = x->right;
    if(x->right)
    { (x->right)->parent = y; }
    
    if( y->parent == 0 )
    {
        x->parent = 0;
        *root = x;
    }
    else if ( (y->parent)->right == y )
    {
        x->parent = y->parent;
        (y->parent)->right = x;
    }
    else{
        x->parent = y->parent;
        (y->parent)->left = x;
    }
    x->left = y;
    y->parent = x;
}

void rotate_left_right(Node **root, Node *actual_node)
{
    Node *y;
    y = actual_node;
    rotate_left(root,y);
    rotate_right(root,y);
}

void rotate_right_left(Node **root, Node *actual_node)
{
    Node *x;
    x = actual_node;
    rotate_right(root,x);
    rotate_left(root,x);

}

int recolor (Node *root, Node *actual_node)
{
    return 0;
}

void rebalance(Node **root, Node *actual_node)
{
    Node *new_node, *p, *gP, *z, *x;
    new_node = actual_node;
    z = 0;
    x = 0;
    p = new_node->parent;
    gP = p->parent;
    if(gP->right)
        if( (gP->right)->left )
        { z = (gP->right)->left; }
        else if( (gP->right)->right )
        { z = (gP->right)->right; }
        else 
        { z = 0; }
    
    while( p->color == 0 )
    {
        if (gP->left == p && z)
        {
            if( (gP->right)->color == 0)
            {  
                (gP->right)->color = 1;
                (gP->left)->color = 1;
                gP->color = 0;
                new_node = gP;
            }
            else if(new_node == p->right)
            {
                new_node = p;
                rotate_left(root, new_node);
            }
            else
            {
                p->color = 1;
                gP->color = 0;
                rotate_right(root,gP);
            }
        }
        if( (gP->left)->color == 0 )
        {
            (gP->left)->color = 1;
            (gP->right)->color = 1;
            gP->color = 0;
            new_node = gP;
        }
        else if(new_node == p->left ){
            new_node = p;
            rotate_right(root, new_node);
            p->color = 1;
            gP->color = 0;
            rotate_left(root, gP);
        }
    }
    (*root)->color = 1;
}


void insert_leaf (Node **root, int data)
{
    Node *tmp;
    tmp = *root;
    
    if( tmp->data < data )
    {
        if(tmp->right == 0)
        {
            tmp->right = create_Node(data);
            (tmp->right)->parent = tmp;
            rebalance(root, tmp->right);
        }
        else { insert_leaf( &tmp->right, data ); }
    }
    else
    {
        if(tmp->left == 0)
        {
            tmp->left = create_Node(data);
            (tmp->left)->parent = tmp;
        }
        else { insert_leaf( &tmp->left, data ); }
    }
}

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
