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
    dlistint_t *newNode, *prevNode, *tmp = *h;
    unsigned int size = 0;

    newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (newNode == NULL)
        return (NULL);
    if (h == NULL)
        return (NULL);
    while (tmp != NULL)
    {
        tmp = tmp->next;
        size++;
    }
    if (idx > size)
        return (NULL);
    newNode->n = n;
    if (idx == 0)
    {
        newNode->prev = NULL;
        newNode->next = *h;
        if (*h != NULL)
            (*h)->prev = newNode;
        *h = newNode;
        return (newNode);
    }
    tmp = *h;
    while (--idx)
    {
        prevNode = tmp;
        tmp = tmp->next;
    }
    newNode->next = tmp;
    newNode->prev = prevNode;
    prevNode->next = newNode;
    if (tmp != NULL)
        tmp->prev = newNode;
    return (newNode);
}