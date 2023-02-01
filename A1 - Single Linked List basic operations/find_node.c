#include "sll.h"

int find_node(Slist *head, data_t data)
{
    if(head == NULL)
        return FAILURE;

    int count=0;
    Slist *temp = head;

    while(temp != NULL)
    {
        if(temp->data == data)
        {
            return count;
        }
        count++;
        temp = temp->link;

    }

    return FAILURE;
}
