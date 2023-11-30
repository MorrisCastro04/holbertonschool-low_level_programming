#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a link list
 * @head: pointer to the link list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
