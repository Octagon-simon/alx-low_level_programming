#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
*print_dog - function prototype
*@d: pointer
*Return: void
**/
void print_dog(struct dog *d)
{
if (d == NULL)
;
else
{
if (d->name != NULL)
printf("Name: %s\n", d->name)
else
{
printf("Name: (nill)\n");
}
if (d->age != NULL)
printf("Age: %f\n", d->age)
else
{
printf("Age: (nill)\n");
}
if (d->owner != NULL)
printf("Owner: %s\n", d->owner)
else
{
printf("Owner: (nill)\n");
}
}
}
