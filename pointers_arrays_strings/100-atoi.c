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
	char *lengh;

	c = 1;
	num = 0;
	lengh = s;
	while (*lengh != '\0' && (*lengh < '0' || *lengh > 9))
	{
		if (*lengh == '-')
		{
			c = c *= -1;
		}
		lengh++;
	}
	if (*lengh != '\0')
	{
		do {
			num = num * 10 + (*lengh - '0');
			lengh++;
		} while (*lengh >= '0' && *lengh <= '9');
	}
	return (num * c);
}

