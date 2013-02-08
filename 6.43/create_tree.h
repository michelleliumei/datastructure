/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *Excersice:exchange Bi-Tree's left sub-tree and right sub-tree
 *This file declaim BiTree's structure and functions:
 *create_tree_array(int node_number):
 *we use a array to describe a tree,
 *according to visit tree node with preorder,following the rule that node 2*i 
 *is node i's left child and 2*i+1 is node i's right child.
 *BiTree* create_tree(int* tree_array, int &index):
 *according to array, create a Bi-Tree using struct BiTree.
 *void preorder_tree(BiTree* tree):
 *visit a tree with preorder.
 * ***************************************************************************/
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
void delete_tree(BiTree* tree);
