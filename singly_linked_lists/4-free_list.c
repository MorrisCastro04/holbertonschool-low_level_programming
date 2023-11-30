#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free all the link list
 * @head: is the link list to free
*/
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
