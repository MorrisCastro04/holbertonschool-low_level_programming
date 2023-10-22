#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */

void print_diagonal(int n)
{
	int i, spc;

	for (i = 0 ; i < n ; i++)
	{
		for (spc = 0 ; spc < i ; spc++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
}
