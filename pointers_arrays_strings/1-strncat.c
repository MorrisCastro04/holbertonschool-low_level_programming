#include "main.h"
/**
 *_strncat - concatenate string until the bytes
 *@dest: where is going to contatenates:
 *@src: the string to contatenates
 *@n: The size of bytes to use
 *Return: Return the string contatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, lengh;

	lengh = 0;
	while (dest[lengh] != '\0')
	{
		lengh++;
	}
	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[lengh + i] = src[i];
	}
	dest[lengh + i] = '\0';
	return (dest);
}
