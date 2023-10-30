#include "main.h"
/**
 * _strstr - locate the substring
 * @haystack: is the first string
 * @needle: is the substring
 * Return: the value of needle and haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, lengh;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (lengh = 0; needle[lengh] != '\0'; j++)
		{
			if (haystack[i + lengh] != needle[lengh])
				break;
		}
		if (!needle[lengh])
			return (&haystack[i]);
	}
	return (0);
}
