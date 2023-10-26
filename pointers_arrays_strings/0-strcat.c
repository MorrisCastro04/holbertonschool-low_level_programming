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
	while (src[i] != '\0')
	{
		dest[lengh] = src[i];
		lengh++;
		i++;
	}
	dest[lengh] = '\0';
	return (dest);
}
