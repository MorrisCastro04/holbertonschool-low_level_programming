#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 14)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		else
		{
			_putchar(i + '0');
		}
	}
}
