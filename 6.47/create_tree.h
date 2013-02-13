/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file declaim the functions to create,visit and delete bi-tree. 
 *
 *create_tree_array(int node_number):
 *    we use a array to describe a tree,
 *    according to visit tree node with preorder,the elements' order is the 
 *    preorder of visiting a tree.
 *
 *BiTree* create_tree(int* tree_array, int &index):
 *    according to array , create a Bi-Tree using struct BiTree.
 *
 *void preorder_tree(BiTree* tree):
 *    visit a tree with preorder.
 *
 *void delete_tree(BiTree* tree):
 *    delete tree with post-order.    
 * ***************************************************************************/
#ifndef CREATE_TREE_H_
#define CREATE_TREE_H_

#ifndef IOSTREAM_H_
#define IOSTRAME_H_

#include <iostream>
using namespace std;

#endif

extern int tree_number;
struct BiTree
{
    int node;
    BiTree* left;
    BiTree* right;
};

 
int* create_tree_array(int node_number);
BiTree* create_tree(int* tree_array, int &index);
void preorder_tree(BiTree* tree);
void delete_tree(BiTree*& tree);
ostream& operator<<(ostream& os, BiTree tree_node);
#endif
