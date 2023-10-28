#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: Where im pasting the memory
 *@src: where im coping the memory
 *@n: nomber of byte of memory to copy
 *Return: Return the new array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int lengh;

	for (lengh = 0; lengh < n; lengh++)
	{
		dest[lengh] = src[lengh];
	}
	return (dest);
}
