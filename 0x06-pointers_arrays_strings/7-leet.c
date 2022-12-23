#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int str, l;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	str = 0;
	while (s[str] != '\0')
	{
		l = 0;
		while (l < 10)
		{
			if (letters[l] == s[str])
			{
				s[str] = nums[l];
			}
			l++;
		}
		str++;
	}
	return (s);
}
