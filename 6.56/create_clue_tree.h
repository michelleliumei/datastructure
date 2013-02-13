/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file declaim the functions to create,visit and delete clue_bi-tree order 
 *by preorder.
 *
 *create_tree_array(int node_number):
 *    we use a array to describe a tree,
 *    according to visit tree node with preorder,the elements' order is the 
 *    preorder of visiting a tree.
 *
 *ClueBiTree* create_clue_tree(int* tree_array, int &index, ClueBiTree*& parent):
 *    according to array , create a Clue Bi-Tree using struct ClueBiTree.
 *
 *void preorder_clue_tree(ClueBiTree* tree):
 *    visit a tree with preorder, and create clue bi-tree's successor if clue
 *    bi-tree's RTag is thread.
 *
 *void delete_tree(ClueBiTree* tree):
 *    delete tree with post-order.    
 * ***************************************************************************/
#ifndef CREATE_CLUE_TREE_H_
#define CREATE_CLUE_TREE_H_

#ifndef IOSTREAM_H_
#define IOSTRAME_H_

#include <iostream>
using namespace std;

#endif

extern int tree_number;
struct ClueBiTree
{
    int node;
    BiTree* left;
    BiTree* right;
    int LTag;
    int RTag;
};

 
int* create_tree_array(int node_number);
BiTree* create_clue_tree(int* tree_array, int &index, ClueBiTree*& parent);
void preorder_clue_tree(ClueBiTree* tree, ClueBiTree* p);
void preorder_tree_add_right_thread(ClueBiTree* tree);
void delete_clue_tree(ClueBiTree*& tree);
ostream& operator<<(ostream& os,ClueBiTree tree_node);
#endif
