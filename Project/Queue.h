#ifndef QUEUE_H
#define QUEUE_H

/* a queue contains positive integer values. */
typedef struct Queue
{
    unsigned int* data;
    unsigned int capacity;
    unsigned int count;
    unsigned int head;
    unsigned int tail;

} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q);

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */