#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print all the elements
 * @h: a pointer to the link list
 * Return: Return the number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
