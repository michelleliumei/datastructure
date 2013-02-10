/******************************************************************************
 *Author:   liumei
 *Version:  1.0
 *This file just declaim one function:main
 *this function invoke functions dealing with tree and finish the feature to
 *delete the node and it's subtree which value is equal to x
 * ***************************************************************************/
#ifndef CREATE_TREE_H_
#define CREATE_TREE_H_
#include "create_tree.h"
#endif
int tree_number = 0;
int main()
{
    cout <<"Please input your tree nodes' number:"<<endl;
    cout <<"Note:the nodes' number will be include leaf node's NULL "<<endl;
    cout <<"child, for example: if a tree has three node 1,2,3, and 2,3"<<endl;
    cout <<"has no chlid,the number of node should be 7,because include"<<endl;
    cout <<"node 2,3's null child!"<<endl;
    
    cin >>tree_number;
    int *tree = create_tree_array(tree_number);
    int tree_index = 0;    
    BiTree* bi_tree = create_tree(tree, tree_index);
    check_tree(bi_tree);
    cout <<"Please input the node's value which you want to delete:"<<endl;
    int node_value = 0;
    cin >>node_value;
    preorder_tree(bi_tree, node_value);
    if (bi_tree != NULL)
    {
        check_tree(bi_tree);
        delete_tree(bi_tree);
    }
    delete[] tree;
    
    return 1;    
};

