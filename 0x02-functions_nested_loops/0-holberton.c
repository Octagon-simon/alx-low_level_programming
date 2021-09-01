#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
* main - Prints the word _putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char c[]= "_putchar";
for(i = 0; i <8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return(0);
}
