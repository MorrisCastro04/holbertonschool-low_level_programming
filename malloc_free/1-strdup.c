#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - pointer to a newly allocated space in memory
 *@str: the string to copy
 *Return: Return NULL if someting happen or return mall
 */

char *_strdup(char *str)
{
	int lengh;
	char *mall, *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	lengh = strlen(str);
	mall = malloc(sizeof(char) * lengh + 1);

	if (mall == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		*copy = *str;
		copy++;
		str++;
	}
	*copy = '\0';
	return (mall);
}
