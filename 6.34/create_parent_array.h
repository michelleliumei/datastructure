/*******************************************************************************
 *Question: We use three arrays--L[1..n],R[1..n],T[1..n] to represent a tree's 
 *node's childs and parents, L[1..n] is node's left child,R[1..n] is node's 
 *right child. T[i] indicate node i's parent.
 *L[i] and R[i] indicate node i's left child and right child. If the value are
 *zero, the node has not left node or right node.Write a program to judge wether
 *node u is node v's or offspring.
 *Author:  liumei
 *Version: 1.0
 *This head file declaim a method how to create tree'node parents'array T[1..n]
 *according to tree's children arrays--L[1..n], R[1..n]. 
 ******************************************************************************/
#ifndef STDIO_H_
#define STDIO_H_

#include <stdio.h>

#endif


//returns a pointer for the tree nodes' parent array.
//responsibility to create tree nodes' parent array according to input
//tree nodes' children arrays.
//In this function, it will allocat memory for array T, so caller should 
//free the memory. parameter node_number should not be zero, and parameter 
//left and right should not be null.
int* create_parent_tree(int* left, int* right, int node_number);


