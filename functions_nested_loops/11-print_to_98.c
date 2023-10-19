#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print all natural numbers up to 98
 *n@: is where the count starts
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while(n <= 98)
		{
			_putchar((n / 10) + '0');
			n++;
		}
	}
	else
	{
		_putchar(n);
		n--;
	}
}
