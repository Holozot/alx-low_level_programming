#include <stdio.h>

/**
 * main - Prints three digit number combinations
 * Return: Always 0
 */

int main(void)
{
	int k, l, m;

	for (k = 0; k < 9; k++)
	{
		for (l = k + 1; l < 9; l++)
		{
			for (m = l + 1; m < 10 ; m++)
			{
				putchar((k % 10) + '0');
				putchar((l % 10) + '0');
				putchar((m % 10) + '0');

				if (k == 7 && l == 8 && m == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
