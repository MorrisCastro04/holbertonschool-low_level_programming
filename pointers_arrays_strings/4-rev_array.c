#include "main.h"
/**
 *
 *
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int i, lengh;

	for (i = 0; i < n / 2; i++)
	{
		lengh = a[i];
		a[i] = a[n - i];
		a[n - i] = lengh;
	}
}
