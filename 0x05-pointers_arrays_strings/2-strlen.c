#include<stdio.h>
#include "main.h"
/**
*_strlen - returns the length of a string..
*@s: The value to evaluate.
*Return: Length of string
*/
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
s++;
l++;
}
return (l);
}
