#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
*/
int main(void)
{
char alpha = 'a';
int num = 48;

for (; alpha <= 'f'; alpha++)
{
for (; num < 58; num++)
putchar(num);
putchar(alpha);
if (alpha == 'f')
putchar('\n');
}
return (0);
}
