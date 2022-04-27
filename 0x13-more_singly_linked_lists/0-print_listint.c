#include "lists.h"

/**
 * print_listint - print data of a linked list
 * @h: head of the node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;

		count++;
	}

	return (count);
}
