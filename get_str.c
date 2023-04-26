#include "main.h"

/**
 * str - prints string to stdout
 * @string: list input
 * Return: number of chars
 */

int str(va_list string)
{
	int ln;
	char *str;

	str = va_arg(string, char *);

	if (str == NULL)
		str = "(null)";
	ln = 0;

	while (str[ln] != '\0')
		ln += _putchar(str[ln]);
	return (ln);
}
