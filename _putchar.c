#include "main.h"

/**
 * _putchar - function to print a character
 * @c: character being passed
 * Return: return a char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
