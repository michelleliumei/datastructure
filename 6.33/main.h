/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *Excersice: we use two arrays--L[1..n],R[1..n] to represent a tree.L[i] and 
 *R[i] indicate node i's left child and right child independently. if the value
 *is zero, it indicates no child.Try to write a program to check whether node u
 *is node v's offspring.
 *This file declaim the function:
 *FindLeaf(int* child, int node_index, int node_u ).This function is to judge 
 *whether node u is node v's child.
 * ***************************************************************************/
#ifndef IOSTREAM_H_
#define IOSTREAM_H_
#include <iostream>
using namespace std;
#endif

//if node u is node v's offsrping, it will return true.
//node_v and node_u should be greater than zero.
//pointer child should not be NULL.This function is a recursion function.
bool FindLeaf(int* left, int* right, int node_v, int node_u);

