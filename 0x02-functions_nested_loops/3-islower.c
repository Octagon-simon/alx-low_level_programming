#include <stdio.h>
#include "main.h"
/**
* _islower(int c) - Checks for lowercase character
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
