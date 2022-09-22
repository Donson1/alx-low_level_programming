#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int a, b;
	int gab;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (a = 0, gab = 0; str[a] != '\0'; a++)
	{
		if (str[0] > 96 && str[0] < 123)
			gab = 1;
		for (b = 0; nots[b] != '\0'; b++)
		{
			if (nots[b] == str[a])
				gab = 1;
		}

		if (gab)
		{
			if (str[a] > 96 && str[a] < 123)
			{
				str[a] -= 32;
				gab = 0;
			}
			else if (str[a] > 64 && str[a] < 91)
				gab = 0;
			else if (str[a] > 47 && str[a] < 58)
				gab = 0;
		}
	}
	return (str);
}
