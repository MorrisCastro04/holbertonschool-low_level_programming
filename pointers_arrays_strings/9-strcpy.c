#include "main.h"
/**
 *_strcpy - copy a string
 *@dest: where is gonna paste the string
 *@src: where is the string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, n, m = 0;

	while (*src)
	{
		i++;
	}
	for (n = 0; src[n] <= i; src[n]++)
	{
		dest[m++] = src[n];
	}
	return (dest);
}
