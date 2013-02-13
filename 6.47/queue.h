/******************************************************************************
 *Author:  liumei
 *Version: 1.0
 *This file declaims the functions which create, push, pop a queue and
 *define queue's structure.
 * void create_queue(int maxsize)
 * template <class T>
 * void push_queue(T element)
 * template <class T>
 * T pop_queue()
 * ***************************************************************************/
#ifndef IOSTREAM_H_
#define IOSTREAM_H_
#include <iostream>
using namespace std;
#endif

#ifndef QUEUE_H_
#define QUEUE_H_
#include "create_tree.h"

template <class T>
struct Queue
{
    T* queue_array;
    int maxsize;
    int top;
    int bottom;
};

template <class T>
Queue<T> create_queue(int maxsize);

template <class T>
bool push_queue(T element, Queue<T>& queue);

template <class T>
T pop_queue(Queue<T>& queue);

template <class T>
bool queue_empty(Queue<T> queue);

template <class T>
bool queue_full(Queue<T> queue);


template <class T>
ostream& operator<<(ostream& os, Queue<T> queue);
#endif

