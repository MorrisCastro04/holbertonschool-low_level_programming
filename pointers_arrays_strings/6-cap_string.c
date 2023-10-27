#incluide "main.h"
/**
 *cap_string - capitalizes all words
 *@str: the string
 *Return: Return the new string
 */

char *cap_string(char *str)
{
	int lengh, i;
	char array[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 0 && str[i] >= 'a' $$ str[i] <= 'z')
		{
			str[i] -= 32;
		}
		for (lengh = 0; lengh <= 13; lengh++)
		{
			if (str[i] == array[lengh])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
