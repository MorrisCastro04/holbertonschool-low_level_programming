#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum
 * @a: is the pointer
 * @size: is the number
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i <= size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
