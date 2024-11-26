#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct get_print - a function with specifier for printf
 * @specifier: char type pointer to specifier
 * @f: fonction type
 * Return: int
 */
typedef struct get_print
{
	char *specifier;
	int (*f)(va_list arg);
}print_func;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_dec(va_list arg);
int print_int(va_list arg);
int _putchar(char c);

#endif
