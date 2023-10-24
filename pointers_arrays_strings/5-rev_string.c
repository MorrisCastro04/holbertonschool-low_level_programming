#include <stdio.h>
#include "main.h"
/**
 *rev_string - print string in reverse
 *@s: is the string
 */

void rev_string(char *s)
{
	char a;
	int i, m;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	for (m = i -1; m >= i / 2; m++)
	{
		a = s[m];
		s[m] = s[i - m - 1];
		s[i - m - 1] = a;
	}
}

