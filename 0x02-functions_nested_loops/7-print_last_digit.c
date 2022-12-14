#include "main.h"

/**
 * print_last_digit - Prints a number's last digit
 * @k: The number to be printed
 * Return: Last digit of the number
 */

int print_last_digit(int k)
{
	int l;

	if (k < 0)
	{
		l = (-1 * (k % 10));
		_putchar (l + '0');
		return (l);
	}

	else
	{
		l = (k % 10);
		_putchar (l + '0');
		return (l);
	}

}
