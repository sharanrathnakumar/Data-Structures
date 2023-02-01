#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
    Slist *new = malloc(sizeof(Slist));
    new->data = data;

    if(new == NULL)
    {
        printf("Memory Allocation Failed !\n");
        return FAILURE;
    }

    if(*head == NULL)
    {
        *head = new;
        new->link = NULL;
        return SUCCESS;
    }
    new->link = *head;
    *head = new;
    return SUCCESS;

}
