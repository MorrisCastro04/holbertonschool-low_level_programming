#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - print all the elements of list_l list
 * @h: is the pointer to the elements of the structure
 * Return: Return the number of nodes
*/

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
