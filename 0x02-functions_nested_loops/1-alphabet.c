#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Prints the alphabets in lower case
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
