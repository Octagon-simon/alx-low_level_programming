#include "dog.h"
#include <stdlib.h>
/**
*init_dog - function prototype
*@d: poiner
*@name: dog name
*@age: dog age
*@owner: dog owner
* Return: void
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{    
d->name = name;
d->age = age;
d->owner = owner;
}
