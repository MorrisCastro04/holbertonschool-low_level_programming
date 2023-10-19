#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */

void times_table(void)
{
	int lines,column, n;

	for (column = 0 ; column <= 9 ; lines++)
	{
		for (lines = 0 ; lines <= 10 ; column++)
		{
			n = 0;
			_putchar(n + '0');
		}
		_putchar ('\n');
	}
}
