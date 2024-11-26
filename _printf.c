#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_string - Prints a string
 * @args: List of arguments
 * Return: Length of the string
 */
int print_string(va_list args)
{
int i = 0;
char *str = va_arg(args, char *);
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
 * print_char - Prints a character
 * @args: List
 * Return: 1 for a char
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
_putchar(c);

return (1);
}

/**
 * print_percent - Prints a '%'
 * @args: List (to set as unused)
 * Return: 1 for the percent symbol
 */
int print_percent(va_list args)
{
(void)args;
_putchar('%');
return (1);
}

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Total length of stdout
 */
int _printf(const char *format, ...)
{
print_func get_print[] = {
{'c', print_char}, {'s', print_string}, {'%', print_percent}, {'\0', NULL}
};
int i = 0, j, count = 0, match = 0;
va_list args;
if (format == NULL)
return (0);
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
for (j = 0; get_print[j].specifier != '\0'; j++)
{
if (format[i + 1] == get_print[j].specifier)
{
count += get_print[j].fct_pt(args);
i += 2;
match = 1;
break;
}
}
if (!match)
{
_putchar(format[i]);
count++;
i++;
}
}
else
{
_putchar(format[i]);
count++;
i++;
}
}
va_end(args);
return (count);
}

