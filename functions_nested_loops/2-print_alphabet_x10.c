#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphaber
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 0;

	while (n < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
		n++;
	}
	return;
}
