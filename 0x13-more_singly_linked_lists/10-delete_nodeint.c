#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *copy;
    int count = 0;

    copy = *head;

    if (copy == NULL)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        free(copy);
        return (1);
    }
    while (copy)
    {
        if (count == index - 1)
        {
            temp = copy->next;
            copy->next = temp->next;
            free(temp);
            return (1);
        }
        copy = copy->next;
        count++;
    }
    return (-1);
}
