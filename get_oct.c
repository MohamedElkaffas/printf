#include "main.h"

/**
 * _oct - function to print octal
 * @octo: list being passed
 * Return: updated count
 */
int _oct(va_list octo)
{
	int cnt = 0, i;
	int *arr;
	unsigned int n = va_arg(octo, unsigned int);
	unsigned int t = n;

	while (n / 8 != 0)
	{
		n /= 8;
		++cnt;
	}
	++cnt;
	arr = malloc(cnt * sizeof(int));
	for (i = 0; i < cnt; ++i)
	{
		arr[i] = t % 8;
		t /= 8;
	}
	for (i = cnt - 1; i >= 0; --i)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cnt);
}
