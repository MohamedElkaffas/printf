#include "main.h"

/**
 * _rot13 - prints rot13 version
 * @rot: list being passed
 * Return: count of chars
 */
int _rot13(va_list rot)
{
	int a, cnt;
	char *s;

	a = cnt = 0;
	s = va_arg(rot, char *);

	if (s == NULL)
		return (-1);
	while (s[a] != '\0')
	{
		if ((s[a] >= 'a' && s[a] <= 'z') ||
		    (s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] >= 'n' && s[a] <= 'z') ||
			    (s[a] >= 'N' && s[a] <= 'Z'))
				cnt += _putchar(s[a] - 13);
			else
				cnt += _putchar(s[a] + 13);
		}
		else
			cnt += _putchar(s[a]);
		++a;
	}
	return (cnt);
}
