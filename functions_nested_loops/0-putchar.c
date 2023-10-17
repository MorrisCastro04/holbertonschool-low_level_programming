#include <stdio.h>
#include "main.h"
/**
 *main - inicia el comando
 *description: print _putchar
 *Return: Return o always
 *
 *
 */

int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0 ; b < 8 ; b++)
	putchar(a[b]);
	putchar('\n');
	return (0);
}
