#include "lists.h"
/**
 * add_dnodeint: add node at the beginning
 * @head: first node of the list
 * @n: int data of the node to be added
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return NULL;
	if (newNode == NULL)
		return NULL;
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
