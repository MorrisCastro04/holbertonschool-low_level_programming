#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - run a clock of 24hr
 */

void jack_bauer(void)
{
	int min, hr;

	for (hr = 00 ; hr <= 23 ; hr++)
	{
		for (min = 00 ; min <= 59 ; min++)
		{

			_putchar ((hr / 10) + '0');
			_putchar ((hr % 10) + '0');
			_putchar (':');
			_putchar ((min / 10) + '0');
			_putchar ((min % 10) + '0');
			_putchar ('\n');
		}
	}
}
