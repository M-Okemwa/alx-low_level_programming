#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * @s1: first string
 * @s2: second string
 * Return:
 *         return 0 if s1 == s2
 *         return negative number if s1 < s2
 *         return positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
