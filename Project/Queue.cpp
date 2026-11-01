#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
    q->data = new unsigned int[size];
    q->capacity = size;
    q->count = 0;
    q->head = 0;
    q->tail = 0;
}

void cleanQueue(Queue* q)
{
    if (q->data != nullptr)
    {
        delete[] q->data;
        q->data = nullptr;
    }

    q->capacity = 0;
    q->count = 0;
    q->head = 0;
    q->tail = 0;
}

bool isEmpty(Queue* s)
{
    return s->count == 0;
}

bool isFull(Queue* s)
{
    return s->count == s->capacity;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        return;
    }

    q->data[q->tail] = newValue;
    q->tail = (q->tail + 1) % q->capacity;
    q->count++;
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    int removedValue = q->data[q->head];
    q->head = (q->head + 1) % q->capacity;
    q->count--;

    return removedValue;
}