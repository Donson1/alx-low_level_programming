#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
char alpha = 'a';

for (; alpha <= 'z'; alpha++)
{
putchar(alpha);
if (alpha == 'z')
putchar('\n');
}
return (0);
