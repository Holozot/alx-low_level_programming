#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int l, i, j;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (j = l / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (l % 2)
	{
		for (i = (l - 1) / 2; i < l - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
