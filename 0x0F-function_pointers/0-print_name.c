#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the being
 * @f: pointer to function that returns nothing
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL || *name != '\0' || f != 'NULL')
f(name);
}

