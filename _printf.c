#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
 * @arg: Liste
 *Return: 1 for a char
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

_putchar(c);
return (1);
}
int _printf(const char *format, ...)
{
int print_func get_print[] = {
{'c', print_char},
{'s', print_string},
{'\0', NULL}
};
int i = 0, j, count = 0;
va_list args;
if (format == NULL)
return (0);
va_start(args, format);
while (format && format[i])
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
_putchar('%');
count++;
i += 2;
continue;
}
for (j = 0; get_print[j].specifier != '\0'; j++)
{
if (format[i + 1] == get_print[j].specifier)
{
count += get_print[j].f(args);
i += 2;
break;
}
}
}
_putchar(format[i]);
count++;
i++;
}
va_end(args);
return (count);
}
