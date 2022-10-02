#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 to 9
 * _putchar: print character
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
void _putchar()
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');
}
