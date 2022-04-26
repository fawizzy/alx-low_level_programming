#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add a new node to the end of list
 * @head: the beginning of the node
 * @n: content of the node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
	}
	temp->next = newNode;
	return (newNode);
}
