#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10(void) - prints the aplhabet 10x
*
* Return: void
*/
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
