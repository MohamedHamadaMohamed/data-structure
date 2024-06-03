#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node* top = NULL;


void Stack_push(int elem )
{
 struct node *link = (struct node *)malloc(sizeof(struct node));
 link->data = elem;
 link->next = top;
 top = link;
}

void Stack_pop(void)
{
struct node *link = top;
top = top->next;
free(link);

}
void Stack_display(void)
{
struct node *link = top;
while(link != NULL)
{
    printf("[%d]\n",link->data);
    link = link->next;
}

}
int Stack_top(void)
{
return top->data;


}
