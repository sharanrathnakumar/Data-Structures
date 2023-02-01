#include "sll.h"

int sl_delete_list(Slist **head)
{
    Slist *temp = *head,*next;
    while(temp != NULL)
    {
        next = temp->link;
        free(temp);
        temp = next;
    }

    *head = NULL;
    return SUCCESS;
}
