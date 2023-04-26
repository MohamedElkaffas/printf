#include "main.h"

/**
 * _rot13 - prints rot13 version
 * @r list being passed
 * Return: count of chars
 */
int _rot13(va_list r)
{
    int a, cou;
    char *s;

    a = cou = 0;
    s = va_arg(r, char *);

    if (s == NULL)
        return (-1);
    while (s[a] != '\0')
    {
        if ((s[a] >= 'a' && s[a] <= 'z') ||
            (s[a] >= 'A' && s[a] <= 'Z'))
        {
            if ((s[a] >= 'n' && s[a] <= 'z') ||
                (s[a] >= 'N' && s[a] <= 'Z'))
                cou = cou + _putchar(s[a] - 13);
            else
                cou = cou + _putchar(s[a] + 13);
        }
        else
            cou = cou + _putchar(s[a]);
        a++;
    }
    return (cou);
}
