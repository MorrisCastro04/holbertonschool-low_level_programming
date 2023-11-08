#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocate memory using malloc
 *@b: Size of the space in memory
 *Return: Return a pointer to the malloc
 */

void *malloc_checked(unsigned int b)
{
	char *mall;

	if (b == 0)
	{
		exit(98);
	}
	mall = malloc(sizeof(int) * b);

	if (mall == NULL)
	{
		exit(98);
	}
	return (mall);
}
