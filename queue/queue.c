#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


node* front =NULL;
node* rear = NULL; 

void enqueue(int elem)
{
    node* link = (node *)malloc(sizeof(node));
    link->data = elem;
    link->next = NULL;
    if(NULL  == front )
    {
        front = rear = link;

    }
    else
    {
        rear->next = link;
        rear = link;

    }
}
void dequeue()
{
    node *deletedNode = front;
    front= front->next;
    free(deletedNode);

}
void printQueue()
{
    node* current = front;
    while(NULL != current)
    {
        printf("[%d]\n",current->data);
        current = current->next;
    }


}