#include "main.h"

/**
 * _hex_str - converts the num from  the base 10 to hexdecmail base
 * @n: base 10  number to be converted
 * @h: base of 16 being passed
 * @alp: Char 'A' to 'F' or 'a' to 'f' upeercase letter or lowercase letter
 * Return: number of chars printed
 */
int _hex_str(unsigned int n, unsigned int h, char alp)
{
	unsigned int a = n % h;
	unsigned int b = n / h;
	char c;

	if (a > 10)
		c = (a - 10) + alp;
	else
		c = a + '0';
	if (b == 0)
	{
		return (_putchar(c));
	}
	if (b < h)
	{
		if (b > 10)
			return (_putchar(b - 10 + alp) + _putchar(c));
		return (_putchar(b + '0') + _putchar(c));
	}
	return (_hex_str(b, h, alp) + _putchar(c));
}

/**
 * _hex_l - for printing lower case hexadecimal numbers
 * @h: the arguments recieved
 * Return: num of char printed
 */
int _hex_l(va_list h)
{
	return (_hex_str(va_arg(h, unsigned int), 16, 'a'));
}

/**
 * _hex_u - for printing upper case hexadecimal numbers
 * @h: argument recieved
 * Return: num of char printed
 */
int _hex_u(va_list h)
{
	return (_hex_str(va_arg(, unsigned int), 16, 'A'));
}
