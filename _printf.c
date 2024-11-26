#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print a character
 * @arg: argument
 */
int print_char(va_list arg)
{
	char c = (char)va_arg(arg, int);
	return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{
	print_t print_element[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
};
