#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a list
 * @head: beginning of list
 *
 * Return:void
 */

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
