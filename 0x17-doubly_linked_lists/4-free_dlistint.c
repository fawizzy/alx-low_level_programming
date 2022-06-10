#include "lists.h"

/**
 * free_dlistint - free double linked list
 * @head: beginning of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = (head)->next;
		free(head);
		head = next;
	}
}
