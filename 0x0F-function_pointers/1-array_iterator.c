#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a given function
 * @array: array
 * @size: length of array
 * @action: pointer to function that returns nothing
 * Return: Nothing.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
if (array != NULL)
{
action(array[i]);
}
}
