#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add node to the beginning
 * @head: beginning of the list
 * @n: node data
 *
 * Return: newNode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
