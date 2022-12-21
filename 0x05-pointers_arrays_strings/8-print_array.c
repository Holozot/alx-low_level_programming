#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: input array
 * @n: n elements
 */
void print_array(int *a, int n)
{
	int k = 0;

	for (; k < n; k++)
	{
		printf("%d", *(a + k));
		if (k != (n - 1))
			printf(", ");
	}
	printf("\n");
}
