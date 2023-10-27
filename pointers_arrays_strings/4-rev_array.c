#include "main.h"
/**
 *reverse_array - Reverse a string
 *@a: the arrays
 *@n: the number of elements
 */

void reverse_array(int *a, int n)
{
	int i, lengh;

	for (i = 0; i < n / 2; i++)
	{
		lengh = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = lengh;
	}
}
