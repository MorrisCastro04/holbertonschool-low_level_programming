#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete the node in index
 * @head: a pointer to the pointer of the first node
 * @index: the number of the node to delete
 * Return: Return 1 if succeeded and -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *rem, *temp = *head;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (--index)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	rem = temp->next;
	temp->next = rem->next;
	if (rem->next != NULL)
		rem->next->prev = temp;
	free(rem);
	return (1);
}
