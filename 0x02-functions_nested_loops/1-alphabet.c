#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always 0
 */

void print_alphabet(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		_putchar(k);
		k++;
	}

	_putchar('\n');
}
