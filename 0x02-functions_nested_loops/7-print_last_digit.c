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
if (n < 0)
{
r = n % 10;
return (-r + 0);
}
else
{
return (r + 0);
}
}
