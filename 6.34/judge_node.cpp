/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file includes two functions: main and judge_child
 *main function invoke all kinds of function to implement the whole feature
 *judge_child function is used to judge if node u is v's offspring.
 * ***************************************************************************/
#include <iostream>
#include "create_parent_array.h"
using namespace std;

//return true if node u is node v's offspring
//paramter u must greater than zero, pointer parent should not
//be NULL
bool judge_child(int* parent, int node_number, int u, int v)
{
    while(u < node_number && u > 0)
    {
       if (parent[u]==v)
          return true;
       else if(parent[u] != 0)
          u=parent[u];
       else
          return false;
    }
};

//program's entrance, you will be inquired input tree's structure, such as
//tree nodes' left array, right array, and in final,you should tell the program
//u, v node's NO.
int main()
{
    int tree_leftchild[9] = {0,2,3,8,0,6,0,0,0};
    int tree_rightchild[9] = {0,5,4,0,0,7,0,0,0};
    int *tree_parent = create_parent_tree(tree_leftchild, tree_rightchild, 8);
    for (int i = 0; i < 9; i++)
    {
	cout<<"tree_parent["<<i<<"]"<<tree_parent[i]<<endl;
    }
    int u = 0;
    cout <<"Please input children:"<<endl;
    cin >> u;
    int v = 0;
    cout <<"Please input parent:"<<endl;
    cin >> v;
    if (judge_child(tree_parent, 9, u, v))
    {
       cout<< "child"<<endl;
    }
    else
    {
       cout<< "no child!"<<endl;
    }

}
