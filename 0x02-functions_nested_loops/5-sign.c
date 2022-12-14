#include "main.h"

/**
 * print_sign - Prints the number's sign
 * @n: The number to be checked
 * Return: 1 for positive, -1 for negative, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);

	}

	else
	{
		_putchar ('-');
		return (-1);
	}

}

