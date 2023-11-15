#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - funcion to connect funcions that need 1 char
 *@f: is a pointer to funcions with a char
 *@name: the name to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
