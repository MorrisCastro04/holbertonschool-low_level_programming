#include "lists.h"
/**
 * list_len - return the number of elemets
 * @h: is a pointer to the elements of list_t
 * Return: return the number of elements linked
*/

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
