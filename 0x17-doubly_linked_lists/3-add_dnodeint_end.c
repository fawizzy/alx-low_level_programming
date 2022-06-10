#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of list
 * @head: beginning og list
 * @n: int data of the new node
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}


	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	newNode->prev = last;
	return (newNode);

}
