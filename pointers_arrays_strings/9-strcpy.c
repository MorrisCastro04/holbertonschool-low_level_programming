#include "main.h"
/**
 *_strcpy - copy a string
 *@dest: where is gonna paste the string
 *@src: where is the string
 *Return = Return the string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
