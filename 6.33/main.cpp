/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file implement two function:
 *FindLeaf(int* child, int node_index, int node_u)
 *int main()
 *Function FindLeaf use recursion method to preorder a tree in order to find a
 *node.
 *In main function, user will be asked to input a tree's structure, and node u
 *and v.
 * ***************************************************************************/

#ifndef MAIN_H_
#define MAIN_H_
#include "main.h"
#endif

bool FindLeaf(int* left, int* right, int node_v, int node_u)
{
   if(!left || !right || node_v == 0 || node_u ==0)
       return false;

   if (left[node_v] == node_u || right[node_v] == node_u)
   {
      return true;
   }
   else
   {
      bool is_left_child = FindLeaf(left, right, left[node_v], node_u);
      bool is_right_child = FindLeaf(left, right, right[node_v], node_u);
      return (is_left_child || is_right_child);
   } 
};

int main()
{ 
    int node_number = 0;
    cout <<"Please input the nodes' number of a tree:"<<endl;
    cin >>node_number;
    int* L = new int[node_number+1];
    int* R = new int[node_number+1];
    
    cout <<"Please input every node's left child in tree,from first node to" 
         <<"last node:" <<endl;
    L[0] = R[0] = 0;
    for (int i = 1; i <= node_number; i++)
    {
        cin >>L[i];
    }
    
    cout <<"Please input every node's right child in tree, from first node to"
         <<"last node:"<<endl;
    for (int i = 1; i <= node_number; i++)
    {
        cin >>R[i];
    }

   while(true)
   {
       cout <<"Please input node v:"<<endl;
       int v = 0;
       cin >>v;
       cout <<"Please input node u:"<<endl;
       int u = 0; 
       cin >>u;
    
       bool is_offspring = FindLeaf(L, R, v, u);
       if (is_offspring)
       {
           cout <<"node u:"<<u<<"is node v "<<v<<"'s offspring!"<<endl;
       }
       else
       {
           cout <<"node u:"<<u<<"is not node v "<<v<<"'s offspring!"<<endl;
       }
    }  
    return 1;

};
