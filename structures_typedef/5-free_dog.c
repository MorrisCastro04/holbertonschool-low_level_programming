#include "dog.h"
/**
 *free_dog - free malloc in dog_t
 *@p: pointer to dog_t
 */


void free_dog(dog_t *d)
{
	free (d->name);
	free (d->owner);
	free (d);
}
