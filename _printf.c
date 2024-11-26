#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
str = "(null)";
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
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
		{'\0', NULL}
};

int i = 0, j, count = 0;
va_list args;
va_start(args, format);
while (format && format[i])
{
       	if (format[i] == '%')
    	{
    	j = 0;
while (get_print[j].specifier != '\0')
{
    	if (format[i + 1] == get_print[j].specifier)
    	{

    	count += get_print[j].f(args);
    	i += 2;
break;
    	}
	if (format[i + 1] == '%')
	{
	_putchar('%');
	count += 1;
	i += 2;
break;
	}
	if (format[i + 1] != get_print[j].specifier)
	_putchar(format[i]);
	_putchar(format[i + 1]);
	count += 2;
	i += 2;
break;
 	}
	j++;
return(0);
}
