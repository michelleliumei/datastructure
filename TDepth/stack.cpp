#include "stack.h"
int number = 0;
stack* Push(stack*& s, BiTree data)
{
   stack* p = NULL;
   if (s == NULL)
   {
	s = new stack;
	s ->TNode = data;
        s ->next = NULL;
        return s;
   }
   else
   {
   	p = new stack;
   	p ->TNode = data;
   	p ->next = s;
        stack* q = p;
          printf("Begin print stack!\n");
          printf("%c\n", p ->TNode.node);
        while(p ->next)
        {
          printf("%c\n", p ->next->TNode.node);
	  p = p->next;
	}
        return q;
    }
};
bool Pop(stack*& s)
{
    if (s == NULL)
        return false;
    else
    {
        stack* p = s;
        s = p ->next;
        p ->next = NULL;
        delete p;
        return true;
    }
};

void Print(stack*& s)
{
    stack* p = s;
    printf("Begin to print leaf path!\n");
    while(p)
    {
        printf("%c ", p->TNode.node);
        p = p ->next;
    }
    printf("print leaf end!\n");
};

int ReadArray(int count, int total)
{
    if (count < total)
       return count;
    else
       return -1;
};

void CreateBiTree(BiTree*& T, char* array, int total)
{
    int index = ReadArray(number, total);
    if (index == -1)
       return;
    if(array[number] != ' ')
    {
        T = new BiTree;
        T ->node = array[number];
        number ++;
        CreateBiTree(T->left, array, total);
        number ++;
        CreateBiTree(T->right, array, total);
    }
};

void PreOrderTree(BiTree* T)
{
     if (!T)
        return;

     char mark = T ->node;
     printf("%c\n", T ->node);
     printf("%c 's left!\n", T ->node);
     PreOrderTree(T ->left);
     printf("%c 's right!\n", T ->node);
     PreOrderTree(T ->right);
};
