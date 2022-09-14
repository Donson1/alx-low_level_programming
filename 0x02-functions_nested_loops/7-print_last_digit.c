#include "main.h"
/**
 * print_last_digit - returns a,  Prints last digit of a
 * @a: full length int
 * Return: Always 0.
 */
int print_last_digit(int a)
{
a = a % 10;
if (a < 0)
a = -a;
_putchar('0' + (a));
return (a);
}
