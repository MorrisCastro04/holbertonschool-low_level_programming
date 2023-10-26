#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: is where in going to paste the string
 *@src: is the string that is going to copy
 *Return: Return the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[lengh] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[lengh] = '\0';
	return (dest);
}
