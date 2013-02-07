#ifndef IOSTREAM_H
#define IOSTREAM_H

#include <iostream>

#endif
struct BiTree
{
    int node;
    BiTree* left;
    BiTree* right;
};
 
int* create_tree_array(int node_number);
BiTree* create_tree(int* tree_array, int &index);
void preorder_tree(BiTree* tree);

