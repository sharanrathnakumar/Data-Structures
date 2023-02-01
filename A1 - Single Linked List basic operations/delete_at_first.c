#include "sll.h"

int sl_delete_first(Slist **head)
{
    Slist *temp = *head;
    if(temp == NULL)
        return FAILURE;

    *head = temp->link;
    free(temp);
    return SUCCESS;
}
