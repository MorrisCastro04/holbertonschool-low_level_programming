#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a node in the end of a link list
 * @head: the first node of the link list
 * @str: the string in that node
 * Return: Return the a pointer to the node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (new_node);
}
