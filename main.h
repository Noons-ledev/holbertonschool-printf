#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct print_function - a function with specifier for printf
 * @specifier: char type pointer to specifier
 * @f: pointeur de fonction
 * Return: int
 */
typedef struct print_function
{
	char specifier;
	int (*fct_pt)(va_list args);
} print_func;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int _putchar(char c);
int print_percent(va_list args);
#endif
