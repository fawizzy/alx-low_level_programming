#include "lists.h"

/**
 * pop_listint - delete head of a list
 * @head: the head of a list
 *
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int ret;
	listint_t *tmp;

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (ret);
}
