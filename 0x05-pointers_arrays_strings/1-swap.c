#include "main.h"
/**
 * swap_int - swaps 2 integers
 * @a: First int to be swapped
 * @b: Second int to be swapped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
