#include "main.h"

/**
 * swap_int - swap two integer values
 * @a: first integer
 * @b: second integer
 * Return; Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;

}
