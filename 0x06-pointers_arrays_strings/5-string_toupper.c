#include "main.h"

/**
 *Description: 'lowercase to uppercase'

 * char *string_toupper(char *): prototype
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be changes.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *)
{
	int index = 0;
	char str[100];

	while(str[index] != '\0' )
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}

	Return(str);
}
