/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *Excersice:write a program to delete node i's subtree if node i's value is x.
 *This file declaim BiTree's structure and four functions:
 *
 *create_tree_array(int node_number):
 *    we use a array to describe a tree,
 *    according to visit tree node with preorder,following the rule that node 2*i 
 *    is node i's left child and 2*i+1 is node i's right child.
 *
 *BiTree* create_tree(int* tree_array, int &index):
 *    according to array, create a Bi-Tree using struct BiTree.
 *
 *void preorder_tree(BiTree* tree):
 *    visit a tree with preorder.
 *
 *void delete_tree(BiTree* tree):
 *    delete tree with preorder.    
 * ***************************************************************************/
#ifndef IO_STREAM_H_
#define IO_STREAM_H_

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
void preorder_tree(BiTree*& tree, int x_value);
void delete_tree(BiTree*& tree);
void check_tree(BiTree* tree);
