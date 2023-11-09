#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocate memory for an array
 *@nmemb: the size of the array
 *@size: type of value
 *Return: Return a pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *nmall;
	char *mall;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (size == sizeof(char))
	{
		mall = malloc(nmemb * size);
		if (mall == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			mall[i] = '0';
		}
		return (mall);
	}
	else
	{
		nmall = malloc(nmemb * size);
		if (nmall == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			nmall[i] = 0;
		}
		return (nmall);
	}
}
