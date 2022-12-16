#include "main.h"

/**
 * print_line - Prints a straight line in the terminal
 * @n: number the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;

		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
