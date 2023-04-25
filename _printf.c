#include "main.h"
/**
 * print_op - function to check which format specifier to print
 * @format: string being passed
 * @print_arr: array of struct
 * @list: list of arguments
 * Return: number of chars to be printed excluding the null char
 */

int print_op(const char *format, fmtyp *print_arr, va_list list)
{
	char ch;
	int cnt = 0, b = 0, c = 0;

	ch = format[b];
	while (ch != '\0')
	{
		if (ch == '%')
		{
			c = 0;
			++b;
			ch = format[b];
			while (print_arr[c].type != NULL && ch != *(print_arr[c].type))
				++c;
			if (print_arr[c].type != NULL)
				cnt += print_arr[c].f(list);
			else
			{
				if (ch == '\0')
					return (-1);
				if (ch != '%')
					cnt += _putchar('%');
				cnt += _putchar(ch);
			}
		}
		else
			cnt += _putchar(ch);
		++b;
		ch = format[b];
	}
	return (cnt);
}

/**
 * _printf - prints output according to format
 * @format: string being passed with format specifiers
 * Return: char to be printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;

	fmtyp ops[] = {
		{"c", ch},
		{"s", str},
		{"d", _int},
		{"b", _bin},
		{"i", _int},
		{"u", _ui},
		{"o", _oct},
		{"x", _hex_l},
		{"X", _hex_u},
		{"R", _rot13},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	i = print_op(format, ops, list);
	va_end(list);
	return (i);
}
