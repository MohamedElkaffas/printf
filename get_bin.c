#include "main.h"

/**
 * _bin - function to print binary
 * @bin: list being passed
 * Return: updated count return
 */
int _bin(va_list bin)
{
	int cnt = 0, i;
	int *arr;
	unsigned int n = va_arg(bin, unsigned int);
	unsigned int tmp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		cnt++;
	}
	++cnt;
	arr = malloc(cnt * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < cnt; i++)
	{
		arr[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cnt);
}
