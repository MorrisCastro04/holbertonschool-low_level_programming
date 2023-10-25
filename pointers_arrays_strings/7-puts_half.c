#include "main.h"
/**
 *puts_half - prints half of the string
 *@str: is the string
 */

void puts_half(char *str)
{
	int i = 0, n, half;

	while (str[i] != '\0')
	{
		i++;
	}
	n = (i - 1) / 2;
	for (half = n + 1; half < i; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
