#include "main.h"
#include <stdlib.h>
/**
 *create_array - create array of char
 *@size: the size of the array
 *@c: char to be stored
 *Return: Return NULL if size is 0 or return the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *mall;

	if (size == 0)
	{
		return (NULL);
	}

	mall = malloc(sizeof(char) * size);

	if (mall == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		mall[i] = c;
	}
	return (mall);
}
