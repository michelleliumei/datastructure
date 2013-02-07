#ifndef STACK_H
#define STACK_H

#include <stdio.h>

struct BiTree
{
   char node;
   BiTree* left;
   BiTree* right;
};
struct stack
{
   BiTree TNode;
   stack* next;
};
stack* Push(stack*& s, BiTree data);
bool Pop(stack*& s);
void Print(stack*& s);
int ReadArray(char* array, int count, int total);
void CreateBiTree(BiTree*& T, char* array, int toal);
void PreOrderTree(BiTree* T);
#endif
