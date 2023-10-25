#include "main.h"
/**
 *
 *
 *
 *
 */

void puts_half(char *str)
{
	int i = 0, half, n;

	while (str[i] != '\0')
	{
		i++;
	}
	half = (i - 1) / 2;
	if ((i % 2) == 0)
	{
		for (half ; half != '\0'; half++)
		{
			_putchar(str[half];
		}
	}
	else
	{
		_putchar(i - 1);
	}
}
