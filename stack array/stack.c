#include "stack.h"

void Stack_init(stack_t* stack)
{
	stack->stack_pointer =-1;
	for(int i=0;i<STACK_SIZE;i++)
	{
		stack->data[i] = 0;
	}
	
}
void Stack_push(stack_t* stack,int elem )
{
	if (stack->stack_pointer <STACK_SIZE)
	{
		stack->data[++stack->stack_pointer]=elem; 
	}
	
}
void Stack_pop(stack_t* stack )
{
	if (stack->stack_pointer !=-1)
	{
		stack->data[stack->stack_pointer--]=0; 
	}	
}
void Stack_display(stack_t* stack )
{
	if (stack->stack_pointer !=-1)
	{
		for(int i =0;i<= stack->stack_pointer;i++)
		{
			printf("[%d]\n",stack->data[i]);
		}
	}

	
	
}
int Stack_top(stack_t* stack )
{
	int top =0;
	if (stack->stack_pointer !=-1)
	{
		top = stack->data[stack->stack_pointer]; 
	}	
	return top;
}