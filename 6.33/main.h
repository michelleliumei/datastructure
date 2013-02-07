//假定用两个一维数组L[1...n]和R[1...n]作为有n个节点的二叉树的存储结构，L[i]和R[i]分别指示节点i的左孩子和右孩
//子，0表示空。写一个算法判别节点u是否为节点v的子孙。
#include <stdio.h>

int number = 0;
void CreateLeaf(int* &array);
void CreateNode(char* &array);
bool FindLeaf(int* leafArray, char* array, char node);
