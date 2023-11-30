#include "lists.h"
/**
 * dlistint_len - how much elemets have a link list
 * @h: pointer to the list link
 * Return: Return the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
