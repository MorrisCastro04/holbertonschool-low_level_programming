#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - add a new node at the given position
 * @h: pointer to the pointer of the first node
 * @idx: position to add the new node
 * @n: what goes inside of the node
 * Return: Return a pointer to the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		tmp = add_dnodeint(h, n);
		return (tmp);
	}
	while (--idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
	{
		tmp = add_dnodeint_end(h, n);
		return (tmp);
	}
	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;
	tmp->next->prev = newNode;
	tmp->next = newNode;
	return (newNode);
}
