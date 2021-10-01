#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all its params
 * @n : variable name
 * Return: Always 0.
 **/
int sum_them_all(const unsigned int n, ...)
{
/*init result var*/
int result = 0;
/*declare ptr to arg list*/
va_list ptr;
/*init arg to list ptr*/
va_start(ptr, n);
/*loop statement*/
for (int i = 0; i < n; i++)
{
/*access current var and point to the next*/
result += va_arg(ptr, int);
/*end traversal*/
va_end(ptr);
if (n == 0)
return (0);
return (result);
}
}
