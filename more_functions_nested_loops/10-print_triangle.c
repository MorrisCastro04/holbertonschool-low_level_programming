#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */

void print_triangle(int size)
{
	int lines, trg;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (lines = 0; lines <= size; lines++)
	{
		for (trg = 0; trg <= size; trg++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}

}
