#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the lowercase alphabet
 * Return: void
 */

void print_alphabet_x10(void)

{
	char k;
	int l = 0;

	while (l < 10)
	{
		for (k = 'a' ; k <= 'z'; k++)
		{
			_putchar(k);
		}
		l++;
		_putchar('\n');
	}
}
