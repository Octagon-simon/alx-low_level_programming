#include <stdio.h>
#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
*
* @n: The integer to check
*
* Return: Always 0
*/
int print_last_digit(int n)
{
int r;
r = n % 10;
if (n < 0)
{
return (-r + 0);
}
else
{
return (r + 0);
}
}
