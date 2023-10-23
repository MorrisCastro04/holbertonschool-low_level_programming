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
	for (lines = 1; lines <= size; lines++)
	{
		for (trg = 1; trg <= size; trg++)
		{
			if ((size - 1) >= lines)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

}
