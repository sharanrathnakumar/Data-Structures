#include "sll.h"

int sl_delete_last(Slist **head)
{
    Slist *temp=*head,*prev=*head;
    if(temp == NULL)
        return FAILURE;
    while(temp->link != NULL )
    {
        prev = temp;
        temp = temp->link;
    }
    free(temp);
    prev->link = NULL;
