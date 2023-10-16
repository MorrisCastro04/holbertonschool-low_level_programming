#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	char a_z;
	
	for(a_z = 'a'; a_z <= 'z'; a_z++)
	{
		if (a_z == 'q' || a_z == 'e')
		{ return (0);
		}else
		{ putchar(a_z);
		}
	}putchar('\n');
	return(0);
}

