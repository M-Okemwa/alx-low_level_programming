#include "variaidic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between the numbers
 * @n: the number of integers passed to a function
 * @...: a variable of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbrs;
	unsigned int i;

	va_start(nbrs, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nbrs, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nbrs);
}
