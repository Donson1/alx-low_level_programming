#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: can only use _putchar
 */

void _puts(char *str)
{
int i=0;

while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar(10);
}
