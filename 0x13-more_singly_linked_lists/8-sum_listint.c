#include "lists.h"

/**
 * sum_listint - add all data of a node
 * @head: beginning of node
 *
 * Return: sum of all node data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
