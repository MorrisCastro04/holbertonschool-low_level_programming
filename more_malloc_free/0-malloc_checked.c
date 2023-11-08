#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocate memory using malloc
 *@b: Size of the space in memory
 *Return: Return a pointer to the malloc
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *mall;

	mall = malloc(b);

	if (mall == NULL)
	{
		exit(98);
	}
	return (mall);
}
