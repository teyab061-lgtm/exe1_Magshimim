#include "LinkedList.h"
#include <iostream>

void initList(LinkedList* lst)
{
    lst->head = nullptr;
}

bool isEmptyList(LinkedList* lst)
{
    return lst->head == nullptr;
}

void insert(LinkedList* lst, unsigned int val)
{
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = lst->head;
    lst->head = newNode;
}

int removeFirst(LinkedList* lst)
{
    if (isEmptyList(lst))
    {
        return -1;
    }

    Node* targetNode = lst->head;
    int retrievedValue = targetNode->data;

    lst->head = lst->head->next;

    delete targetNode;

    return retrievedValue;
}

void cleanList(LinkedList* lst)
{
    while (!isEmptyList(lst))
    {
        removeFirst(lst);
    }
}