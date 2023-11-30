#include "lists.h"
/**
 * get_dnodeint_at_index - nth node of a link list
 * @head: pointer to the link list
 * @index: the node to print
 * Return: Return the nth node of the link list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int size = 0, i = 0;

	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	if (size < index)
		return (NULL);
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
