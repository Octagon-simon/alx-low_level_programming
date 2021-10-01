#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints the string in param
 * @n: The number of strings
 * @separator: The string to be printed b/w strings
 * Return: nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list str;
unsigned int i;
int result;
va_start(str, n);
for (i = 0; i < n; i++)
{
result = va_arg(str, int);
if (result + 0 == '\0')
{
printf("(nil)%s", separator);
}
else
{
printf("%s", result);
/*Use this block to check if the last element is reached*/
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
}
va_end(str);
printf("\n");
}
