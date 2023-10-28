#include "main.h"
/**
 *leet - change some letters to numbers
 *@str: the string to change
 *Return: Return the new string
 */

char *leet(char *str)
{
	int i, s;
	char letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (s = 0; s < 10; s++)
		{
			if (str[i] == letter[s])
			{
				str[i] = num[s];
			}
		}
	}
	return (str);
}
