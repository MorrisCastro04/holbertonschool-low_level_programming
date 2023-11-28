#include "lists.h"
/**
 * list_len - return the number of elemets
 * 
 * 
*/

size_t list_len(const list_t *h)
{
    size_t elem = 0;

    if (h->len > 0)
        elem++;
    if (h->str != NULL)
        elem++;
    return (elem);
}