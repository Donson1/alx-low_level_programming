#include "main.h"
#include <ctype.h>

/**
* _isdigit - checks for a digit (0 through 9).
* Prototype: int _isdigit(int c)
* @c: Integer
* Return: 1 if c is a digit else 0
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);

return (0);
}
