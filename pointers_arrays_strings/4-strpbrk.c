#include "main.h"
/**
 *_strpbrk - locates the first occurrence in the string
 *@s: the string
 *@accept: bytes to check in the string
 *Return: Return the string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
