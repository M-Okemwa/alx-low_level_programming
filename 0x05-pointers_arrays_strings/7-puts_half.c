#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints n element of array
 * @str: the identified string
 * return: nothing
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n')
}

