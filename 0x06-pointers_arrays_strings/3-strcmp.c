#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: < 0 if string is less than other
 * > 0 if greater
 * 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter;
	int val;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	val = s1[counter] - s2[counter];
	return (val);
}
