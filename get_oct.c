#include "main.h"

/**
 * _oct - function to print octal
 * @o: list being passed
 * Return: updated count
 */
int _oct(va_list o)
{
    int coun = 0, i;
    int *a;
    unsigned int n = va_arg(o, unsigned int);
    unsigned int tm = n;

    while (n / 8 != 0)
    {
        n /= 8;
        coun++;
    }
    coun++;
    a = malloc(coun * sizeof(int));
    for (i = 0; i < coun; i++)
    {
        a[i] = tm % 8;
        tm /= 8;
    }
    for (i = coun - 1; i >= 0; i--)
    {
        _putchar(a[i] + '0');
    }
    free(a);
    return (coun);
}
