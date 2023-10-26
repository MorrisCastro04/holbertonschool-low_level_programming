#include "main.h"
/**
 *
 *
 *
 */

int _atoi(char *s)
{
	int c = 1;
	unsigned int num = 0;
	char *lengh = s;

	while (*lengh != '\0' && (*lengh < '0' || *lengh > 9))
	{
		if (*temp == '-';
				c *= -1;
		lengh++;
	}
	if (*lengh != '\0')
	{
		do {
				num = num * 10 + (lengh - '0');
				lengh++;
		} while (*lengh >= '0' && *lengh <= '9');
	}
	return (num * c);
}

