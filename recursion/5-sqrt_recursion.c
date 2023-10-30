#include"main.h"
/**
 * find_square_root - find the square root of a num
 * @root: the root number
 * @n: a random number
 * Return: return square root or -1
 */
int find_square_root(int root, int n)
{
	int perfect_square = root * root;

	if (perfect_square < n)
	{
		return (find_square_root(root + 1, n));
	}
	else if (perfect_square > n)
	{
		return (-1);
	}
	return (root);
}

