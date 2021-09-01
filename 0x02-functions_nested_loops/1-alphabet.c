#include <stdio.h>
#include "main.h"
/**
* main - Prints the alphabets in lower case
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
return (0);
}
