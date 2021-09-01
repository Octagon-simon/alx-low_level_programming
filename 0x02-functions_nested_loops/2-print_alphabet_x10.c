#include <stdio.h>
#include "main.h"
/**
* void print_alphabet_x10(void) - prints the aplhabet 10x
*
* Return: void
*/

void print_alphabet_x10(void)
{
char ch;
int i;
while (i < 10)
{
for (ch = "a"; ch <= "z"; ch++)
{
_putchar(ch);
}
return (0);
}
} 
