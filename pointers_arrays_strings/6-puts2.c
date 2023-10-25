#include "main.h"
/**
 *puts2 - prints every other character
 *@str: is the string that is gonna modify
 */

void puts2(char *str)
{
	int i, m;

	for (i = 0; str[i] != '\0'; i++)
	;
	for (m = 0; m < i; m++)
	{
		if ((m % 2) == 0)
		{
			_putchar(str[m]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
