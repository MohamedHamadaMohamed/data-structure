#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;

}node;
typedef struct
{
    node* front;
    node* rear;
    int size;
}list_t;
void insertNodeAtFirst(int elem);
void insertNodeAtLast(int elem);
void updateItemInTheList(int oldElem,int newElem);
void deleteNode(int item);
void printList(void);
int searchItemInTheList(int item);
int sizeOfList(void);


#endif