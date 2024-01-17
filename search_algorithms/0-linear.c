#include "search_algos.h"
/**
 * linear_search - search a value in array
 * @array: pointer to the array
 * @size: size of the value
 * @value: number to look
 * Return: Return index where value is
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
