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
int print_func print_function[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_double,
		{'i', print_int},
		{'\0', NULL}
};
va_list arg;
int i = 0;

	va_start(arg, format);

	while (format && format[i])
	{
	if (format[i] == '%' &&
	(format[i + 1] != '\0' ||
	(format[i + 1] != 's' && format[i + 1] != 'c' && format[i + 1] != '%')))
	{
	return(-1)
	}
	i++;
	}
