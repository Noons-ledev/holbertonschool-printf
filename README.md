# _printf - Custom printf function

## Description
This project implements a custom `printf` function in C that handles a subset of standard `printf` conversion specifiers. It includes the following files:
- _printf.c : Main implementation of the `_printf` function.
- function_tools.c : File contains helper functions for _printf.c.
- main.h : Header file containing function prototypes and struct definitions.

## Supported Conversion Specifiers
The _printf function supports the following conversion specifiers:

```c
%c: Print a character.

%s: Print a string.

%%: Print a percent symbol.

%d: Print an integer.

%i: Print an integer.
```
## Example usage of convertion specifiers

```c
_printf("Character: %c\n", 'A'); return (0);
output : Character: A

_printf("String: %s\n", "Hello, World!"); return (0);
output : String: Hello, World!

_printf("Decimal: %d\n", 12345);
_printf("Integer: %i\n", -67890); return (0);
output : Decimal: 12345
         Integer: -67890

_printf("Percent sign: %%\n"); return (0);
output : Percent sign: %
```
## Structure Definition

struct print_func: Structure which associates a format specifier (character) with a print function.
exemple:
```c
/**
 * struct print_function - a function with specifier for printf
 * @specifier: char type pointer to specifier
 * @fct_pt: pointeur de fonction
 * Return: int
 */
typedef struct print_function
{
	char specifier;
	int (*fct_pt)(va_list args);
} print_func;
```
## Prototype functions
# _printf
-int _printf(const char *format, ...); : Prototype of the _printf function.
Parses a format string, identifies format specifiers, and calls the appropriate functions to process each specifier.

Parameters :
const char *format: Format string containing conversion specifiers.

... : Variadic arguments to be printed according to the format specifiers.

Return: The total number of characters printed.
## print_char
-int print_char(va_list args); : Prototype of the function to print a character.
## print_string
-int print_string(va_list args); : Prototype of the function for printing a string.
## print_int
-int print_int(va_list args); : Prototype function for printing an integer.
## _putchar
-int _putchar(char c); : Prototype function for writing a character to standard output.
## print_percent
-int print_percent(va_list args); : Prototype function for printing a percentage symbol.

## functions_tools

functions_tools.c contains utility functions that are crucial to the proper operation of the _printf function.


## Compilation

To compile the code, use the following command:
```c
"gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c"
```
## Important points in the code

Handling negative integers and INT_MIN: The print_int function handles negative integers and the special case of INT_MIN by using an unsigned int.

Use of arrays to store integer digits: The print_int function uses an int_digits array to store the digits of an integer before printing them.

print_func structure : The print_func structure associates format specifiers with the corresponding print functions.

## Authors

-BRIET Noah
-DANIEL Alexandre
