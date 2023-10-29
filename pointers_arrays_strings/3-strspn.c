#include "main.h"
/**
 *_strspn - lengh of a prefix substring
 *@s: the main string
 *@accept: the substring
 *Return: length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, equal;

	for (i = 0; s[i]; i++)
	{
		for (equal = 0; accept[equal]; equal++)
		{
			if (s[i] == accept[equal])
			{
				break;
			}
		}
		if (s[i] != accept[equal])
		{
			break;
		}
	}
	return (i);
}
