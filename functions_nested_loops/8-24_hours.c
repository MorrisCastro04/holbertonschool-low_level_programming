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
	for (hr = 00 ; hr <= 23 ; hr++)
	{
		for (min = 00 ; min <= 59 ; min++)
		{
			_putchar (hr);
			_putchar (':');
			_putchar (min);
		}
	}
}
