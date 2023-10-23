#include <stdio.h>
#include "main.h"
/**
 *_strlen - prints the lenght of a array
 *@s: is where the array is
 *Return: Return how long is the array
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
