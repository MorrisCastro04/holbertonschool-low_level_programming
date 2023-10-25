#include "main.h"
/**
 *
 *
 *
 *
 */

void puts_half(char *str)
{
	int i = 0, half, n = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	half = (i -1 ) / 2;
	if ((i % 2) == 0)
	{
		while (n >= (i - 1) / 2 && str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	if else (n <= (i -1) / 2 && str[n] != '\0')
	{
		n++;
		continue;
	}
	else
	{
		_putchar(half);
	}
}
