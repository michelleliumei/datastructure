/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *Excercise: visit a bi-tree order by level.
 *This file implement the main function.In this function, it will ask user to 
 *input a bi-tree's structure, and create this bi-tree, finally visit this 
 *bi-tree order by level.
 *We mainly use a queue to store tree's nodes.while visiting a node, push the 
 *node's left child and right child into the queue.It can implement the feature
 *that visiting a tree order by level. 
 *****************************************************************************/
#include "create_tree.h"
#include "queue.h"
#include "queue.cpp"
int tree_number = 0;
int main()
{
    cout<<"Please input the length of array(visit a tree order by preorder,"<<endl
        <<"include leaf node's right child and left child, although they are)"<<endl
        <<"empty!"<<endl;

    cin >>tree_number;
    int* tree_array = create_tree_array(tree_number);
    int array_index = 0; 
    BiTree* bi_tree = create_tree(tree_array, array_index);
    int max_size = 50;   
    Queue<BiTree> queue_bi_tree ;
    queue_bi_tree = create_queue<BiTree>(max_size);
    
    BiTree p = *bi_tree;
    if (!queue_full(queue_bi_tree))
       push_queue(p, queue_bi_tree);
    while(!queue_empty(queue_bi_tree))
    {  
       BiTree tree_node = pop_queue(queue_bi_tree);
       cout <<"visit level node:"<<tree_node.node<<endl;
       if (tree_node.left != NULL)
       {
           if (!queue_full(queue_bi_tree))
               push_queue(*(tree_node.left), queue_bi_tree);
           else
               cout <<"queue is full!"<<endl;
       }
       if (tree_node.right != NULL)
       {
           if (!queue_full(queue_bi_tree))
               push_queue(*(tree_node.right), queue_bi_tree);
           else
               cout <<"queue is full!"<<endl;
       }
    }
    delete[] tree_array;
    delete_tree(bi_tree);
};
