#include "main.h"

/**
 * _strlen - gets string length
 * @string: string
 * Return: length
 */

int _strlen(char *string)
{
	int ln;

	ln = 0;
	while (string[ln] != '\0')
	{
		++ln;
	}
	return (ln);
}
