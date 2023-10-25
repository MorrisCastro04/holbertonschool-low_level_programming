#include "main.h"
#include <stdio.h>
/**
 *print_array - prints the elements of a array
 *@a: is the array
 *@n: is the elements of the array
 */

void print_array(int *a, int n)
{
	int lengh;

	for (lengh = 0; lengh < n; lengh++)
	{
		printf("%d, ", a[lengh]);
	}
	_putchar('\n');
}
