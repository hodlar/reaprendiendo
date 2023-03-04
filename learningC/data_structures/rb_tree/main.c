#include "rb_tree.h"
#include <stdio.h>

int main()
{
    Node *root;
    create_tree(&root,15);
    insert_leaf(root, 80);
    insert_leaf(root, 40);
    insert_leaf(root, 12);
    insert_leaf(root, 30);
    insert_leaf(root, 66);
    insert_leaf(root, 18);
    print(root);
    return 0;
}
