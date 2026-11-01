#include "Stack.h"

void initStack(Stack* stk)
{
    initList(&(stk->list));
}

void cleanStack(Stack* stk)
{
    cleanList(&(stk->list));
}

void push(Stack* stk, unsigned int element)
{
    insert(&(stk->list), element);
}

int pop(Stack* stk)
{
    return removeFirst(&(stk->list));
}

bool isEmpty(Stack* stk)
{
    return isEmptyList(&(stk->list));
}

bool isFull(Stack* stk)
{
    return false;
}