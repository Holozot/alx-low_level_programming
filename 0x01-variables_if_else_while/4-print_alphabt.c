#include <stdio.h>
#include <ctype.h>

/**
 * main -  Print all the letters except q and e
 * Return: Always 0
 */

int main(void)
{
	int r;

	for (r = 'a'; r <= 'z'; r++)

	{
		if (r == 'q' || r == 'e')
		{
			continue;
		}
		putchar(r);
	}
	putchar('\n');
	return (0);
}
