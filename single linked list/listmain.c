#include <stdio.h>
#include "list.h"

int main()
{
insertNodeAtLast(11);
insertNodeAtLast(22);
insertNodeAtLast(33);
insertNodeAtLast(44);
insertNodeAtLast(55);
insertNodeAtLast(66);
insertNodeAtLast(77);
printList();
printf("\n*************\nsize =%d",sizeOfList());
printf("\npostion = %d" , searchItemInTheList(44));

printf("\n*****************************\n");
deleteNode(44);
printList();
printf("\n*************\nsize =%d",sizeOfList());
printf("\npostion = %d" , searchItemInTheList(44));
} 