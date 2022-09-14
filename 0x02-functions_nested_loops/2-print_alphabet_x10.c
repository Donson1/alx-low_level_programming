#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int n, xx;

xx = 0;

while (xx < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
xx++;
_putchar('\n');
}
}
