/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file implement three functions:
 *int* create_tree_arry(int node_number)
 *BiTree* create_tree(int* tree_array, int &index)
 *void preorder_tree(ClueBiTree* tree)
 *void delete_tree(ClueBiTree*& tree)
 * ***************************************************************************/
#include <queue>
#include <stack>
#include "create_tree.h"

using namespace std;
//it will return array describe a tree, the order of array's element is the 
//order which visit a tree by preorder, and if a node has no child, it will
//be presented as 0 in array.
//In this function, it will allocate size(int*node_number)
//memory, so caller should free this memory.
//User will be asked to input the array's data, and node_number should not be 
//zero.
//if you have three node--1,2,3,and node 2 is node 1's left child, node 3 is 
//node 1's right child.Node 2 and node 3 have no left and right child, but 
//in create_tree_array function ,node_number shoule be 7, including node 2 and
//node 3's left child and right child, even though they are NULL. In array, 
//they are zero.The array shoud be 1, 2, 0, 0, 3, 0, 0
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
//ClueBiTree according to tree_array, and this function is recursion.In this 
//Bi-Tree,clue bi-tree node's predecessor will be created if it's LTag is 
//thread, and node's sucessor will not be created if RTage is thread and the 
//node has not left child and right child.
//Because we using 'index' to note the order of visiting a tree, so 'index' must
//be a reference during the recursion.
BiTree* create_tree(int* tree_array, int &index, ClueBiTree*& parent)
{
    if (tree_array[index] != 0 && index <= tree_number)
    {
	ClueBiTree* tree_node = new ClueBiTree;
        tree_node ->node = tree_array[index];
        index ++;
        tree_node ->left = create_tree(tree_array, index, tree_node);
        index ++;
        tree_node ->right = create_tree(tree_array, index, tree_node);
       
        if (tree_node ->left != NULL)
        {
           tree_node ->LTag = 0;
           if (tree_node ->right == NULL)
           {
		tree_node ->RTag = 1;
                tree_node ->right = tree_node ->left;
           }
        }
        else
        {
           tree_node ->LTag = 1;
	   tree_node ->left = parent;
           if (tree_node ->right == NULL )
           {
               tree_node ->RTag = 1;
           }
        }
        
        return tree_node; 
    }
    else
    {
      return NULL;
    }
};
//visit a tree by preorder, and create the successor if node's RTag is thread
void preorder_tree_add_right_thread(ClueBiTree* tree)
{
    stack<CludeBiTree*, dequeue<ClueBiTree*>> stack_tree;
    ClueBiTree* tree_node = tree;
    while (tree_node || !stack_tree.empty())
    {
        if(!tree_node)
        {
            stack_tree.push(tree_node);
            cout <<"visit tree node:"<<tree.node<<endl;
            if (tree_node ->left != NULL)
            {
                tree_node = tree_node ->left;
            }
            else
            {
                if (tree_node ->right == NULL)
                {
                    tree_node = stack_tree.pop();
                    ClueBiTree* temp_node = tree_node;
		    while(tree_node ->RTag == 1)
                    {    
                        tree_node = stack_tree.pop();
                        cout << "visit tree_node:"<<tree_node.node<<endl;
                    }
                    temp_node ->right = tree_node ->right;
                }
                else
                {
                    tree_node = tree_node ->right;
                }  
             }
             else
             {
                   cout <<"error!"<<endl;
             }
               
    }
};

void preorder_clue_tree(ClueBiTree* tree, ClueBiTree* p)
{
      if (tree != NULL)
      {
          cout << "tree->node:"<<tree ->node <<endl;;
      } 
};
//delete tree's nodes by post-order
void delete_tree(BiTree*& tree)
{
    if (tree != NULL)
    {
       delete_tree(tree ->left);
       delete_tree(tree ->right);
       delete tree;
       tree = NULL;
    }
};

void check_tree(BiTree* tree)
{
    cout <<"check tree!"<<endl;  
    if (tree != NULL)
    {
       cout << "Tree node:"<<tree ->node<<endl;
       check_tree(tree ->left);
       check_tree(tree ->right);
    }
    else
    {
       cout <<"NULL"<<endl; 
    }
};
ostream& operator<<(ostream& os, BiTree tree_node)
{
    os <<tree_node.node;
    return os;
};
