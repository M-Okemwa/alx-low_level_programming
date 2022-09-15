#include "main.h"

/**
 * _isupper - Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
