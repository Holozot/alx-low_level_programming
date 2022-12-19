#include "main.h"
/**
 * _strlen - Find string length
 * @s: pointer to string length
 * Return: returns string length
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
