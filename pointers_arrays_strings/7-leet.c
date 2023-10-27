#include "main.h"
/**
 *leet - change some letters to numbers
 *@str: the string to change
 *Return: Return the new string
 */

char *leet(char *str)
{
	int i, lengh;

	lengh = 0;
	while(str[lengh] != '\0')
	{
		lengh++;
	}
	for (i = 0; i < lengh; i++)
	{
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
	}
	return (str);
}
