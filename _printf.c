#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_string- prints a string
*@arg: List of arguments we're passing through
*Return: Length of the string
*/
int print_string(va_list arg)
{
int i = 0;
char *str = va_arg(arg, char *);
if (str == NULL)
return (0);
while (str[i] != '\0')
{
_putchar(str[i]);
i++
}
return (i);
}
/**
 * print_char - print a character
 * @arg: argument
 * Return: caracter
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);
	_putchar(c);
	return 1;
}

int _printf(const char *format, ...)
{
	print_func get_print[] = {
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
	if (format[i] == '%')
	{
	if (format[i + 1] == '\0')
	{
	va_end(arg);
	return(-1);
	}
	else if (format[i + 1] != 's' && format[i + 1] != 'c' && format[i + 1] != '%')
	{
	va_end(arg);
	return(-1);
	}
