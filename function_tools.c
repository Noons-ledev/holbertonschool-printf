#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 *@c: Character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
*int_length- Returns length of an integer
*@a: Integer to count through
*Return: The length
*/
int _length(int a)
{
int count = 0;
if (a < 0)
{
a = -a;
count += 1;
}
if (a < 10)
count += 1;
while (a >= 10)
{
count += 1;
a = a / 10;
}
count += 1;
return (count);
}
