#include "treeDepth.h"
//打印一棵树的叶子节点的路径 

void AllPath(BiTree* node, stack*& sHead)
{
   if(node)
   {
      stack* sTop = Push(sHead, *node);
      printf("sTop = %c\n", sTop->TNode.node);
      if(!node->left)
      { 
	Print(sTop);
      }
      else
      {
         printf("AllPath node %c ->left! \n", node->node);
         AllPath(node->left, sTop);
      }
      Pop(sTop);
      if (node ->right)
      {
         printf("AllPath node %c ->right! \n", node->node);
         AllPath(node->right, sTop);
      }
   }
}
int main()
{
    //char test[14] = {'a', 'b', ' ', 'c', 'e', ' ', 'f', 'g', ' ', ' ',' ','d', ' ', ' '};
    char test[23] = {'a', 'b', 'e', ' ', 'f', ' ', ' ', 'c', ' ', 'd', 'g', 'h', 'i', ' ','j', ' ','k', ' ',' ', ' ', ' ',' ', ' '};
    BiTree* Head = NULL; 
    stack* ST = NULL;
    CreateBiTree(Head, test, 23);
    PreOrderTree(Head);
    AllPath(Head,ST);
    return 1;
}
