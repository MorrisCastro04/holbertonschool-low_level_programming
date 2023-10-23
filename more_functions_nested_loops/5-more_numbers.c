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
	int num, line;

	for (line = 0 ; line <= 10 ; line++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			_putchar(num + '0');
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
	}
}
