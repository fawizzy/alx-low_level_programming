#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a list
 * @head: the beginning of the list
 * @index: index of the node to return
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	
	if (head == NULL)
		return (NULL);
	
	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
