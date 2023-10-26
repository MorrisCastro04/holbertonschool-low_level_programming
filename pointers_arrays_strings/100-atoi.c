#include "main.h"
/**
 *_atoi - convert string to integer
 *@s: the string to look for the integer
 *Return: Return the number
 */

int _atoi(char *s)
{
	int c;
	unsigned int num;

	c = 1;
	num = 0;
	while (*s != '\0' && (*s < '0' || *s > 9))
	{
		if (*s == '-')
		{
			c *= -1;
		}
		s++;
	}
	if (*s != '\0')
	{
		while (*s >= 0 && *s <= 9)
		{
			num = num * 10 + (*s - '0');
			s++;
		}
	}
	return (num * c);
}

