#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the element of alinked lisr
 * @h: the head of the list
 *
 * Return: the number of nodes on the list
 */

size_t print_list(list_t *head)
{
	size_t count = 0;

	if (head == NULL)
	{
		printf("list is empty");
	}
	
	while (head != NULL)
	{
		printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		count++;
	}

	return (count);
}
