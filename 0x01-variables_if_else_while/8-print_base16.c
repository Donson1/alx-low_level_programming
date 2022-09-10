#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
*/
int main(void)
{
char alpha10 = a;
int num = 48;

for (; alpha10 <= 'f'; alpha10++)
{
for (; num < 58; num++)
putchar(num);
putchar(alpha10);
if (alpha10 == 'f')
putchar('\n');
}
return (0);
}
