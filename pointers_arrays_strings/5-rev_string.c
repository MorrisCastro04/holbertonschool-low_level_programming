#include <stdio.h>
#include "main.h"
/**
 *rev_string - print string in reverse
 *@s: is the string
 */

void rev_string(char *s)
{
	char a;
	int i, len = 0, len2 = 0;

	while (s[len])
		len++;

	len2 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		a = s[i];
		s[i] = s[len2];
		s[len2--] = a;
	}
}

