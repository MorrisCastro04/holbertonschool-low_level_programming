#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - give all the elements of a array
 *@array: pointer to an array
 *@size: size of the array
 *@action: pointer to a funcion with a int 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
