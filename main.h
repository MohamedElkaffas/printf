#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct fmt - function to check for formats as indicated by man3printf
 * @type: The format to print char string 
 * @f: The print function to use
 */

typedef struct fmt
{
	char *type;
	int (*f)();
} fmtyp;

int _printf(const char *format, ...);
int print_op(const char *format, fmtyp *print_arr, va_list list);
int ch(va_list character);
int str(va_list string);
int _int(va_list integ);
int _ui(va_list unsign);
int _oct(va_list octo);
int _rot13(va_list rot);
int _hex_str(unsigned int n, unsigned int hex, char alpha);
int _hex_l(va_list hexa);
int _hex_u(va_list hexa);
int _strlen(char *s);
int _bin(va_list bin);
int _putchar(char c);
#endif
