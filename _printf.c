#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a character
 * @arg: argument
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);
	_putchar(c);
	return 1;
}

int _printf(const char *format, ...)
{
int print_func printfunction[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_double,
		{'i', print_int},
		{'\0', NULL}
};
