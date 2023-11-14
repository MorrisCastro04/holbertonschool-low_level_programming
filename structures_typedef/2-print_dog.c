#include "dog.h"
#include <stdio.h>
/**
 *print_dog - funcion to print struct dog
 *@d: pointer to struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL || d->owner == NULL || d->age < 0)
		{
			if (d->name == NULL)
			{
				printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
			}
			else if (d->owner == NULL)
			{
				printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
			}
			else
			{
				printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
			}
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
