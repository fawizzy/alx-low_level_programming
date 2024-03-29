#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: head pointer of a doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
