#include "main.h"
/**
 *
 *
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, lengh;

	lengh = 0;
	while (dest[lengh] != '\0')
	{
		lengh++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[lengh + i] = src[i];
	}
	src[i] = dest[lengh + i] + '\0';
	return (src);
}
