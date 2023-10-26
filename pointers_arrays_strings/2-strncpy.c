#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: is where in going to paste the string
 *@src: is the string that is going to copy
 *Return: Return the new string
 *@n: the s[ace of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
