#include "main.h"

/**
 *_strcat - Concarnates two strings, that is src and dest
 *           overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest)
}
