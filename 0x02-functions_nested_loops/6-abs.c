#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes integer's absolute value
 * @k: The int to print
 * Return: Absolute number or 0
 */

int _abs(int k)
{
	if (k < 0)
	{
		return (k * (-1));
	}

	else if (k == 0)
	{
		return (0);
	}
	else
	{
		return (k);
	}
}
