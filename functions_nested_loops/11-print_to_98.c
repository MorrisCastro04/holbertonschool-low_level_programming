#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print all natural numbers up to 98
 *n@: is where the count starts
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ",i);
		}
	}
	else
	{
		_putchar(n);
		n--;
	}
}
