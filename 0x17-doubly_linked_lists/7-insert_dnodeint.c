#include "lists.h"
/**
 * insert_dnodeint_at - inser node at index
 * @h: node at the beginning of list
 * @idx: index of the list where the new node is added
 * @n: data of the new node
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *aux;
	unsigned int pos = 0;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*h == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}

	if (idx == 0)
	{
		(*h)->prev = newNode;
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}

	aux = *h;
	while (aux)
	{
		if (pos == idx - 1)
		{			
			newNode->prev = aux;
			newNode->next = (aux)->next;
			aux->next = newNode;
		}
		printf("pos: %d\n", pos);
		aux = aux->next;
		pos++;
	}

	return (newNode);
}
