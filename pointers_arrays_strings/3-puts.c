#include <stdio.h>
#include "main.h"
/**
 *_puts
 *
 *
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i <= *str; i++)
	{
		if (*str != '\0')
		{
			_putchar(*str);
		}
	}
}
