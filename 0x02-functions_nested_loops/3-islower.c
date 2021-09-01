#include <stdio.h>
#include "main.h"
/**
* _islower - Checks for lowercase character
*
* int c - Function Argument and type
*
* @c: The character to check
*
* Return: 1 if c = lowercase or 0 if otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
