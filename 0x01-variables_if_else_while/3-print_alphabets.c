#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
*/
int main(void)
{
char sm_alpha = 'a';
char big_alpha = 'A';

for (; big_alpha <= 'Z'; big_alpha++)
{
for (; sm_alpha <= 'z'; sm_alpha++)
putchar(sm_alpha);
putchar(big_alpha);
if (big_alpha == 'Z')
putchar('\n');
}
	return (0);
}
