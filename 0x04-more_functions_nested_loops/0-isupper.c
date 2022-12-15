#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: char to check
 *
 * Return: 0 if lowercase and 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

