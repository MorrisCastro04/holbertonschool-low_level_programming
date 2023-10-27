#include "main.h"
/**
 *string_toupper - change lowercase to uppercase
 *@str: the string
 *Return: Return the new string
 */

char *string_toupper(char *str)
{
	int lengh, i;

	lengh = 0;
	while (str[lengh] != '\0')
	{
		lengh++;
	}
	for (i = 0; i < lengh; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
