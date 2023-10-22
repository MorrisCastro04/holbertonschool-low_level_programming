#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - funcion to print diagonals
 *@n: number of times that diagonal will print
 */

void print_diagonal(int n)
{
	int i, spc;

	if (n >= 1)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (spc = 0 ; spc < i ; spc++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
