#include "main.h"
#include <stdlib.h>
/**
 *array_range - array of integers
 *@min: the first number
 *@max: the last number
 *Return: Return a pointer to the string
 */

int *array_range(int min, int max)
{
	int i, range;
	int *mall;

	range = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	mall = malloc(sizeof(int) * range);
	if (mall == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		mall[i] = min;
		min++;
	}
	return (mall);
}
