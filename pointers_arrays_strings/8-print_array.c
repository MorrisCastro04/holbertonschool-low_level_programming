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

	while (a[lengh] != '\0')
	{
		lengh++;
	}
	for (n = 0; n <= a[lengh]; n++)
	{
		printf("%d, ", a[n]);
	}
}
