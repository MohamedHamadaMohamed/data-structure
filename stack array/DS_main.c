/*
*@file :main.c
*/
#include <stdio.h>
#include <math.h>

#include "stack.h"

int main()
{
 stack_t stk;
 Stack_init(&stk);
 Stack_push(&stk,11);
 Stack_push(&stk,12);
 Stack_push(&stk,13);

 //Stack_display(&stk);
 printf("top = [%d]\n", Stack_top(&stk));
 //Stack_pop(&stk);

 //Stack_display(&stk);


	
}
