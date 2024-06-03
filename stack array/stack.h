/*****************************************/
/* auther : mohamed hamada               */
/* file : stack.h                        */
/*****************************************/

#ifndef  STACK_H_
#define  STACK_H_
#include <stdio.h>


#define STACK_SIZE			10

typedef struct
{
	char stack_pointer;
	int data[STACK_SIZE];
	
}stack_t;

void Stack_init(stack_t* stack);
void Stack_push(stack_t* stack,int elem );
void Stack_pop(stack_t* stack );
void Stack_display(stack_t* stack );
int Stack_top(stack_t* stack );

#endif