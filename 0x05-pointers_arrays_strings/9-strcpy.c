#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: points to the destination
 * @src: pointer to the origin
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}

