#include "lists.h"
#include <stdlib.h>

void free_listint(listint_t *head)
{
    listint_t *temp;
    temp = head;
    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
