#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string, to stdout
 *@str: value to be evaluate.
 *Return: none.
 */
void _puts(char *str)
{
int l = 0;
while (*(str + l) != '\0')
{
_putchar(str[l]);
l++;
}
_putchar('\n');
}
