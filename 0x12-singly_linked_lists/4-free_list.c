#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list
 * @head: a pointer to the linked list
 */

void free_list(list_t *head)
{
	list_t *ptr;
	
	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
