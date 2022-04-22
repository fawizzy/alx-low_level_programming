#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node to the end of the list
 * @head: beginning of the list
 * @str: content of the new node
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *newNode = malloc(sizeof(list_t));
	char *dup;
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	if (newNode == NULL)
	{
		return (NULL);
	}
	
	dup = strdup(str);
	if (str == NULL)
	{
		free(temp);
		free(newNode);
		return (NULL);
	}

	newNode->len = len;
	newNode->str = dup;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return (newNode);
}
