#include <stdio.h>
#include "main.h"
/**
 *print_line - funcion to print lines
 *@n: number of times that will print lines
 *
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
