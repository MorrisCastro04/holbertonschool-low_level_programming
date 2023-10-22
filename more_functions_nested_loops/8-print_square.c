#include <stdio.h>
#include "main.h"
/**
 *print_square - prints a square of #
 *@size: it will be the size of the square
 */

void print_square(int size)
{
	int row, column;

	if (size >= 1)
	{
		for (column = 0; column < size; column++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
