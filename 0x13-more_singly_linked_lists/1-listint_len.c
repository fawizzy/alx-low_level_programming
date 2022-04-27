#include "lists.h"

/**
 * listint_len - find the length of a node
 * @h: head of the node
 *
 * Return: number of length
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
