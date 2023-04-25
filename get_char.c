#include "main.h"

/**
 * ch - function to return char
 * @character: list input
 * Return: number of chars printed
 */
int ch(va_list character)
{
	return (_putchar(va_arg(character, int)));
}
