#include "lists.h"
#include "stdlib.h"
#include <string.h>

/**
 * add_node - add a new node at the beginning of the  list
 * @head: the beginning of the list
 * @str: the data of the new node
 *
 * Return: the new node
 */

list_t *add_node(list_t **head, char *str)
{
	int len = 0;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	temp->next = *head;
	*head = temp;
	return (temp);
}

