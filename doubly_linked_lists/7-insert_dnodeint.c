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
	dlistint_t *temp = *h, *prev_node;
	unsigned int size = 0;
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	temp = *h;
	if (idx > size)
		return (NULL);
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
        return (newNode);
	}
	while (--idx)
    {
        prev_node = temp;
        temp = temp->next;
    }
	newNode->next = temp;
	newNode->prev = prev_node;
    prev_node->next = newNode;
    if (temp != NULL)
        temp->next = newNode;
	return (newNode);
}