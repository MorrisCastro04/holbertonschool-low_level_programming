#include "main.h"
/**
 *
 *
 *
 *
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
		if (str[lengh] == 'o' || str[lengh] == 'O')
		{
			str[lengh] = '0';
			str[lengh] = str[lengh + '0'];
		}
	}
	return (str);
}
