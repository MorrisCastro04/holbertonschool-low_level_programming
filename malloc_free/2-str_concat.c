#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *str_concat - concat 2 strings
 *@s1: first string
 *@s2: second string
 *Return: Return NULL or the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int lengh1, lengh2, size, i, j;
	char *mall;

	if (s1 == NULL)
	{
		lengh1 = 0;
	}
	else
	{
		lengh1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		lengh2 = 0;
	}
	else
	{
		lengh2 = strlen(s2);
	}

	size = lengh1 + lengh2;
	mall = malloc(sizeof(char) * size + 1);

	if (mall == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lengh1; i++)
	{
		mall[i] = s1[i];
	}
	for (j = 0; j < lengh2; j++)
	{
		mall[lengh1 + j] = s2[j];
	}
	mall[size + 1] = '\0';
	return (mall);
}
