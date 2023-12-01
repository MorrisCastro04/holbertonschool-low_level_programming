#include "lists.h"
/**
 * sum_dlistint - sum all the data of the list
 * @head: pointer to the link list
 * Return: Return the sum of all the nodes
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int count = 0;

	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
