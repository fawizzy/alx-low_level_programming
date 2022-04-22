#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the element of alinked lisr
 * @h: the head of the list
 *
 * Return: the number of nodes on the list
 */

int print_list(list_t *head)
{
	int count = 0;
	if (head == NULL)
	{
		printf("list is empty");
	}
	
	list_t *ptr;
	ptr = malloc(sizeof(list_t));
	ptr = head;

	while (ptr != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
