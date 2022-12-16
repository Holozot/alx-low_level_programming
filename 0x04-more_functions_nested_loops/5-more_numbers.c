#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: 0 to 14 ten times
 */
void more_numbers(void)
{
	int k, l;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l >= 10)
				_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
