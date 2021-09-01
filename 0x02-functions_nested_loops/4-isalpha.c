#include <stdio.h>
#include "main.h"
/**
* _isalpha - This function Checks if the character is an alphabet
*
* @c: The character to check
*
* Return: 1 if c = alphabet or 0 if otherwise
*
*/
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
