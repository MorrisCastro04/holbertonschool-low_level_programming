#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenated 2 strings n bytes
 *@s1: the first string
 *@s2: the second string
 *@n: the n bytes to concatenated
 *Return: Return a pointer to the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lengh1, lengh2, i, j;
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

	if (n >= lengh2)
	{
		n = lengh2;
	}
	mall = malloc(sizeof(char) * lengh1 + n + 1);

	if (mall == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lengh1; i++)
	{
		mall[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		mall[lengh1 + j] = s2[j];
	}
	mall[lengh1 + n + 1] = '\0';
	return (mall);
}
