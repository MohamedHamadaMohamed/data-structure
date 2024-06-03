#include <stdio.h>
#include "stack.h"
int main()
{
    Stack_push(11);
    Stack_push(22);
    Stack_push(33);
    Stack_push(44);
    Stack_push(55);
    Stack_display();
    printf("******************\n");
    Stack_pop();
    Stack_display();
    printf("******************\ntop = %d",Stack_top());

}