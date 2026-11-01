#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
    unsigned int data;
    Node* next;
} Node;

typedef struct LinkedList
{
    Node* head;
} LinkedList;

void initList(LinkedList* lst);
void insert(LinkedList* lst, unsigned int val);
int removeFirst(LinkedList* lst);
void cleanList(LinkedList* lst);
bool isEmptyList(LinkedList* lst);

#endif // LINKEDLIST_H