#include "main.h"
/**
 *_strchr - locates char in a str
 *@s: in the string
 *@c: is the char to look in the str
 *Return: Return where is the char if is nor return NULL
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (0);
}
