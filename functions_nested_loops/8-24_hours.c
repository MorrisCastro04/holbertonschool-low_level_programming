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

			_putchar (hr + '0');
			_putchar (':');
			_putchar (min + '0');
			_putchar (min + '0');
			_putchar ('\n');
		}
	}
}
