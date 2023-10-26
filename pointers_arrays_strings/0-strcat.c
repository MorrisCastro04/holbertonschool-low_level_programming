#include "main.h"
/**
 *_strcat = concatenate 2 strings
 *@dest: where the 2 string need to be
 *@src: the string that is going to move
 *Return: Return the full string
 */

char *_strcat(char *dest, char *src)
{
	int i, lengh;

	lengh = 0;
	i = 0;
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
