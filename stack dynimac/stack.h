#ifndef STACK_H_
#define STACK_H_

 struct node
{
int data;
struct node* next;
};


void Stack_push(int elem );
void Stack_pop(void);
void Stack_display(void);
int Stack_top(void);


#endif