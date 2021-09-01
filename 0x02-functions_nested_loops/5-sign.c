#include <stdio.h>
#include "main.h"
/**
* print_sign - Checks number sign
*
* int n - Function Argument and type
*
* @n: The number to check
*
* Return: 1 if n > 0, or 0 if n = 0, or -1 if otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
