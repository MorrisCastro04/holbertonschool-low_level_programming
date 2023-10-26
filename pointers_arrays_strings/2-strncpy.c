#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: is where in going to paste the string
 *@src: is the string that is going to copy
 *Return: Return the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lengh, i;

	lengh = 0;
	while (dest[lengh] != '\0')
	{
		for (i = 0; i <= n; i++);
		{
			dest[i] = src[i];
		}
		lengh++;
	}
	dest[lengh] = '\0';
	return (dest);
}
