#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at an index
 * @head: beginning of list
 * @idx: index to add node
 * @n: data of node to be added
 *
 *Return: Address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newNode;
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	
	temp = *head;
	while (temp)
	{
		if (count == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
		}
		temp = temp->next;
		count++;
	}

	return (NULL);
}
