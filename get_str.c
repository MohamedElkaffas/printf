#include "main.h"

/**
 * str - prints s to stdout
 * @s: list
 * Return: number of char
 */
int str(va_list s)
{
    int ln;
    char *str;

    str = va_arg(s, char *);

    if (str == NULL)
        str = "(null)";
    ln = 0;

    while (str[ln] != '\0')
        ln = ln + _putchar(str[ln]);
    return (ln);
}
