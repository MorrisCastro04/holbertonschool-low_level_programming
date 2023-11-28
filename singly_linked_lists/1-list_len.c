#include "lists.h"
/**
 * list_len - return the number of elemets
 * 
 * 
*/

size_t list_len(const list_t *h)
{
    size_t elem = 0;

    while (h != NULL)
    {
        elem++;
        h = h->next;
    }
    return (elem);
}