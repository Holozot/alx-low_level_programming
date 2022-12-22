#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: pointer to array
 * @n: array's elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k;
	int counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		k = a[counter];
		a[counter++] = a[n];
		a[n--] = k;
	}
}
