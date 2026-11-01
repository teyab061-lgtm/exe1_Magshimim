#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
    LinkedList list;
} Stack;

void initStack(Stack* stk);
void cleanStack(Stack* stk);

void push(Stack* stk, unsigned int element);
int pop(Stack* stk); // Return -1 if stack is empty

bool isEmpty(Stack* stk);
bool isFull(Stack* stk);

#endif // STACK_H