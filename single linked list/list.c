
#include "list.h"

    node* front=NULL;
    node* rear =NULL;
    int size =0;

void insertNodeAtFirst(int elem)
{
    node* link = (node* )malloc(sizeof(node));
    link->data = elem;
    link->next = front;
    front = link;

    if(0 == size)
    {        
        rear = link;

    }
    else
    {
    }
    size++;

}
void insertNodeAtLast(int elem)
{
    node* link = (node* )malloc(sizeof(node));
    link->data = elem;
    link->next = NULL;

    if(0 == size)
    {
       front = link;
       rear = link;

    }
    else
    {
            rear->next = link;
            rear = link;

    }
    size++;

}
void updateItemInTheList(int oldElem,int newElem)
{
  if((NULL == front)||(NULL == rear) )
  {
     /** error*/
  }
  else
  {
    node * current = front;
    while(NULL != current)
    {
        if(current->data == oldElem)
        {
            current->data = newElem;
            return;
        }
        current = current->next;
    }


  }
}
void deleteNode(int item)
{
    node* deletednode = NULL;
    node* current = front;
    if(NULL != front )
    {
        if(item == front->data)
        {
            deletednode = front;
            front =front->next;
            free(deletednode);
        }
        else
        {
            while(current->next !=NULL)
            {
                if(current->next->data == item)
                {
                    deletednode = current->next;
                    current->next =  deletednode->next;
                    size--;
                    free(deletednode);
                }
                current = current->next;
            }
        }

    }

}
void printList(void)
{
    node* current = front;
    while(NULL != current)
    {
        printf("[%d]\n",current->data);
        current = current->next;
    }


}
int searchItemInTheList(int item)
{
    int pos =0;
   if((NULL == front)||(NULL == rear) )
  {
     /** error*/
  }
  else
  {
    node * current = front;
    while(NULL != current)
    {
        if(current->data == item)
        {
            break;   
             return pos;

        }
        pos++;
        current = current->next;
    }


  }   


return -1;
}
int sizeOfList(void)
{

return size;

}