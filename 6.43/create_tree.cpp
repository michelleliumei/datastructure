#ifndef CREATE_TREE_H
#define CREATE_TREE_H

#include "create_tree.h"

#endif
using namespace std;
 
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

