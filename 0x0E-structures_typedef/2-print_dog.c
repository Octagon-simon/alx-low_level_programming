#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**print_dog - function prototype
*@d: pointer
*@name: dog name
*@age: dog age
*@owner: dog owner 
*Return: void
**/
void print_dog(struct dog *d)
{
if (d == NULL)
;
else
{
(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nill)\n");
(d->age) ? printf("Age: %f\n", d->age) : printf("Age: (nill)\n");
(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nill)\n");
}
}
