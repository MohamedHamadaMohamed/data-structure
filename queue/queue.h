#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct Node
{
    int data;
    struct Node *next; 
}node;




void enqueue();
void dequeue();
void printQueue();



#endif