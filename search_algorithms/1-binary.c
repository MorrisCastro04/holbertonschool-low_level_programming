#include "search_algos.h"
/**
 * binary_search - search a value in a sorted integer
 * @array: pointer to a array
 * @size: size of the array
 * @value: value to look in the array
 * Return: index of value
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = low + (high - low) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
