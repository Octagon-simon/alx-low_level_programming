#include <stdio.h>
#include "main.h"
/**
* _islower - Checks for lowercase character
*
* Return: 1 if c = lowercase
* Return: 0 if c = uppercase
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
