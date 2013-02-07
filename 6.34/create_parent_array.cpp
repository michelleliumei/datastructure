/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file implement a method which create a tree nodes' parent array 
 *according to tree nodes' children arrays.
 *method's name: create_parent_tree
 * ***************************************************************************/
#include <stdio.h>

int* create_parent_tree(int* left,int* right, int node_number)
{
    int* tree_parent = new int[node_number];
    for (int i = 1; i <= node_number; i++)
    {
	int left_children = left[i];
        int right_children = right[i];
        
        //left[i]'s index is node's NO., and value is node i's child,
        //so index act as value's parent
        if (left_children != 0)
            tree_parent[left_children] = i;
        if (right_children != 0)
            tree_parent[right_children] = i; 
    }
    return tree_parent;
}


