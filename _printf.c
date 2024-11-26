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
return (0);
while (str[i] != '\0')
{
_putchar(str[i]);
i++
}
return (i);
}
