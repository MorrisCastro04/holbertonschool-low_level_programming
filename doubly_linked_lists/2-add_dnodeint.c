#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the start
 * @head: pointer to the pointer of the list
 * @n: is the data to add in the link list
 * Return: Return a pointer to the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
