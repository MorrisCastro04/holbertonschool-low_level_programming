#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	int min, hr;
	for (hr = 00 ; hr <= 24 ; hr++)
	{
		for (min = 00 ; min <= 60 ; min++)
		{
			_putchar (hr);
			_putchar (':');
			_putchar (min);
			_putchar ('\n');
		}
	}
}
