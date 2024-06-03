#include <stdio.h>
#include "queue.h"
int main()
{

 printf("************\n");


 enqueue(11);
 enqueue(22);
 enqueue(33);
 enqueue(44);
 enqueue(55);
 printQueue();
 printf("************\n");
 dequeue();
 printQueue();

}