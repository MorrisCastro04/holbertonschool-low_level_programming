#include "main.h"
/**
 *_strchr - locates char in a str
 *@s: in the string
 *@c: is the char to look in the str
 *Return: Return where is the char if is nor return NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
