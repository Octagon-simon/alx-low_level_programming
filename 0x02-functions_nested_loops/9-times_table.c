#include <stdio.h>
#include "main.h"
/**
* times_table - prints 9 times table
*
* Return: void
*/
void times_table(void)
{
int i, r;
for (i = 0; i < 10; i++)
{
r = i * 9;
printf("%d\n", r);
}
}
