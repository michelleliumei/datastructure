/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file implement three functions:
 *int* create_tree_arry(int node_number)
 *BiTree* create_tree(int* tree_array, int &index)
 *void preorder_tree(BiTree* tree)
 * ***************************************************************************/
#ifndef CREATE_TREE_H
#define CREATE_TREE_H

#include "create_tree.h"

#endif
using namespace std;
 
//it will return array describe a tree, node i's left child is 2*i, node i's
//right child is 2*i+1. In this function, it will allocate size(int*node_number)
//memory, so caller should free this memory.
//User will be asked to input the array's data, and node_number should not be 
//zero.
int* create_tree_array(int node_number)
{
    int* tree_array = new int[node_number];
    for (int i = 0; i < node_number; i++)
    {
	cout<<"please input node:"<<endl;
        cin>>tree_array[i];
    }

    return tree_array;
};

//It will return a pointer pointing a tree. It creates a Bi-Tree using struct
//BiTree according to tree_array, and this function is recursion.
//Because we using 'index' to note the order of visiting a tree, so 'index' must
//be a reference during the recursion.
BiTree* create_tree(int* tree_array, int &index)
{
    cout <<"tree_array["<<index<<"]"<<tree_array[index]<<endl;
    if (tree_array[index] != 0)
    {
	BiTree* tree_node = new BiTree;
        tree_node ->node = tree_array[index];
        index ++;
        tree_node ->left = create_tree(tree_array, index);
        index ++;
        tree_node ->right = create_tree(tree_array, index);
        return tree_node; 
    }
    else
    {
      return NULL;
    }
};
//visit a tree by preorder
void preorder_tree(BiTree* tree)
{
    if (tree != NULL)
    {
       cout << "Tree node:"<<tree ->node<<endl;
       preorder_tree(tree ->left);
       preorder_tree(tree ->right);
    }
    else
    {
       cout << "0" <<endl;
    }
};

//delete tree's nodes by preorder
void delete_tree(BiTree* tree)
{
    
    if (tree != NULL)
    {
       cout << "Tree node:"<<tree ->node<<endl;
       delete_tree(tree ->left);
       delete_tree(tree ->right);
       delete tree;
    }
};
