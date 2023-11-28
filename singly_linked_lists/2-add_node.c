#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - funcion to add a new node at the begining
 * @head: a pointer to the pointer of the link list head
 * @str: string to put in the element
 * Return: Return the adress to the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
