#include "main.h"

/**
 * _ui - unsigned int print to stdout
 * @un: list being passed
 * Return: char count
 */
int _ui(va_list un)
{
    unsigned int n;
    int ex = 1;
    int ln = 0;

    n = va_arg(un, unsigned int);

    while (n / ex > 9)
        ex *= 10;
    while (ex != 0)
    {
        ln = ln + _putchar(n / ex + '0');
        n = n % ex;
        ex = ex / 10;
    }
    return (ln);
}
