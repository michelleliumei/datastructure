/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file implement the functions which create, push, pop a queue.We will use
 *template function to implement these functions.
 *template <class T>
 *T* create_queue(int maxsize)
 *template <class T>
 *void push_queue(T element)
 *template <class T>
 *T pop_queue()
 * ***************************************************************************/
#ifndef QUEUE_CPP_
#define QUEUE_CPP_

#include "queue.h"
template <class T>
Queue<T> create_queue(int maxsize)
{
   Queue<T> initial_queue;
   initial_queue.queue_array = new T[maxsize];
   initial_queue.maxsize = maxsize;
   initial_queue.top = initial_queue.bottom = 0;
   
   return initial_queue;
};

template <class T>
bool push_queue(T element, Queue<T> queue)
{
    int index = (queue.top + 1) % queue.maxsize; 
    if (index == queue.bottom)
        return false;
    queue.queue_array[index] = element;
    queue.top = index;
    return true;  
};

template <class T>
T pop_queue(Queue<T> queue)
{
    T element = queue.queue_array[queue.bottom];
    queue.bottom = (queue.bottom+1)%queue.maxsize;
    return element;
};

template <class T>
bool queue_empty(Queue<T> queue)
{
    if (queue.top == queue.bottom)
      return true;
    else
      return false;
};

template <class T>
bool queue_full(Queue<T> queue)
{
    if ((queue.top+1) % queue.maxsize == queue.bottom)
       return true;
    else
       return false;
};

template <class T>
void queue_display(Queue<T> queue)
{
    int index = 0;
    if (queue_empty(queue))
       cout <<"queue is empty!"<<endl;
    while (index <= queue.top)
    {
       cout <<"queue element:"<<queue.queue_array[index];
       index ++;
    }
};

#endif
