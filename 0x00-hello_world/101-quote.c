#include <unistd.h>

/**
 * main-printout
 * Returns: Always 1 (complete)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
