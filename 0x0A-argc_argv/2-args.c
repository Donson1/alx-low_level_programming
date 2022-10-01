#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int numarg = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (numarg < argc)
{
printf("%s\n", argv[numarg]);
numarg++;
}
}
return (0);
}
