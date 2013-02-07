#ifndef CREATE_TREE_H
#define CREATE_TREE_H

#include "create_tree.h"

#endif
using namespace std;

void change_tree_child(BiTree *&tree_node)
{   
    if (tree_node ->left != NULL && tree_node ->right != NULL)
    {
        BiTree* tempnode = tree_node ->left;
        tree_node ->left = tree_node ->right;
        tree_node ->right = tempnode;
        change_tree_child(tree_node ->left);
        change_tree_child(tree_node ->right);
    }
    else if (tree_node ->left != NULL && tree_node ->right == NULL)
    {
        tree_node ->right = tree_node ->left;
        tree_node ->left = NULL;
        change_tree_child(tree_node ->right);
    }
    else if (tree_node ->left == NULL && tree_node ->right != NULL)
    {
        tree_node ->left = tree_node ->right;
        tree_node ->right = NULL;
        change_tree_child(tree_node ->left);
    }
};

int main()
{
    cout <<"please input the tree node's number:"<<endl;
    int tree_number = 0;
    cin >> tree_number;
    int* tree_array = create_tree_array(tree_number);
    int initial_index = 0;
    BiTree* tree = create_tree(tree_array, initial_index);
    preorder_tree(tree);
    change_tree_child(tree);
    preorder_tree(tree);
        
    return 1;
};
