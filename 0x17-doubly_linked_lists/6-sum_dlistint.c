#include "lists.h"

/**
 * sum_dlistint - sum of all data in  a linked list
 * @head: first node of the lined list
 * Return: sum of all data n n linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
