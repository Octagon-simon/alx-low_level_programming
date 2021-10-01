#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - writes the character c to stdout
 * @separator: The character used for seperation
 * @n: The numbers to print
 * Return: nothing
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;
int result;
va_start(nums, n);
for (i = 0; i < n; i++)
{
result = va_arg(nums, int);
printf("%d", result);
/*Use this block to check if the last element is reached*/
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(nums);
printf("\n");
}
